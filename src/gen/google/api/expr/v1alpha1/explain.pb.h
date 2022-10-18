// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/expr/v1alpha1/explain.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fexpr_2fv1alpha1_2fexplain_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fexpr_2fv1alpha1_2fexplain_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021007 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/api/expr/v1alpha1/value.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fexpr_2fv1alpha1_2fexplain_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fexpr_2fv1alpha1_2fexplain_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2fexpr_2fv1alpha1_2fexplain_2eproto;
namespace google {
namespace api {
namespace expr {
namespace v1alpha1 {
class Explain;
struct ExplainDefaultTypeInternal;
extern ExplainDefaultTypeInternal _Explain_default_instance_;
class Explain_ExprStep;
struct Explain_ExprStepDefaultTypeInternal;
extern Explain_ExprStepDefaultTypeInternal _Explain_ExprStep_default_instance_;
}  // namespace v1alpha1
}  // namespace expr
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::expr::v1alpha1::Explain* Arena::CreateMaybeMessage<::google::api::expr::v1alpha1::Explain>(Arena*);
template<> ::google::api::expr::v1alpha1::Explain_ExprStep* Arena::CreateMaybeMessage<::google::api::expr::v1alpha1::Explain_ExprStep>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {
namespace expr {
namespace v1alpha1 {

// ===================================================================

class Explain_ExprStep final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.expr.v1alpha1.Explain.ExprStep) */ {
 public:
  inline Explain_ExprStep() : Explain_ExprStep(nullptr) {}
  ~Explain_ExprStep() override;
  explicit PROTOBUF_CONSTEXPR Explain_ExprStep(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Explain_ExprStep(const Explain_ExprStep& from);
  Explain_ExprStep(Explain_ExprStep&& from) noexcept
    : Explain_ExprStep() {
    *this = ::std::move(from);
  }

  inline Explain_ExprStep& operator=(const Explain_ExprStep& from) {
    CopyFrom(from);
    return *this;
  }
  inline Explain_ExprStep& operator=(Explain_ExprStep&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Explain_ExprStep& default_instance() {
    return *internal_default_instance();
  }
  static inline const Explain_ExprStep* internal_default_instance() {
    return reinterpret_cast<const Explain_ExprStep*>(
               &_Explain_ExprStep_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Explain_ExprStep& a, Explain_ExprStep& b) {
    a.Swap(&b);
  }
  inline void Swap(Explain_ExprStep* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Explain_ExprStep* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Explain_ExprStep* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Explain_ExprStep>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Explain_ExprStep& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Explain_ExprStep& from) {
    Explain_ExprStep::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Explain_ExprStep* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.expr.v1alpha1.Explain.ExprStep";
  }
  protected:
  explicit Explain_ExprStep(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kValueIndexFieldNumber = 2,
  };
  // int64 id = 1 [json_name = "id"];
  void clear_id();
  int64_t id() const;
  void set_id(int64_t value);
  private:
  int64_t _internal_id() const;
  void _internal_set_id(int64_t value);
  public:

  // int32 value_index = 2 [json_name = "valueIndex"];
  void clear_value_index();
  int32_t value_index() const;
  void set_value_index(int32_t value);
  private:
  int32_t _internal_value_index() const;
  void _internal_set_value_index(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:google.api.expr.v1alpha1.Explain.ExprStep)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int64_t id_;
    int32_t value_index_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fapi_2fexpr_2fv1alpha1_2fexplain_2eproto;
};
// -------------------------------------------------------------------

class Explain final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.expr.v1alpha1.Explain) */ {
 public:
  inline Explain() : Explain(nullptr) {}
  ~Explain() override;
  explicit PROTOBUF_CONSTEXPR Explain(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Explain(const Explain& from);
  Explain(Explain&& from) noexcept
    : Explain() {
    *this = ::std::move(from);
  }

  inline Explain& operator=(const Explain& from) {
    CopyFrom(from);
    return *this;
  }
  inline Explain& operator=(Explain&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Explain& default_instance() {
    return *internal_default_instance();
  }
  static inline const Explain* internal_default_instance() {
    return reinterpret_cast<const Explain*>(
               &_Explain_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Explain& a, Explain& b) {
    a.Swap(&b);
  }
  inline void Swap(Explain* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Explain* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Explain* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Explain>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Explain& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Explain& from) {
    Explain::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Explain* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.expr.v1alpha1.Explain";
  }
  protected:
  explicit Explain(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Explain_ExprStep ExprStep;

  // accessors -------------------------------------------------------

  enum : int {
    kValuesFieldNumber = 1,
    kExprStepsFieldNumber = 2,
  };
  // repeated .google.api.expr.v1alpha1.Value values = 1 [json_name = "values"];
  int values_size() const;
  private:
  int _internal_values_size() const;
  public:
  void clear_values();
  ::google::api::expr::v1alpha1::Value* mutable_values(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::expr::v1alpha1::Value >*
      mutable_values();
  private:
  const ::google::api::expr::v1alpha1::Value& _internal_values(int index) const;
  ::google::api::expr::v1alpha1::Value* _internal_add_values();
  public:
  const ::google::api::expr::v1alpha1::Value& values(int index) const;
  ::google::api::expr::v1alpha1::Value* add_values();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::expr::v1alpha1::Value >&
      values() const;

  // repeated .google.api.expr.v1alpha1.Explain.ExprStep expr_steps = 2 [json_name = "exprSteps"];
  int expr_steps_size() const;
  private:
  int _internal_expr_steps_size() const;
  public:
  void clear_expr_steps();
  ::google::api::expr::v1alpha1::Explain_ExprStep* mutable_expr_steps(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::expr::v1alpha1::Explain_ExprStep >*
      mutable_expr_steps();
  private:
  const ::google::api::expr::v1alpha1::Explain_ExprStep& _internal_expr_steps(int index) const;
  ::google::api::expr::v1alpha1::Explain_ExprStep* _internal_add_expr_steps();
  public:
  const ::google::api::expr::v1alpha1::Explain_ExprStep& expr_steps(int index) const;
  ::google::api::expr::v1alpha1::Explain_ExprStep* add_expr_steps();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::expr::v1alpha1::Explain_ExprStep >&
      expr_steps() const;

  // @@protoc_insertion_point(class_scope:google.api.expr.v1alpha1.Explain)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::expr::v1alpha1::Value > values_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::expr::v1alpha1::Explain_ExprStep > expr_steps_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fapi_2fexpr_2fv1alpha1_2fexplain_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Explain_ExprStep

// int64 id = 1 [json_name = "id"];
inline void Explain_ExprStep::clear_id() {
  _impl_.id_ = int64_t{0};
}
inline int64_t Explain_ExprStep::_internal_id() const {
  return _impl_.id_;
}
inline int64_t Explain_ExprStep::id() const {
  // @@protoc_insertion_point(field_get:google.api.expr.v1alpha1.Explain.ExprStep.id)
  return _internal_id();
}
inline void Explain_ExprStep::_internal_set_id(int64_t value) {
  
  _impl_.id_ = value;
}
inline void Explain_ExprStep::set_id(int64_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:google.api.expr.v1alpha1.Explain.ExprStep.id)
}

// int32 value_index = 2 [json_name = "valueIndex"];
inline void Explain_ExprStep::clear_value_index() {
  _impl_.value_index_ = 0;
}
inline int32_t Explain_ExprStep::_internal_value_index() const {
  return _impl_.value_index_;
}
inline int32_t Explain_ExprStep::value_index() const {
  // @@protoc_insertion_point(field_get:google.api.expr.v1alpha1.Explain.ExprStep.value_index)
  return _internal_value_index();
}
inline void Explain_ExprStep::_internal_set_value_index(int32_t value) {
  
  _impl_.value_index_ = value;
}
inline void Explain_ExprStep::set_value_index(int32_t value) {
  _internal_set_value_index(value);
  // @@protoc_insertion_point(field_set:google.api.expr.v1alpha1.Explain.ExprStep.value_index)
}

// -------------------------------------------------------------------

// Explain

// repeated .google.api.expr.v1alpha1.Value values = 1 [json_name = "values"];
inline int Explain::_internal_values_size() const {
  return _impl_.values_.size();
}
inline int Explain::values_size() const {
  return _internal_values_size();
}
inline ::google::api::expr::v1alpha1::Value* Explain::mutable_values(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.expr.v1alpha1.Explain.values)
  return _impl_.values_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::expr::v1alpha1::Value >*
Explain::mutable_values() {
  // @@protoc_insertion_point(field_mutable_list:google.api.expr.v1alpha1.Explain.values)
  return &_impl_.values_;
}
inline const ::google::api::expr::v1alpha1::Value& Explain::_internal_values(int index) const {
  return _impl_.values_.Get(index);
}
inline const ::google::api::expr::v1alpha1::Value& Explain::values(int index) const {
  // @@protoc_insertion_point(field_get:google.api.expr.v1alpha1.Explain.values)
  return _internal_values(index);
}
inline ::google::api::expr::v1alpha1::Value* Explain::_internal_add_values() {
  return _impl_.values_.Add();
}
inline ::google::api::expr::v1alpha1::Value* Explain::add_values() {
  ::google::api::expr::v1alpha1::Value* _add = _internal_add_values();
  // @@protoc_insertion_point(field_add:google.api.expr.v1alpha1.Explain.values)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::expr::v1alpha1::Value >&
Explain::values() const {
  // @@protoc_insertion_point(field_list:google.api.expr.v1alpha1.Explain.values)
  return _impl_.values_;
}

// repeated .google.api.expr.v1alpha1.Explain.ExprStep expr_steps = 2 [json_name = "exprSteps"];
inline int Explain::_internal_expr_steps_size() const {
  return _impl_.expr_steps_.size();
}
inline int Explain::expr_steps_size() const {
  return _internal_expr_steps_size();
}
inline void Explain::clear_expr_steps() {
  _impl_.expr_steps_.Clear();
}
inline ::google::api::expr::v1alpha1::Explain_ExprStep* Explain::mutable_expr_steps(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.expr.v1alpha1.Explain.expr_steps)
  return _impl_.expr_steps_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::expr::v1alpha1::Explain_ExprStep >*
Explain::mutable_expr_steps() {
  // @@protoc_insertion_point(field_mutable_list:google.api.expr.v1alpha1.Explain.expr_steps)
  return &_impl_.expr_steps_;
}
inline const ::google::api::expr::v1alpha1::Explain_ExprStep& Explain::_internal_expr_steps(int index) const {
  return _impl_.expr_steps_.Get(index);
}
inline const ::google::api::expr::v1alpha1::Explain_ExprStep& Explain::expr_steps(int index) const {
  // @@protoc_insertion_point(field_get:google.api.expr.v1alpha1.Explain.expr_steps)
  return _internal_expr_steps(index);
}
inline ::google::api::expr::v1alpha1::Explain_ExprStep* Explain::_internal_add_expr_steps() {
  return _impl_.expr_steps_.Add();
}
inline ::google::api::expr::v1alpha1::Explain_ExprStep* Explain::add_expr_steps() {
  ::google::api::expr::v1alpha1::Explain_ExprStep* _add = _internal_add_expr_steps();
  // @@protoc_insertion_point(field_add:google.api.expr.v1alpha1.Explain.expr_steps)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::expr::v1alpha1::Explain_ExprStep >&
Explain::expr_steps() const {
  // @@protoc_insertion_point(field_list:google.api.expr.v1alpha1.Explain.expr_steps)
  return _impl_.expr_steps_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1alpha1
}  // namespace expr
}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fexpr_2fv1alpha1_2fexplain_2eproto
