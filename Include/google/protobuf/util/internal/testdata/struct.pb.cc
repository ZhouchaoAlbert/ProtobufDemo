// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/util/internal/testdata/struct.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/util/internal/testdata/struct.pb.h>

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
namespace structs {

namespace {

const ::google::protobuf::Descriptor* StructType_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  StructType_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/util/internal/testdata/struct.proto");
  GOOGLE_CHECK(file != NULL);
  StructType_descriptor_ = file->message_type(0);
  static const int StructType_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StructType, object_),
  };
  StructType_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      StructType_descriptor_,
      StructType::default_instance_,
      StructType_offsets_,
      -1,
      -1,
      -1,
      sizeof(StructType),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StructType, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StructType, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      StructType_descriptor_, &StructType::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto() {
  delete StructType::default_instance_;
  delete StructType_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fstruct_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n3google/protobuf/util/internal/testdata"
    "/struct.proto\022\037google.protobuf.testing.s"
    "tructs\032\034google/protobuf/struct.proto\"5\n\n"
    "StructType\022\'\n\006object\030\001 \001(\0132\027.google.prot"
    "obuf.Struct2o\n\013TestService\022`\n\004Call\022+.goo"
    "gle.protobuf.testing.structs.StructType\032"
    "+.google.protobuf.testing.structs.Struct"
    "TypeB%\n#com.google.protobuf.testing.stru"
    "ctsb\006proto3", 331);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/util/internal/testdata/struct.proto", &protobuf_RegisterTypes);
  StructType::default_instance_ = new StructType();
  StructType::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StructType::kObjectFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StructType::StructType()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.testing.structs.StructType)
}

void StructType::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  object_ = const_cast< ::google::protobuf::Struct*>(&::google::protobuf::Struct::default_instance());
}

StructType::StructType(const StructType& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.testing.structs.StructType)
}

void StructType::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  object_ = NULL;
}

StructType::~StructType() {
  // @@protoc_insertion_point(destructor:google.protobuf.testing.structs.StructType)
  SharedDtor();
}

void StructType::SharedDtor() {
  if (this != default_instance_) {
    delete object_;
  }
}

void StructType::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StructType::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StructType_descriptor_;
}

const StructType& StructType::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2futil_2finternal_2ftestdata_2fstruct_2eproto();
  return *default_instance_;
}

StructType* StructType::default_instance_ = NULL;

StructType* StructType::New(::google::protobuf::Arena* arena) const {
  StructType* n = new StructType;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StructType::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.testing.structs.StructType)
  if (GetArenaNoVirtual() == NULL && object_ != NULL) delete object_;
  object_ = NULL;
}

bool StructType::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.testing.structs.StructType)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .google.protobuf.Struct object = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_object()));
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
  // @@protoc_insertion_point(parse_success:google.protobuf.testing.structs.StructType)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.testing.structs.StructType)
  return false;
#undef DO_
}

void StructType::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.testing.structs.StructType)
  // optional .google.protobuf.Struct object = 1;
  if (this->has_object()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->object_, output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.testing.structs.StructType)
}

::google::protobuf::uint8* StructType::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.testing.structs.StructType)
  // optional .google.protobuf.Struct object = 1;
  if (this->has_object()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->object_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.testing.structs.StructType)
  return target;
}

int StructType::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.testing.structs.StructType)
  int total_size = 0;

  // optional .google.protobuf.Struct object = 1;
  if (this->has_object()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->object_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StructType::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.testing.structs.StructType)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const StructType* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const StructType>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.testing.structs.StructType)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.testing.structs.StructType)
    MergeFrom(*source);
  }
}

void StructType::MergeFrom(const StructType& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.testing.structs.StructType)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_object()) {
    mutable_object()->::google::protobuf::Struct::MergeFrom(from.object());
  }
}

void StructType::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.testing.structs.StructType)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StructType::CopyFrom(const StructType& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.testing.structs.StructType)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StructType::IsInitialized() const {

  return true;
}

void StructType::Swap(StructType* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StructType::InternalSwap(StructType* other) {
  std::swap(object_, other->object_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata StructType::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = StructType_descriptor_;
  metadata.reflection = StructType_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// StructType

// optional .google.protobuf.Struct object = 1;
bool StructType::has_object() const {
  return !_is_default_instance_ && object_ != NULL;
}
void StructType::clear_object() {
  if (GetArenaNoVirtual() == NULL && object_ != NULL) delete object_;
  object_ = NULL;
}
const ::google::protobuf::Struct& StructType::object() const {
  // @@protoc_insertion_point(field_get:google.protobuf.testing.structs.StructType.object)
  return object_ != NULL ? *object_ : *default_instance_->object_;
}
::google::protobuf::Struct* StructType::mutable_object() {
  
  if (object_ == NULL) {
    object_ = new ::google::protobuf::Struct;
  }
  // @@protoc_insertion_point(field_mutable:google.protobuf.testing.structs.StructType.object)
  return object_;
}
::google::protobuf::Struct* StructType::release_object() {
  // @@protoc_insertion_point(field_release:google.protobuf.testing.structs.StructType.object)
  
  ::google::protobuf::Struct* temp = object_;
  object_ = NULL;
  return temp;
}
void StructType::set_allocated_object(::google::protobuf::Struct* object) {
  delete object_;
  object_ = object;
  if (object) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.testing.structs.StructType.object)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace structs
}  // namespace testing
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
