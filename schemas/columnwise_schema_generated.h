// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_COLUMNWISESCHEMA_H_
#define FLATBUFFERS_GENERATED_COLUMNWISESCHEMA_H_

#include "flatbuffers/flatbuffers.h"

struct Feature;
struct FeatureBuilder;

struct AllExample;
struct AllExampleBuilder;

struct Feature FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef FeatureBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_SIZE = 6
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  uint8_t size() const {
    return GetField<uint8_t>(VT_SIZE, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<uint8_t>(verifier, VT_SIZE) &&
           verifier.EndTable();
  }
};

struct FeatureBuilder {
  typedef Feature Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Feature::VT_NAME, name);
  }
  void add_size(uint8_t size) {
    fbb_.AddElement<uint8_t>(Feature::VT_SIZE, size, 0);
  }
  explicit FeatureBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Feature> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Feature>(end);
    return o;
  }
};

inline flatbuffers::Offset<Feature> CreateFeature(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    uint8_t size = 0) {
  FeatureBuilder builder_(_fbb);
  builder_.add_name(name);
  builder_.add_size(size);
  return builder_.Finish();
}

inline flatbuffers::Offset<Feature> CreateFeatureDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    uint8_t size = 0) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return CreateFeature(
      _fbb,
      name__,
      size);
}

struct AllExample FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef AllExampleBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_SIZE = 6,
    VT_FEATURE_NAMES = 8,
    VT_FEATURE_SIZES = 10
  };
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *name() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_NAME);
  }
  const flatbuffers::Vector<uint8_t> *size() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_SIZE);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *feature_names() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_FEATURE_NAMES);
  }
  const flatbuffers::Vector<uint8_t> *feature_sizes() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_FEATURE_SIZES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyVector(name()) &&
           verifier.VerifyVectorOfStrings(name()) &&
           VerifyOffset(verifier, VT_SIZE) &&
           verifier.VerifyVector(size()) &&
           VerifyOffset(verifier, VT_FEATURE_NAMES) &&
           verifier.VerifyVector(feature_names()) &&
           verifier.VerifyVectorOfStrings(feature_names()) &&
           VerifyOffset(verifier, VT_FEATURE_SIZES) &&
           verifier.VerifyVector(feature_sizes()) &&
           verifier.EndTable();
  }
};

struct AllExampleBuilder {
  typedef AllExample Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> name) {
    fbb_.AddOffset(AllExample::VT_NAME, name);
  }
  void add_size(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> size) {
    fbb_.AddOffset(AllExample::VT_SIZE, size);
  }
  void add_feature_names(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> feature_names) {
    fbb_.AddOffset(AllExample::VT_FEATURE_NAMES, feature_names);
  }
  void add_feature_sizes(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> feature_sizes) {
    fbb_.AddOffset(AllExample::VT_FEATURE_SIZES, feature_sizes);
  }
  explicit AllExampleBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<AllExample> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<AllExample>(end);
    return o;
  }
};

inline flatbuffers::Offset<AllExample> CreateAllExample(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> size = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> feature_names = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> feature_sizes = 0) {
  AllExampleBuilder builder_(_fbb);
  builder_.add_feature_sizes(feature_sizes);
  builder_.add_feature_names(feature_names);
  builder_.add_size(size);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<AllExample> CreateAllExampleDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *name = nullptr,
    const std::vector<uint8_t> *size = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *feature_names = nullptr,
    const std::vector<uint8_t> *feature_sizes = nullptr) {
  auto name__ = name ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*name) : 0;
  auto size__ = size ? _fbb.CreateVector<uint8_t>(*size) : 0;
  auto feature_names__ = feature_names ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*feature_names) : 0;
  auto feature_sizes__ = feature_sizes ? _fbb.CreateVector<uint8_t>(*feature_sizes) : 0;
  return CreateAllExample(
      _fbb,
      name__,
      size__,
      feature_names__,
      feature_sizes__);
}

inline const AllExample *GetAllExample(const void *buf) {
  return flatbuffers::GetRoot<AllExample>(buf);
}

inline const AllExample *GetSizePrefixedAllExample(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<AllExample>(buf);
}

inline bool VerifyAllExampleBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<AllExample>(nullptr);
}

inline bool VerifySizePrefixedAllExampleBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<AllExample>(nullptr);
}

inline void FinishAllExampleBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<AllExample> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedAllExampleBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<AllExample> root) {
  fbb.FinishSizePrefixed(root);
}

#endif  // FLATBUFFERS_GENERATED_COLUMNWISESCHEMA_H_
