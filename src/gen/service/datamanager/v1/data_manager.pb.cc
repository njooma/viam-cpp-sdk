// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: service/datamanager/v1/data_manager.proto

#include "service/datamanager/v1/data_manager.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace viam {
namespace service {
namespace datamanager {
namespace v1 {
PROTOBUF_CONSTEXPR SyncRequest::SyncRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SyncRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SyncRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SyncRequestDefaultTypeInternal() {}
  union {
    SyncRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SyncRequestDefaultTypeInternal _SyncRequest_default_instance_;
PROTOBUF_CONSTEXPR SyncResponse::SyncResponse(
    ::_pbi::ConstantInitialized) {}
struct SyncResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SyncResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SyncResponseDefaultTypeInternal() {}
  union {
    SyncResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SyncResponseDefaultTypeInternal _SyncResponse_default_instance_;
}  // namespace v1
}  // namespace datamanager
}  // namespace service
}  // namespace viam
static ::_pb::Metadata file_level_metadata_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto = nullptr;

const uint32_t TableStruct_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::viam::service::datamanager::v1::SyncRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::viam::service::datamanager::v1::SyncRequest, _impl_.name_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::viam::service::datamanager::v1::SyncResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::viam::service::datamanager::v1::SyncRequest)},
  { 7, -1, -1, sizeof(::viam::service::datamanager::v1::SyncResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::viam::service::datamanager::v1::_SyncRequest_default_instance_._instance,
  &::viam::service::datamanager::v1::_SyncResponse_default_instance_._instance,
};

const char descriptor_table_protodef_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n)service/datamanager/v1/data_manager.pr"
  "oto\022\033viam.service.datamanager.v1\032\034google"
  "/api/annotations.proto\"!\n\013SyncRequest\022\022\n"
  "\004name\030\001 \001(\tR\004name\"\016\n\014SyncResponse2\254\001\n\022Da"
  "taManagerService\022\225\001\n\004Sync\022(.viam.service"
  ".datamanager.v1.SyncRequest\032).viam.servi"
  "ce.datamanager.v1.SyncResponse\"8\202\323\344\223\0022\"0"
  "/viam/api/v1/service/datamanager/{name}/"
  "datasyncBI\n\037com.viam.service.datamanager"
  ".v1Z&go.viam.com/api/service/datamanager"
  "/v1b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto_deps[1] = {
  &::descriptor_table_google_2fapi_2fannotations_2eproto,
};
static ::_pbi::once_flag descriptor_table_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto = {
    false, false, 411, descriptor_table_protodef_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto,
    "service/datamanager/v1/data_manager.proto",
    &descriptor_table_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto_once, descriptor_table_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto_deps, 1, 2,
    schemas, file_default_instances, TableStruct_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto::offsets,
    file_level_metadata_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto, file_level_enum_descriptors_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto,
    file_level_service_descriptors_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto_getter() {
  return &descriptor_table_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto(&descriptor_table_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto);
namespace viam {
namespace service {
namespace datamanager {
namespace v1 {

// ===================================================================

class SyncRequest::_Internal {
 public:
};

SyncRequest::SyncRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:viam.service.datamanager.v1.SyncRequest)
}
SyncRequest::SyncRequest(const SyncRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SyncRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:viam.service.datamanager.v1.SyncRequest)
}

inline void SyncRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SyncRequest::~SyncRequest() {
  // @@protoc_insertion_point(destructor:viam.service.datamanager.v1.SyncRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SyncRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
}

void SyncRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SyncRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:viam.service.datamanager.v1.SyncRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SyncRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1 [json_name = "name"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "viam.service.datamanager.v1.SyncRequest.name"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SyncRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:viam.service.datamanager.v1.SyncRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1 [json_name = "name"];
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "viam.service.datamanager.v1.SyncRequest.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:viam.service.datamanager.v1.SyncRequest)
  return target;
}

size_t SyncRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:viam.service.datamanager.v1.SyncRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1 [json_name = "name"];
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SyncRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SyncRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SyncRequest::GetClassData() const { return &_class_data_; }


void SyncRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SyncRequest*>(&to_msg);
  auto& from = static_cast<const SyncRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:viam.service.datamanager.v1.SyncRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SyncRequest::CopyFrom(const SyncRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:viam.service.datamanager.v1.SyncRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SyncRequest::IsInitialized() const {
  return true;
}

void SyncRequest::InternalSwap(SyncRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata SyncRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto_getter, &descriptor_table_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto_once,
      file_level_metadata_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto[0]);
}

// ===================================================================

class SyncResponse::_Internal {
 public:
};

SyncResponse::SyncResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:viam.service.datamanager.v1.SyncResponse)
}
SyncResponse::SyncResponse(const SyncResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  SyncResponse* const _this = this; (void)_this;
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:viam.service.datamanager.v1.SyncResponse)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SyncResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SyncResponse::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata SyncResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto_getter, &descriptor_table_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto_once,
      file_level_metadata_service_2fdatamanager_2fv1_2fdata_5fmanager_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace datamanager
}  // namespace service
}  // namespace viam
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::viam::service::datamanager::v1::SyncRequest*
Arena::CreateMaybeMessage< ::viam::service::datamanager::v1::SyncRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::viam::service::datamanager::v1::SyncRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::viam::service::datamanager::v1::SyncResponse*
Arena::CreateMaybeMessage< ::viam::service::datamanager::v1::SyncResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::viam::service::datamanager::v1::SyncResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
