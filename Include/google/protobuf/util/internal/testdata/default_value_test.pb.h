// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/util/internal/testdata/default_value_test.proto

#ifndef PROTOBUF_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
namespace testing {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto();

class DefaultValueTest;

enum DefaultValueTest_EnumDefault {
  DefaultValueTest_EnumDefault_ENUM_FIRST = 0,
  DefaultValueTest_EnumDefault_ENUM_SECOND = 1,
  DefaultValueTest_EnumDefault_ENUM_THIRD = 2,
  DefaultValueTest_EnumDefault_DefaultValueTest_EnumDefault_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  DefaultValueTest_EnumDefault_DefaultValueTest_EnumDefault_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool DefaultValueTest_EnumDefault_IsValid(int value);
const DefaultValueTest_EnumDefault DefaultValueTest_EnumDefault_EnumDefault_MIN = DefaultValueTest_EnumDefault_ENUM_FIRST;
const DefaultValueTest_EnumDefault DefaultValueTest_EnumDefault_EnumDefault_MAX = DefaultValueTest_EnumDefault_ENUM_THIRD;
const int DefaultValueTest_EnumDefault_EnumDefault_ARRAYSIZE = DefaultValueTest_EnumDefault_EnumDefault_MAX + 1;

const ::google::protobuf::EnumDescriptor* DefaultValueTest_EnumDefault_descriptor();
inline const ::std::string& DefaultValueTest_EnumDefault_Name(DefaultValueTest_EnumDefault value) {
  return ::google::protobuf::internal::NameOfEnum(
    DefaultValueTest_EnumDefault_descriptor(), value);
}
inline bool DefaultValueTest_EnumDefault_Parse(
    const ::std::string& name, DefaultValueTest_EnumDefault* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DefaultValueTest_EnumDefault>(
    DefaultValueTest_EnumDefault_descriptor(), name, value);
}
// ===================================================================

class DefaultValueTest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.protobuf.testing.DefaultValueTest) */ {
 public:
  DefaultValueTest();
  virtual ~DefaultValueTest();

  DefaultValueTest(const DefaultValueTest& from);

