// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_mset_wire_format.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/unittest_mset_wire_format.pb.h>

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

namespace proto2_wireformat_unittest {

namespace {

const ::google::protobuf::Descriptor* TestMessageSet_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TestMessageSet_reflection_ = NULL;
const ::google::protobuf::Descriptor* TestMessageSetWireFormatContainer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TestMessageSetWireFormatContainer_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/unittest_mset_wire_format.proto");
  GOOGLE_CHECK(file != NULL);
  TestMessageSet_descriptor_ = file->message_type(0);
  static const int TestMessageSet_offsets_[1] = {
  };
  TestMessageSet_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TestMessageSet_descriptor_,
      TestMessageSet::default_instance_,
      TestMessageSet_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessageSet, _has_bits_[0]),
      -1,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessageSet, _extensions_),
      sizeof(TestMessageSet),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessageSet, _internal_metadata_),
      -1);
  TestMessageSetWireFormatContainer_descriptor_ = file->message_type(1);
  static const int TestMessageSetWireFormatContainer_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessageSetWireFormatContainer, message_set_),
  };
  TestMessageSetWireFormatContainer_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      TestMessageSetWireFormatContainer_descriptor_,
      TestMessageSetWireFormatContainer::default_instance_,
      TestMessageSetWireFormatContainer_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessageSetWireFormatContainer, _has_bits_[0]),
      -1,
      -1,
      sizeof(TestMessageSetWireFormatContainer),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessageSetWireFormatContainer, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TestMessageSet_descriptor_, &TestMessageSet::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      TestMessageSetWireFormatContainer_descriptor_, &TestMessageSetWireFormatContainer::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto() {
  delete TestMessageSet::default_instance_;
  delete TestMessageSet_reflection_;
  delete TestMessageSetWireFormatContainer::default_instance_;
  delete TestMessageSetWireFormatContainer_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n/google/protobuf/unittest_mset_wire_for"
    "mat.proto\022\032proto2_wireformat_unittest\"\036\n"
    "\016TestMessageSet*\010\010\004\020\377\377\377\377\007:\002\010\001\"d\n!TestMes"
    "sageSetWireFormatContainer\022\?\n\013message_se"
    "t\030\001 \001(\0132*.proto2_wireformat_unittest.Tes"
    "tMessageSetB)H\001\370\001\001\252\002!Google.ProtocolBuff"
    "ers.TestProtos", 254);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/unittest_mset_wire_format.proto", &protobuf_RegisterTypes);
  TestMessageSet::default_instance_ = new TestMessageSet();
  TestMessageSetWireFormatContainer::default_instance_ = new TestMessageSetWireFormatContainer();
  TestMessageSet::default_instance_->InitAsDefaultInstance();
  TestMessageSetWireFormatContainer::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TestMessageSet::TestMessageSet()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto2_wireformat_unittest.TestMessageSet)
}

TestMessageSet::TestMessageSet(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _extensions_(arena),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto2_wireformat_unittest.TestMessageSet)
}

void TestMessageSet::InitAsDefaultInstance() {
}

TestMessageSet::TestMessageSet(const TestMessageSet& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:proto2_wireformat_unittest.TestMessageSet)
}

void TestMessageSet::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TestMessageSet::~TestMessageSet() {
  // @@protoc_insertion_point(destructor:proto2_wireformat_unittest.TestMessageSet)
  SharedDtor();
}

void TestMessageSet::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  if (this != default_instance_) {
  }
}

void TestMessageSet::ArenaDtor(void* object) {
  TestMessageSet* _this = reinterpret_cast< TestMessageSet* >(object);
  (void)_this;
}
void TestMessageSet::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void TestMessageSet::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestMessageSet::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestMessageSet_descriptor_;
}

const TestMessageSet& TestMessageSet::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto();
  return *default_instance_;
}

TestMessageSet* TestMessageSet::default_instance_ = NULL;

TestMessageSet* TestMessageSet::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<TestMessageSet>(arena);
}

void TestMessageSet::Clear() {
// @@protoc_insertion_point(message_clear_start:proto2_wireformat_unittest.TestMessageSet)
  _extensions_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool TestMessageSet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
  return _extensions_.ParseMessageSet(input, default_instance_,
                                      mutable_unknown_fields());
}

void TestMessageSet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  _extensions_.SerializeMessageSetWithCachedSizes(output);
  ::google::protobuf::internal::WireFormat::SerializeUnknownMessageSetItems(
      unknown_fields(), output);
}

::google::protobuf::uint8* TestMessageSet::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  target = _extensions_.InternalSerializeMessageSetWithCachedSizesToArray(
               deterministic, target);
  target = ::google::protobuf::internal::WireFormat::
             SerializeUnknownMessageSetItemsToArray(
               unknown_fields(), target);
  return target;
}

