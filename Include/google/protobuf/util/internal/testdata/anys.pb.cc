// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/util/internal/testdata/anys.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/util/internal/testdata/anys.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
namespace testing {
namespace anys {

namespace {

const ::google::protobuf::Descriptor* AnyIn_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AnyIn_reflection_ = NULL;
const ::google::protobuf::Descriptor* AnyOut_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AnyOut_reflection_ = NULL;
const ::google::protobuf::Descriptor* AnyM_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AnyM_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/util/internal/testdata/anys.proto");
  GOOGLE_CHECK(file != NULL);
  AnyIn_descriptor_ = file->message_type(0);
  static const int AnyIn_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AnyIn, something_),
  };
  AnyIn_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AnyIn_descriptor_,
      AnyIn::default_instance_,
      AnyIn_offsets_,
      -1,
      -1,
      -1,
      sizeof(AnyIn),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AnyIn, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AnyIn, _is_default_instance_));
  AnyOut_descriptor_ = file->message_type(1);
  static const int AnyOut_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AnyOut, any_),
  };
  AnyOut_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AnyOut_descriptor_,
      AnyOut::default_instance_,
      AnyOut_offsets_,
      -1,
      -1,
      -1,
      sizeof(AnyOut),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AnyOut, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AnyOut, _is_default_instance_));
  AnyM_descriptor_ = file->message_type(2);
  static const int AnyM_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AnyM, foo_),
  };
  AnyM_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AnyM_descriptor_,
      AnyM::default_instance_,
      AnyM_offsets_,
      -1,
      -1,
      -1,
      sizeof(AnyM),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AnyM, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AnyM, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AnyIn_descriptor_, &AnyIn::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AnyOut_descriptor_, &AnyOut::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AnyM_descriptor_, &AnyM::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto() {
  delete AnyIn::default_instance_;
  delete AnyIn_reflection_;
  delete AnyOut::default_instance_;
  delete AnyOut_reflection_;
  delete AnyM::default_instance_;
  delete AnyM_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fany_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n1google/protobuf/util/internal/testdata"
    "/anys.proto\022\034google.protobuf.testing.any"
    "s\032\031google/protobuf/any.proto\"\032\n\005AnyIn\022\021\n"
    "\tsomething\030\001 \001(\t\"+\n\006AnyOut\022!\n\003any\030\001 \001(\0132"
    "\024.google.protobuf.Any\"\023\n\004AnyM\022\013\n\003foo\030\001 \001"
    "(\t2`\n\013TestService\022Q\n\004Call\022#.google.proto"
    "buf.testing.anys.AnyIn\032$.google.protobuf"
    ".testing.anys.AnyOutB\"\n com.google.proto"
    "buf.testing.anysb\006proto3", 344);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/util/internal/testdata/anys.proto", &protobuf_RegisterTypes);
  AnyIn::default_instance_ = new AnyIn();
  AnyOut::default_instance_ = new AnyOut();
  AnyM::default_instance_ = new AnyM();
  AnyIn::default_instance_->InitAsDefaultInstance();
  AnyOut::default_instance_->InitAsDefaultInstance();
  AnyM::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AnyIn::kSomethingFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AnyIn::AnyIn()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.testing.anys.AnyIn)
}

void AnyIn::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

AnyIn::AnyIn(const AnyIn& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.testing.anys.AnyIn)
}

void AnyIn::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  something_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

AnyIn::~AnyIn() {
  // @@protoc_insertion_point(destructor:google.protobuf.testing.anys.AnyIn)
  SharedDtor();
}

void AnyIn::SharedDtor() {
  something_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void AnyIn::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AnyIn::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AnyIn_descriptor_;
}

const AnyIn& AnyIn::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto();
  return *default_instance_;
}

AnyIn* AnyIn::default_instance_ = NULL;

AnyIn* AnyIn::New(::google::protobuf::Arena* arena) const {
  AnyIn* n = new AnyIn;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AnyIn::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.testing.anys.AnyIn)
  something_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool AnyIn::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.testing.anys.AnyIn)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string something = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_something()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->something().data(), this->something().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.testing.anys.AnyIn.something"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.testing.anys.AnyIn)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.testing.anys.AnyIn)
  return false;
#undef DO_
}

void AnyIn::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.testing.anys.AnyIn)
  // optional string something = 1;
  if (this->something().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->something().data(), this->something().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.testing.anys.AnyIn.something");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->something(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.testing.anys.AnyIn)
}

::google::protobuf::uint8* AnyIn::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.testing.anys.AnyIn)
  // optional string something = 1;
  if (this->something().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->something().data(), this->something().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.testing.anys.AnyIn.something");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->something(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.testing.anys.AnyIn)
  return target;
}