  inline DefaultValueTest& operator=(const DefaultValueTest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DefaultValueTest& default_instance();

  void Swap(DefaultValueTest* other);

  // implements Message ----------------------------------------------

  inline DefaultValueTest* New() const { return New(NULL); }

  DefaultValueTest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DefaultValueTest& from);
  void MergeFrom(const DefaultValueTest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(DefaultValueTest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef DefaultValueTest_EnumDefault EnumDefault;
  static const EnumDefault ENUM_FIRST =
    DefaultValueTest_EnumDefault_ENUM_FIRST;
  static const EnumDefault ENUM_SECOND =
    DefaultValueTest_EnumDefault_ENUM_SECOND;
  static const EnumDefault ENUM_THIRD =
    DefaultValueTest_EnumDefault_ENUM_THIRD;
  static inline bool EnumDefault_IsValid(int value) {
    return DefaultValueTest_EnumDefault_IsValid(value);
  }
  static const EnumDefault EnumDefault_MIN =
    DefaultValueTest_EnumDefault_EnumDefault_MIN;
  static const EnumDefault EnumDefault_MAX =
    DefaultValueTest_EnumDefault_EnumDefault_MAX;
  static const int EnumDefault_ARRAYSIZE =
    DefaultValueTest_EnumDefault_EnumDefault_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  EnumDefault_descriptor() {
    return DefaultValueTest_EnumDefault_descriptor();
  }
  static inline const ::std::string& EnumDefault_Name(EnumDefault value) {
    return DefaultValueTest_EnumDefault_Name(value);
  }
  static inline bool EnumDefault_Parse(const ::std::string& name,
      EnumDefault* value) {
    return DefaultValueTest_EnumDefault_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional double double_value = 1;
  void clear_double_value();
  static const int kDoubleValueFieldNumber = 1;
  double double_value() const;
  void set_double_value(double value);

  // repeated double repeated_double = 2;
  int repeated_double_size() const;
  void clear_repeated_double();
  static const int kRepeatedDoubleFieldNumber = 2;
  double repeated_double(int index) const;
  void set_repeated_double(int index, double value);
  void add_repeated_double(double value);
  const ::google::protobuf::RepeatedField< double >&
      repeated_double() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_repeated_double();

  // optional float float_value = 3;
  void clear_float_value();
  static const int kFloatValueFieldNumber = 3;
  float float_value() const;
  void set_float_value(float value);

  // optional int64 int64_value = 5;
  void clear_int64_value();
  static const int kInt64ValueFieldNumber = 5;
  ::google::protobuf::int64 int64_value() const;
  void set_int64_value(::google::protobuf::int64 value);

  // optional uint64 uint64_value = 7;
  void clear_uint64_value();
  static const int kUint64ValueFieldNumber = 7;
  ::google::protobuf::uint64 uint64_value() const;
  void set_uint64_value(::google::protobuf::uint64 value);

  // optional int32 int32_value = 9;
  void clear_int32_value();
  static const int kInt32ValueFieldNumber = 9;
  ::google::protobuf::int32 int32_value() const;
  void set_int32_value(::google::protobuf::int32 value);

  // optional uint32 uint32_value = 11;
  void clear_uint32_value();
  static const int kUint32ValueFieldNumber = 11;
  ::google::protobuf::uint32 uint32_value() const;
  void set_uint32_value(::google::protobuf::uint32 value);

  // optional bool bool_value = 13;
  void clear_bool_value();
  static const int kBoolValueFieldNumber = 13;
  bool bool_value() const;
  void set_bool_value(bool value);

  // optional string string_value = 15;
  void clear_string_value();
  static const int kStringValueFieldNumber = 15;
  const ::std::string& string_value() const;
  void set_string_value(const ::std::string& value);
  void set_string_value(const char* value);
  void set_string_value(const char* value, size_t size);
  ::std::string* mutable_string_value();
  ::std::string* release_string_value();
  void set_allocated_string_value(::std::string* string_value);

  // optional bytes bytes_value = 17 [ctype = CORD];
  void clear_bytes_value();
  static const int kBytesValueFieldNumber = 17;
 private:
  // Hidden due to unknown ctype option.
  const ::std::string& bytes_value() const;
  void set_bytes_value(const ::std::string& value);
  void set_bytes_value(const char* value);
  void set_bytes_value(const void* value, size_t size);
  ::std::string* mutable_bytes_value();
  ::std::string* release_bytes_value();
  void set_allocated_bytes_value(::std::string* bytes_value);
 public:

  // optional .google.protobuf.testing.DefaultValueTest.EnumDefault enum_value = 18;
  void clear_enum_value();
  static const int kEnumValueFieldNumber = 18;
  ::google::protobuf::testing::DefaultValueTest_EnumDefault enum_value() const;
  void set_enum_value(::google::protobuf::testing::DefaultValueTest_EnumDefault value);

  // @@protoc_insertion_point(class_scope:google.protobuf.testing.DefaultValueTest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  double double_value_;
  ::google::protobuf::RepeatedField< double > repeated_double_;
  mutable int _repeated_double_cached_byte_size_;
  ::google::protobuf::int64 int64_value_;
  float float_value_;
  ::google::protobuf::int32 int32_value_;
  ::google::protobuf::uint64 uint64_value_;
  ::google::protobuf::uint32 uint32_value_;
  bool bool_value_;
  ::google::protobuf::internal::ArenaStringPtr string_value_;
  ::google::protobuf::internal::ArenaStringPtr bytes_value_;
  int enum_value_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto();

  void InitAsDefaultInstance();
  static DefaultValueTest* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// DefaultValueTest

// optional double double_value = 1;
inline void DefaultValueTest::clear_double_value() {
  double_value_ = 0;
}
inline double DefaultValueTest::double_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.DefaultValueTest.double_value)
  return double_value_;
}
inline void DefaultValueTest::set_double_value(double value) {
  
  double_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.testing.DefaultValueTest.double_value)
}

// repeated double repeated_double = 2;
inline int DefaultValueTest::repeated_double_size() const {
  return repeated_double_.size();
}
inline void DefaultValueTest::clear_repeated_double() {
  repeated_double_.Clear();
}
inline double DefaultValueTest::repeated_double(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.DefaultValueTest.repeated_double)
  return repeated_double_.Get(index);
}
inline void DefaultValueTest::set_repeated_double(int index, double value) {
  repeated_double_.Set(index, value);
  // @@protoc_insertion_point(field_set:google.protobuf.testing.DefaultValueTest.repeated_double)
}
inline void DefaultValueTest::add_repeated_double(double value) {
  repeated_double_.Add(value);
  // @@protoc_insertion_point(field_add:google.protobuf.testing.DefaultValueTest.repeated_double)
}
inline const ::google::protobuf::RepeatedField< double >&
DefaultValueTest::repeated_double() const {
  // @@protoc_insertion_point(field_list:google.protobuf.testing.DefaultValueTest.repeated_double)
  return repeated_double_;
}
inline ::google::protobuf::RepeatedField< double >*
DefaultValueTest::mutable_repeated_double() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.testing.DefaultValueTest.repeated_double)
  return &repeated_double_;
}

// optional float float_value = 3;
inline void DefaultValueTest::clear_float_value() {
  float_value_ = 0;
}
inline float DefaultValueTest::float_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.DefaultValueTest.float_value)
  return float_value_;
}
inline void DefaultValueTest::set_float_value(float value) {
  
  float_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.testing.DefaultValueTest.float_value)
}

// optional int64 int64_value = 5;
inline void DefaultValueTest::clear_int64_value() {
  int64_value_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 DefaultValueTest::int64_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.DefaultValueTest.int64_value)
  return int64_value_;
}
inline void DefaultValueTest::set_int64_value(::google::protobuf::int64 value) {
  
  int64_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.testing.DefaultValueTest.int64_value)
}