int TestMessageSet::ByteSize() const {
// @@protoc_insertion_point(message_set_byte_size_start:proto2_wireformat_unittest.TestMessageSet)
  int total_size = _extensions_.MessageSetByteSize();
if (_internal_metadata_.have_unknown_fields()) {
  total_size += ::google::protobuf::internal::WireFormat::
      ComputeUnknownMessageSetItemsSize(unknown_fields());
}
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestMessageSet::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto2_wireformat_unittest.TestMessageSet)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const TestMessageSet* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const TestMessageSet>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto2_wireformat_unittest.TestMessageSet)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto2_wireformat_unittest.TestMessageSet)
    MergeFrom(*source);
  }
}

void TestMessageSet::MergeFrom(const TestMessageSet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto2_wireformat_unittest.TestMessageSet)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  _extensions_.MergeFrom(from._extensions_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void TestMessageSet::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto2_wireformat_unittest.TestMessageSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestMessageSet::CopyFrom(const TestMessageSet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto2_wireformat_unittest.TestMessageSet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestMessageSet::IsInitialized() const {


  if (!_extensions_.IsInitialized()) return false;  return true;
}

void TestMessageSet::Swap(TestMessageSet* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    TestMessageSet temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void TestMessageSet::UnsafeArenaSwap(TestMessageSet* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void TestMessageSet::InternalSwap(TestMessageSet* other) {
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
  _extensions_.Swap(&other->_extensions_);
}

::google::protobuf::Metadata TestMessageSet::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TestMessageSet_descriptor_;
  metadata.reflection = TestMessageSet_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TestMessageSet

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

void TestMessageSetWireFormatContainer::_slow_mutable_message_set() {
  message_set_ = ::google::protobuf::Arena::CreateMessage< ::proto2_wireformat_unittest::TestMessageSet >(
      GetArenaNoVirtual());
}
::proto2_wireformat_unittest::TestMessageSet* TestMessageSetWireFormatContainer::_slow_release_message_set() {
  if (message_set_ == NULL) {
    return NULL;
  } else {
    ::proto2_wireformat_unittest::TestMessageSet* temp = new ::proto2_wireformat_unittest::TestMessageSet;
    temp->MergeFrom(*message_set_);
    message_set_ = NULL;
    return temp;
  }
}
::proto2_wireformat_unittest::TestMessageSet* TestMessageSetWireFormatContainer::unsafe_arena_release_message_set() {
  // @@protoc_insertion_point(field_unsafe_arena_release:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
  clear_has_message_set();
  ::proto2_wireformat_unittest::TestMessageSet* temp = message_set_;
  message_set_ = NULL;
  return temp;
}
void TestMessageSetWireFormatContainer::_slow_set_allocated_message_set(
    ::google::protobuf::Arena* message_arena, ::proto2_wireformat_unittest::TestMessageSet** message_set) {
    if (message_arena != NULL && 
        ::google::protobuf::Arena::GetArena(*message_set) == NULL) {
      message_arena->Own(*message_set);
    } else if (message_arena !=
               ::google::protobuf::Arena::GetArena(*message_set)) {
      ::proto2_wireformat_unittest::TestMessageSet* new_message_set = 
            ::google::protobuf::Arena::CreateMessage< ::proto2_wireformat_unittest::TestMessageSet >(
            message_arena);
      new_message_set->CopyFrom(**message_set);
      *message_set = new_message_set;
    }
}
void TestMessageSetWireFormatContainer::unsafe_arena_set_allocated_message_set(
    ::proto2_wireformat_unittest::TestMessageSet* message_set) {
  if (GetArenaNoVirtual() == NULL) {
    delete message_set_;
  }
  message_set_ = message_set;
  if (message_set) {
    set_has_message_set();
  } else {
    clear_has_message_set();
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TestMessageSetWireFormatContainer::kMessageSetFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TestMessageSetWireFormatContainer::TestMessageSetWireFormatContainer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
}

TestMessageSetWireFormatContainer::TestMessageSetWireFormatContainer(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
}

void TestMessageSetWireFormatContainer::InitAsDefaultInstance() {
  message_set_ = const_cast< ::proto2_wireformat_unittest::TestMessageSet*>(&::proto2_wireformat_unittest::TestMessageSet::default_instance());
}

TestMessageSetWireFormatContainer::TestMessageSetWireFormatContainer(const TestMessageSetWireFormatContainer& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
}

void TestMessageSetWireFormatContainer::SharedCtor() {
  _cached_size_ = 0;
  message_set_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TestMessageSetWireFormatContainer::~TestMessageSetWireFormatContainer() {
  // @@protoc_insertion_point(destructor:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  SharedDtor();
}

void TestMessageSetWireFormatContainer::SharedDtor() {
  if (GetArenaNoVirtual() != NULL) {
    return;
  }

  if (this != default_instance_) {
    delete message_set_;
  }
}

void TestMessageSetWireFormatContainer::ArenaDtor(void* object) {
  TestMessageSetWireFormatContainer* _this = reinterpret_cast< TestMessageSetWireFormatContainer* >(object);
  (void)_this;
}
void TestMessageSetWireFormatContainer::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void TestMessageSetWireFormatContainer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestMessageSetWireFormatContainer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestMessageSetWireFormatContainer_descriptor_;
}

const TestMessageSetWireFormatContainer& TestMessageSetWireFormatContainer::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2funittest_5fmset_5fwire_5fformat_2eproto();
  return *default_instance_;
}

TestMessageSetWireFormatContainer* TestMessageSetWireFormatContainer::default_instance_ = NULL;

TestMessageSetWireFormatContainer* TestMessageSetWireFormatContainer::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<TestMessageSetWireFormatContainer>(arena);
}

void TestMessageSetWireFormatContainer::Clear() {
// @@protoc_insertion_point(message_clear_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  if (has_message_set()) {
    if (message_set_ != NULL) message_set_->::proto2_wireformat_unittest::TestMessageSet::Clear();
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool TestMessageSetWireFormatContainer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_message_set()));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  return false;
#undef DO_
}

void TestMessageSetWireFormatContainer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  // optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
  if (has_message_set()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->message_set_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
}

::google::protobuf::uint8* TestMessageSetWireFormatContainer::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  // optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
  if (has_message_set()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->message_set_, false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  return target;
}

int TestMessageSetWireFormatContainer::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  int total_size = 0;

  // optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
  if (has_message_set()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->message_set_);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestMessageSetWireFormatContainer::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const TestMessageSetWireFormatContainer* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const TestMessageSetWireFormatContainer>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
    MergeFrom(*source);
  }
}