int AnyIn::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.testing.anys.AnyIn)
  int total_size = 0;

  // optional string something = 1;
  if (this->something().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->something());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AnyIn::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.testing.anys.AnyIn)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AnyIn* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AnyIn>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.testing.anys.AnyIn)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.testing.anys.AnyIn)
    MergeFrom(*source);
  }
}

void AnyIn::MergeFrom(const AnyIn& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.testing.anys.AnyIn)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.something().size() > 0) {

    something_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.something_);
  }
}

void AnyIn::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.testing.anys.AnyIn)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AnyIn::CopyFrom(const AnyIn& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.testing.anys.AnyIn)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AnyIn::IsInitialized() const {

  return true;
}

void AnyIn::Swap(AnyIn* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AnyIn::InternalSwap(AnyIn* other) {
  something_.Swap(&other->something_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AnyIn::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AnyIn_descriptor_;
  metadata.reflection = AnyIn_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AnyIn

// optional string something = 1;
void AnyIn::clear_something() {
  something_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& AnyIn::something() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.anys.AnyIn.something)
  return something_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AnyIn::set_something(const ::std::string& value) {
  
  something_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.testing.anys.AnyIn.something)
}
 void AnyIn::set_something(const char* value) {
  
  something_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.testing.anys.AnyIn.something)
}
 void AnyIn::set_something(const char* value, size_t size) {
  
  something_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.testing.anys.AnyIn.something)
}
 ::std::string* AnyIn::mutable_something() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.testing.anys.AnyIn.something)
  return something_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* AnyIn::release_something() {
  // @@protoc_insertion_point(field_release:google.protobuf.testing.anys.AnyIn.something)
  
  return something_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AnyIn::set_allocated_something(::std::string* something) {
  if (something != NULL) {
    
  } else {
    
  }
  something_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), something);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.testing.anys.AnyIn.something)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AnyOut::kAnyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AnyOut::AnyOut()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.testing.anys.AnyOut)
}

void AnyOut::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  any_ = const_cast< ::google::protobuf::Any*>(&::google::protobuf::Any::default_instance());
}

AnyOut::AnyOut(const AnyOut& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.testing.anys.AnyOut)
}

void AnyOut::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  any_ = NULL;
}

AnyOut::~AnyOut() {
  // @@protoc_insertion_point(destructor:google.protobuf.testing.anys.AnyOut)
  SharedDtor();
}

void AnyOut::SharedDtor() {
  if (this != default_instance_) {
    delete any_;
  }
}

void AnyOut::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AnyOut::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AnyOut_descriptor_;
}

const AnyOut& AnyOut::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto();
  return *default_instance_;
}

AnyOut* AnyOut::default_instance_ = NULL;

AnyOut* AnyOut::New(::google::protobuf::Arena* arena) const {
  AnyOut* n = new AnyOut;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AnyOut::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.testing.anys.AnyOut)
  if (GetArenaNoVirtual() == NULL && any_ != NULL) delete any_;
  any_ = NULL;
}

bool AnyOut::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.testing.anys.AnyOut)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .google.protobuf.Any any = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_any()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.testing.anys.AnyOut)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.testing.anys.AnyOut)
  return false;
#undef DO_
}

void AnyOut::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.testing.anys.AnyOut)
  // optional .google.protobuf.Any any = 1;
  if (this->has_any()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->any_, output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.testing.anys.AnyOut)
}

::google::protobuf::uint8* AnyOut::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.testing.anys.AnyOut)
  // optional .google.protobuf.Any any = 1;
  if (this->has_any()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->any_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.testing.anys.AnyOut)
  return target;
}

int AnyOut::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.testing.anys.AnyOut)
  int total_size = 0;

  // optional .google.protobuf.Any any = 1;
  if (this->has_any()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->any_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AnyOut::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.testing.anys.AnyOut)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AnyOut* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AnyOut>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.testing.anys.AnyOut)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.testing.anys.AnyOut)
    MergeFrom(*source);
  }
}

void AnyOut::MergeFrom(const AnyOut& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.testing.anys.AnyOut)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_any()) {
    mutable_any()->::google::protobuf::Any::MergeFrom(from.any());
  }
}

void AnyOut::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.testing.anys.AnyOut)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AnyOut::CopyFrom(const AnyOut& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.testing.anys.AnyOut)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AnyOut::IsInitialized() const {

  return true;
}