// optional uint64 uint64_value = 7;
inline void DefaultValueTest::clear_uint64_value() {
  uint64_value_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 DefaultValueTest::uint64_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.DefaultValueTest.uint64_value)
  return uint64_value_;
}
inline void DefaultValueTest::set_uint64_value(::google::protobuf::uint64 value) {
  
  uint64_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.testing.DefaultValueTest.uint64_value)
}

// optional int32 int32_value = 9;
inline void DefaultValueTest::clear_int32_value() {
  int32_value_ = 0;
}
inline ::google::protobuf::int32 DefaultValueTest::int32_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.DefaultValueTest.int32_value)
  return int32_value_;
}
inline void DefaultValueTest::set_int32_value(::google::protobuf::int32 value) {
  
  int32_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.testing.DefaultValueTest.int32_value)
}

// optional uint32 uint32_value = 11;
inline void DefaultValueTest::clear_uint32_value() {
  uint32_value_ = 0u;
}
inline ::google::protobuf::uint32 DefaultValueTest::uint32_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.DefaultValueTest.uint32_value)
  return uint32_value_;
}
inline void DefaultValueTest::set_uint32_value(::google::protobuf::uint32 value) {
  
  uint32_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.testing.DefaultValueTest.uint32_value)
}

// optional bool bool_value = 13;
inline void DefaultValueTest::clear_bool_value() {
  bool_value_ = false;
}
inline bool DefaultValueTest::bool_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.DefaultValueTest.bool_value)
  return bool_value_;
}
inline void DefaultValueTest::set_bool_value(bool value) {
  
  bool_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.testing.DefaultValueTest.bool_value)
}

// optional string string_value = 15;
inline void DefaultValueTest::clear_string_value() {
  string_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DefaultValueTest::string_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.DefaultValueTest.string_value)
  return string_value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DefaultValueTest::set_string_value(const ::std::string& value) {
  
  string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.testing.DefaultValueTest.string_value)
}
inline void DefaultValueTest::set_string_value(const char* value) {
  
  string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.testing.DefaultValueTest.string_value)
}
inline void DefaultValueTest::set_string_value(const char* value, size_t size) {
  
  string_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.testing.DefaultValueTest.string_value)
}
inline ::std::string* DefaultValueTest::mutable_string_value() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.testing.DefaultValueTest.string_value)
  return string_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DefaultValueTest::release_string_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.testing.DefaultValueTest.string_value)
  
  return string_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DefaultValueTest::set_allocated_string_value(::std::string* string_value) {
  if (string_value != NULL) {
    
  } else {
    
  }
  string_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), string_value);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.testing.DefaultValueTest.string_value)
}

// optional bytes bytes_value = 17 [ctype = CORD];
inline void DefaultValueTest::clear_bytes_value() {
  bytes_value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DefaultValueTest::bytes_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.DefaultValueTest.bytes_value)
  return bytes_value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DefaultValueTest::set_bytes_value(const ::std::string& value) {
  
  bytes_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.testing.DefaultValueTest.bytes_value)
}
inline void DefaultValueTest::set_bytes_value(const char* value) {
  
  bytes_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.testing.DefaultValueTest.bytes_value)
}
inline void DefaultValueTest::set_bytes_value(const void* value, size_t size) {
  
  bytes_value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.testing.DefaultValueTest.bytes_value)
}
inline ::std::string* DefaultValueTest::mutable_bytes_value() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.testing.DefaultValueTest.bytes_value)
  return bytes_value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DefaultValueTest::release_bytes_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.testing.DefaultValueTest.bytes_value)
  
  return bytes_value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DefaultValueTest::set_allocated_bytes_value(::std::string* bytes_value) {
  if (bytes_value != NULL) {
    
  } else {
    
  }
  bytes_value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), bytes_value);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.testing.DefaultValueTest.bytes_value)
}

// optional .google.protobuf.testing.DefaultValueTest.EnumDefault enum_value = 18;
inline void DefaultValueTest::clear_enum_value() {
  enum_value_ = 0;
}
inline ::google::protobuf::testing::DefaultValueTest_EnumDefault DefaultValueTest::enum_value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.DefaultValueTest.enum_value)
  return static_cast< ::google::protobuf::testing::DefaultValueTest_EnumDefault >(enum_value_);
}
inline void DefaultValueTest::set_enum_value(::google::protobuf::testing::DefaultValueTest_EnumDefault value) {
  
  enum_value_ = value;
  // @@protoc_insertion_point(field_set:google.protobuf.testing.DefaultValueTest.enum_value)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace testing
}  // namespace protobuf
}  // namespace google

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::google::protobuf::testing::DefaultValueTest_EnumDefault> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::protobuf::testing::DefaultValueTest_EnumDefault>() {
  return ::google::protobuf::testing::DefaultValueTest_EnumDefault_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2futil_2finternal_2ftestdata_2fdefault_5fvalue_5ftest_2eproto__INCLUDED
