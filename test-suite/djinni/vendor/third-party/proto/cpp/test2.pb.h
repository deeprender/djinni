// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test2.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_test2_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_test2_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_test2_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_test2_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_test2_2eproto;
namespace djinni {
namespace test2 {
class PersistingState;
class PersistingStateDefaultTypeInternal;
extern PersistingStateDefaultTypeInternal _PersistingState_default_instance_;
}  // namespace test2
}  // namespace djinni
PROTOBUF_NAMESPACE_OPEN
template<> ::djinni::test2::PersistingState* Arena::CreateMaybeMessage<::djinni::test2::PersistingState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace djinni {
namespace test2 {

// ===================================================================

class PersistingState PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:djinni.test2.PersistingState) */ {
 public:
  inline PersistingState() : PersistingState(nullptr) {};
  virtual ~PersistingState();

  PersistingState(const PersistingState& from);
  PersistingState(PersistingState&& from) noexcept
    : PersistingState() {
    *this = ::std::move(from);
  }

  inline PersistingState& operator=(const PersistingState& from) {
    CopyFrom(from);
    return *this;
  }
  inline PersistingState& operator=(PersistingState&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const PersistingState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PersistingState* internal_default_instance() {
    return reinterpret_cast<const PersistingState*>(
               &_PersistingState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PersistingState& a, PersistingState& b) {
    a.Swap(&b);
  }
  inline void Swap(PersistingState* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PersistingState* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PersistingState* New() const final {
    return CreateMaybeMessage<PersistingState>(nullptr);
  }

  PersistingState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PersistingState>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PersistingState& from);
  void MergeFrom(const PersistingState& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PersistingState* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "djinni.test2.PersistingState";
  }
  protected:
  explicit PersistingState(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_test2_2eproto);
    return ::descriptor_table_test2_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserIdFieldNumber = 1,
    kIsActiveFieldNumber = 2,
  };
  // string user_id = 1;
  void clear_user_id();
  const std::string& user_id() const;
  void set_user_id(const std::string& value);
  void set_user_id(std::string&& value);
  void set_user_id(const char* value);
  void set_user_id(const char* value, size_t size);
  std::string* mutable_user_id();
  std::string* release_user_id();
  void set_allocated_user_id(std::string* user_id);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_user_id();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_user_id(
      std::string* user_id);
  private:
  const std::string& _internal_user_id() const;
  void _internal_set_user_id(const std::string& value);
  std::string* _internal_mutable_user_id();
  public:

  // bool is_active = 2;
  void clear_is_active();
  bool is_active() const;
  void set_is_active(bool value);
  private:
  bool _internal_is_active() const;
  void _internal_set_is_active(bool value);
  public:

  // @@protoc_insertion_point(class_scope:djinni.test2.PersistingState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr user_id_;
  bool is_active_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_test2_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PersistingState

// string user_id = 1;
inline void PersistingState::clear_user_id() {
  user_id_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& PersistingState::user_id() const {
  // @@protoc_insertion_point(field_get:djinni.test2.PersistingState.user_id)
  return _internal_user_id();
}
inline void PersistingState::set_user_id(const std::string& value) {
  _internal_set_user_id(value);
  // @@protoc_insertion_point(field_set:djinni.test2.PersistingState.user_id)
}
inline std::string* PersistingState::mutable_user_id() {
  // @@protoc_insertion_point(field_mutable:djinni.test2.PersistingState.user_id)
  return _internal_mutable_user_id();
}
inline const std::string& PersistingState::_internal_user_id() const {
  return user_id_.Get();
}
inline void PersistingState::_internal_set_user_id(const std::string& value) {
  
  user_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void PersistingState::set_user_id(std::string&& value) {
  
  user_id_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:djinni.test2.PersistingState.user_id)
}
inline void PersistingState::set_user_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  user_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:djinni.test2.PersistingState.user_id)
}
inline void PersistingState::set_user_id(const char* value,
    size_t size) {
  
  user_id_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:djinni.test2.PersistingState.user_id)
}
inline std::string* PersistingState::_internal_mutable_user_id() {
  
  return user_id_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* PersistingState::release_user_id() {
  // @@protoc_insertion_point(field_release:djinni.test2.PersistingState.user_id)
  return user_id_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void PersistingState::set_allocated_user_id(std::string* user_id) {
  if (user_id != nullptr) {
    
  } else {
    
  }
  user_id_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), user_id,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:djinni.test2.PersistingState.user_id)
}
inline std::string* PersistingState::unsafe_arena_release_user_id() {
  // @@protoc_insertion_point(field_unsafe_arena_release:djinni.test2.PersistingState.user_id)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return user_id_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void PersistingState::unsafe_arena_set_allocated_user_id(
    std::string* user_id) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (user_id != nullptr) {
    
  } else {
    
  }
  user_id_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      user_id, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:djinni.test2.PersistingState.user_id)
}

// bool is_active = 2;
inline void PersistingState::clear_is_active() {
  is_active_ = false;
}
inline bool PersistingState::_internal_is_active() const {
  return is_active_;
}
inline bool PersistingState::is_active() const {
  // @@protoc_insertion_point(field_get:djinni.test2.PersistingState.is_active)
  return _internal_is_active();
}
inline void PersistingState::_internal_set_is_active(bool value) {
  
  is_active_ = value;
}
inline void PersistingState::set_is_active(bool value) {
  _internal_set_is_active(value);
  // @@protoc_insertion_point(field_set:djinni.test2.PersistingState.is_active)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace test2
}  // namespace djinni

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_test2_2eproto