void AnyOut::Swap(AnyOut* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AnyOut::InternalSwap(AnyOut* other) {
  std::swap(any_, other->any_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AnyOut::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AnyOut_descriptor_;
  metadata.reflection = AnyOut_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AnyOut

// optional .google.protobuf.Any any = 1;
bool AnyOut::has_any() const {
  return !_is_default_instance_ && any_ != NULL;
}
void AnyOut::clear_any() {
  if (GetArenaNoVirtual() == NULL && any_ != NULL) delete any_;
  any_ = NULL;
}
const ::google::protobuf::Any& AnyOut::any() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.anys.AnyOut.any)
  return any_ != NULL ? *any_ : *default_instance_->any_;
}
::google::protobuf::Any* AnyOut::mutable_any() {
  
  if (any_ == NULL) {
    any_ = new ::google::protobuf::Any;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.testing.anys.AnyOut.any)
  return any_;
}
::google::protobuf::Any* AnyOut::release_any() {
  // @@protoc_insertion_point(field_release:google.protobuf.testing.anys.AnyOut.any)
  
  ::google::protobuf::Any* temp = any_;
  any_ = NULL;
  return temp;
}
void AnyOut::set_allocated_any(::google::protobuf::Any* any) {
  delete any_;
  any_ = any;
  if (any) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.testing.anys.AnyOut.any)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AnyM::kFooFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AnyM::AnyM()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.testing.anys.AnyM)
}

void AnyM::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

AnyM::AnyM(const AnyM& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.testing.anys.AnyM)
}

void AnyM::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  foo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

AnyM::~AnyM() {
  // @@protoc_insertion_point(destructor:google.protobuf.testing.anys.AnyM)
  SharedDtor();
}

void AnyM::SharedDtor() {
  foo_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void AnyM::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AnyM::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AnyM_descriptor_;
}

const AnyM& AnyM::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fanys_2eproto();
  return *default_instance_;
}

AnyM* AnyM::default_instance_ = NULL;

AnyM* AnyM::New(::google::protobuf::Arena* arena) const {
  AnyM* n = new AnyM;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AnyM::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.testing.anys.AnyM)
  foo_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool AnyM::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.testing.anys.AnyM)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string foo = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_foo()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->foo().data(), this->foo().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.testing.anys.AnyM.foo"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.testing.anys.AnyM)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.testing.anys.AnyM)
  return false;
#undef DO_
}

void AnyM::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.testing.anys.AnyM)
  // optional string foo = 1;
  if (this->foo().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->foo().data(), this->foo().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.testing.anys.AnyM.foo");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->foo(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.testing.anys.AnyM)
}

::google::protobuf::uint8* AnyM::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.testing.anys.AnyM)
  // optional string foo = 1;
  if (this->foo().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->foo().data(), this->foo().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.testing.anys.AnyM.foo");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->foo(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.testing.anys.AnyM)
  return target;
}

int AnyM::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.testing.anys.AnyM)
  int total_size = 0;

  // optional string foo = 1;
  if (this->foo().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->foo());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AnyM::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.testing.anys.AnyM)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AnyM* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AnyM>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.testing.anys.AnyM)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.testing.anys.AnyM)
    MergeFrom(*source);
  }
}

void AnyM::MergeFrom(const AnyM& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.testing.anys.AnyM)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.foo().size() > 0) {

    foo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.foo_);
  }
}

void AnyM::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.testing.anys.AnyM)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AnyM::CopyFrom(const AnyM& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.testing.anys.AnyM)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AnyM::IsInitialized() const {

  return true;
}

void AnyM::Swap(AnyM* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AnyM::InternalSwap(AnyM* other) {
  foo_.Swap(&other->foo_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AnyM::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AnyM_descriptor_;
  metadata.reflection = AnyM_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AnyM

// optional string foo = 1;
void AnyM::clear_foo() {
  foo_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& AnyM::foo() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.anys.AnyM.foo)
  return foo_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AnyM::set_foo(const ::std::string& value) {
  
  foo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.testing.anys.AnyM.foo)
}
 void AnyM::set_foo(const char* value) {
  
  foo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.testing.anys.AnyM.foo)
}
 void AnyM::set_foo(const char* value, size_t size) {
  
  foo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.testing.anys.AnyM.foo)
}
 ::std::string* AnyM::mutable_foo() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.testing.anys.AnyM.foo)
  return foo_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* AnyM::release_foo() {
  // @@protoc_insertion_point(field_release:google.protobuf.testing.anys.AnyM.foo)
  
  return foo_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AnyM::set_allocated_foo(::std::string* foo) {
  if (foo != NULL) {
    
  } else {
    
  }
  foo_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), foo);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.testing.anys.AnyM.foo)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace anys
}  // namespace testing
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
