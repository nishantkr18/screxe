// #include "flatbuffers/flatbuffers.h"
#include "schemas/optimized_schema_generated.h"
#include "schemas/schema_generated.h"
#include <fstream>  // C++ header file for file access
#include <iostream> // C++ header file for printing

std::vector<std::string> feature_names = {"Feature1", "Feature2", "Feature3",
                                          "Feature4", "Feature5", "Feature6"};
std::string example_name = "Example1";

void write_to_file(flatbuffers::FlatBufferBuilder &builder, std::string name) {
  uint8_t *buf = builder.GetBufferPointer();
  int size = builder.GetSize(); // Returns the size of the buffer that
                                // `GetBufferPointer()` points to.

  std::cout << name << std::endl;
  std::cout << size << std::endl;

  // Denotes number of Megabytes alloted to the file.
  std::cout << size / 1024.0 / 1024.0 << std::endl;

  std::cout << std::endl;

  std::ofstream outfile;
  outfile.open("files/" + name + ".bin", std::ios::binary | std::ios::out);
  builder.Clear();
  outfile.write(reinterpret_cast<char *>(buf), size);
}

void write_to_buf(flatbuffers::FlatBufferBuilder &builder) {
  for (int i = 0; i < 100000; i++) {
    // Creating a vector of features to store in the example.
    std::vector<flatbuffers::Offset<Feature>> features;

    // Iterating through the feature names.
    for (auto feature_name : feature_names) {
      auto feature = CreateFeatureDirect(builder, feature_name.c_str(),
                                         feature_name.length());
      features.push_back(feature);
      // features.push_back(CreateFeature(builder,
      //                                     builder.CreateSharedString(feature),
      //                                     feature.length()));
    }

    // Creating the example from the given data.
    auto example = CreateExampleDirect(builder, example_name.c_str(),
                                       example_name.length(), &features);

    // Finishing the serialization of buffer by wrting the root offset.
    builder.FinishSizePrefixed(example);
  }
  write_to_file(builder, "simple");
}

void optimized_write_to_buf(flatbuffers::FlatBufferBuilder &builder) {

  for (int i = 0; i < 100000; i++) {

    std::vector<uint8_t> sizes;
    std::vector<flatbuffers::Offset<flatbuffers::String>> feature_names_vector;

    for (auto feature_name : feature_names) {
      feature_names_vector.push_back(builder.CreateSharedString(feature_name));
      sizes.push_back(feature_name.length());
    }

    auto example = CreateExampleOptimizedDirect(builder, example_name.c_str(),
                                                example_name.length(),
                                                &feature_names_vector, &sizes);
    builder.FinishSizePrefixed(example);
  }
  write_to_file(builder, "optimized");
}

int main() {
  flatbuffers::FlatBufferBuilder builder(1024);
  flatbuffers::FlatBufferBuilder builder2(1024);

  write_to_buf(builder);
  optimized_write_to_buf(builder2);
}