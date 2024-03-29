// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SCHEMA_H_
#define FLATBUFFERS_GENERATED_SCHEMA_H_

#include "flatbuffers/flatbuffers.h"

struct a_table;
struct a_tableBuilder;

struct a_table FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef a_tableBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_A_NAME = 4,
    VT_A_VALUE = 6,
    VT_A_FLAG = 8
  };
  const flatbuffers::String *a_name() const {
    return GetPointer<const flatbuffers::String *>(VT_A_NAME);
  }
  float a_value() const {
    return GetField<float>(VT_A_VALUE, 0.0f);
  }
  bool a_flag() const {
    return GetField<uint8_t>(VT_A_FLAG, 0) != 0;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_A_NAME) &&
           verifier.VerifyString(a_name()) &&
           VerifyField<float>(verifier, VT_A_VALUE) &&
           VerifyField<uint8_t>(verifier, VT_A_FLAG) &&
           verifier.EndTable();
  }
};

struct a_tableBuilder {
  typedef a_table Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_a_name(flatbuffers::Offset<flatbuffers::String> a_name) {
    fbb_.AddOffset(a_table::VT_A_NAME, a_name);
  }
  void add_a_value(float a_value) {
    fbb_.AddElement<float>(a_table::VT_A_VALUE, a_value, 0.0f);
  }
  void add_a_flag(bool a_flag) {
    fbb_.AddElement<uint8_t>(a_table::VT_A_FLAG, static_cast<uint8_t>(a_flag), 0);
  }
  explicit a_tableBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<a_table> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<a_table>(end);
    return o;
  }
};

inline flatbuffers::Offset<a_table> Createa_table(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> a_name = 0,
    float a_value = 0.0f,
    bool a_flag = false) {
  a_tableBuilder builder_(_fbb);
  builder_.add_a_value(a_value);
  builder_.add_a_name(a_name);
  builder_.add_a_flag(a_flag);
  return builder_.Finish();
}

inline flatbuffers::Offset<a_table> Createa_tableDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *a_name = nullptr,
    float a_value = 0.0f,
    bool a_flag = false) {
  auto a_name__ = a_name ? _fbb.CreateString(a_name) : 0;
  return Createa_table(
      _fbb,
      a_name__,
      a_value,
      a_flag);
}

inline const a_table *Geta_table(const void *buf) {
  return flatbuffers::GetRoot<a_table>(buf);
}

inline const a_table *GetSizePrefixeda_table(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<a_table>(buf);
}

inline bool Verifya_tableBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<a_table>(nullptr);
}

inline bool VerifySizePrefixeda_tableBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<a_table>(nullptr);
}

inline void Finisha_tableBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<a_table> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixeda_tableBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<a_table> root) {
  fbb.FinishSizePrefixed(root);
}

#endif  // FLATBUFFERS_GENERATED_SCHEMA_H_