void TestMessageSetWireFormatContainer::MergeFrom(const TestMessageSetWireFormatContainer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_message_set()) {
      mutable_message_set()->::proto2_wireformat_unittest::TestMessageSet::MergeFrom(from.message_set());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void TestMessageSetWireFormatContainer::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestMessageSetWireFormatContainer::CopyFrom(const TestMessageSetWireFormatContainer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto2_wireformat_unittest.TestMessageSetWireFormatContainer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestMessageSetWireFormatContainer::IsInitialized() const {

  if (has_message_set()) {
    if (!this->message_set_->IsInitialized()) return false;
  }
  return true;
}

void TestMessageSetWireFormatContainer::Swap(TestMessageSetWireFormatContainer* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    TestMessageSetWireFormatContainer temp;
    temp.MergeFrom(*this);
    CopyFrom(*other);
    other->CopyFrom(temp);
  }
}
void TestMessageSetWireFormatContainer::UnsafeArenaSwap(TestMessageSetWireFormatContainer* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void TestMessageSetWireFormatContainer::InternalSwap(TestMessageSetWireFormatContainer* other) {
  std::swap(message_set_, other->message_set_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata TestMessageSetWireFormatContainer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TestMessageSetWireFormatContainer_descriptor_;
  metadata.reflection = TestMessageSetWireFormatContainer_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// TestMessageSetWireFormatContainer

// optional .proto2_wireformat_unittest.TestMessageSet message_set = 1;
bool TestMessageSetWireFormatContainer::has_message_set() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void TestMessageSetWireFormatContainer::set_has_message_set() {
  _has_bits_[0] |= 0x00000001u;
}
void TestMessageSetWireFormatContainer::clear_has_message_set() {
  _has_bits_[0] &= ~0x00000001u;
}
void TestMessageSetWireFormatContainer::clear_message_set() {
  if (message_set_ != NULL) message_set_->::proto2_wireformat_unittest::TestMessageSet::Clear();
  clear_has_message_set();
}
const ::proto2_wireformat_unittest::TestMessageSet& TestMessageSetWireFormatContainer::message_set() const {
  // @@protoc_insertion_point(field_get:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
  return message_set_ != NULL ? *message_set_ : *default_instance_->message_set_;
}
::proto2_wireformat_unittest::TestMessageSet* TestMessageSetWireFormatContainer::mutable_message_set() {
  set_has_message_set();
  if (message_set_ == NULL) {
    _slow_mutable_message_set();
  }
  // @@protoc_insertion_point(field_mutable:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
  return message_set_;
}
::proto2_wireformat_unittest::TestMessageSet* TestMessageSetWireFormatContainer::release_message_set() {
  // @@protoc_insertion_point(field_release:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
  clear_has_message_set();
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_message_set();
  } else {
    ::proto2_wireformat_unittest::TestMessageSet* temp = message_set_;
    message_set_ = NULL;
    return temp;
  }
}
 void TestMessageSetWireFormatContainer::set_allocated_message_set(::proto2_wireformat_unittest::TestMessageSet* message_set) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete message_set_;
  }
  if (message_set != NULL) {
    _slow_set_allocated_message_set(message_arena, &message_set);
  }
  message_set_ = message_set;
  if (message_set) {
    set_has_message_set();
  } else {
    clear_has_message_set();
  }
  // @@protoc_insertion_point(field_set_allocated:proto2_wireformat_unittest.TestMessageSetWireFormatContainer.message_set)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto2_wireformat_unittest

// @@protoc_insertion_point(global_scope)
