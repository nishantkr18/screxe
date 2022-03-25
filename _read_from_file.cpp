#include "schemas/optimized_schema_generated.h"
#include "schemas/schema_generated.h"
#include <fstream>  // C++ header file for file access
#include <iostream> // C++ header file for printing

int main() {
  std::ifstream infile;
  infile.open("files/simple.bin", std::ios::binary | std::ios::in);
  infile.seekg(0, std::ios::end);
  int length = infile.tellg();
  infile.seekg(0, std::ios::beg);
  char *data = new char[length];
  infile.read(data, length);
  infile.close();

  auto example = GetSizePrefixedExample(data);
  std::cout << example->name()->c_str() << std::endl;
}