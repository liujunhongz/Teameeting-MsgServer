// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: storage_msg.proto

#ifndef PROTOBUF_storage_5fmsg_2eproto__INCLUDED
#define PROTOBUF_storage_5fmsg_2eproto__INCLUDED

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
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include "storage_msg_type.pb.h"
// @@protoc_insertion_point(includes)

namespace pms {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_storage_5fmsg_2eproto();
void protobuf_AssignDesc_storage_5fmsg_2eproto();
void protobuf_ShutdownFile_storage_5fmsg_2eproto();

class PackedStoreMsg;
class StorageMsg;

// ===================================================================

class StorageMsg : public ::google::protobuf::MessageLite {
 public:
  StorageMsg();
  virtual ~StorageMsg();

  StorageMsg(const StorageMsg& from);

  inline StorageMsg& operator=(const StorageMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const StorageMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const StorageMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(StorageMsg* other);

  // implements Message ----------------------------------------------

  inline StorageMsg* New() const { return New(NULL); }

  StorageMsg* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const StorageMsg& from);
  void MergeFrom(const StorageMsg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(StorageMsg* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .pms.EStorageType mflag = 1;
  void clear_mflag();
  static const int kMflagFieldNumber = 1;
  ::pms::EStorageType mflag() const;
  void set_mflag(::pms::EStorageType value);

  // optional sint32 result = 2;
  void clear_result();
  static const int kResultFieldNumber = 2;
  ::google::protobuf::int32 result() const;
  void set_result(::google::protobuf::int32 value);

  // optional sint64 sequence = 3;
  void clear_sequence();
  static const int kSequenceFieldNumber = 3;
  ::google::protobuf::int64 sequence() const;
  void set_sequence(::google::protobuf::int64 value);

  // optional string userid = 4;
  void clear_userid();
  static const int kUseridFieldNumber = 4;
  const ::std::string& userid() const;
  void set_userid(const ::std::string& value);
  void set_userid(const char* value);
  void set_userid(const char* value, size_t size);
  ::std::string* mutable_userid();
  ::std::string* release_userid();
  void set_allocated_userid(::std::string* userid);

  // optional string msgid = 5;
  void clear_msgid();
  static const int kMsgidFieldNumber = 5;
  const ::std::string& msgid() const;
  void set_msgid(const ::std::string& value);
  void set_msgid(const char* value);
  void set_msgid(const char* value, size_t size);
  ::std::string* mutable_msgid();
  ::std::string* release_msgid();
  void set_allocated_msgid(::std::string* msgid);

  // optional string content = 6;
  void clear_content();
  static const int kContentFieldNumber = 6;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  void set_content(const char* value);
  void set_content(const char* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // @@protoc_insertion_point(class_scope:pms.StorageMsg)
 private:

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  bool _is_default_instance_;
  int mflag_;
  ::google::protobuf::int32 result_;
  ::google::protobuf::int64 sequence_;
  ::google::protobuf::internal::ArenaStringPtr userid_;
  ::google::protobuf::internal::ArenaStringPtr msgid_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  mutable int _cached_size_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_storage_5fmsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_storage_5fmsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_storage_5fmsg_2eproto();
  friend void protobuf_ShutdownFile_storage_5fmsg_2eproto();

  void InitAsDefaultInstance();
  static StorageMsg* default_instance_;
};
// -------------------------------------------------------------------

class PackedStoreMsg : public ::google::protobuf::MessageLite {
 public:
  PackedStoreMsg();
  virtual ~PackedStoreMsg();

  PackedStoreMsg(const PackedStoreMsg& from);

  inline PackedStoreMsg& operator=(const PackedStoreMsg& from) {
    CopyFrom(from);
    return *this;
  }

  static const PackedStoreMsg& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const PackedStoreMsg* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(PackedStoreMsg* other);

  // implements Message ----------------------------------------------

  inline PackedStoreMsg* New() const { return New(NULL); }

  PackedStoreMsg* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PackedStoreMsg& from);
  void MergeFrom(const PackedStoreMsg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PackedStoreMsg* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .pms.StorageMsg msgs = 1;
  int msgs_size() const;
  void clear_msgs();
  static const int kMsgsFieldNumber = 1;
  const ::pms::StorageMsg& msgs(int index) const;
  ::pms::StorageMsg* mutable_msgs(int index);
  ::pms::StorageMsg* add_msgs();
  ::google::protobuf::RepeatedPtrField< ::pms::StorageMsg >*
      mutable_msgs();
  const ::google::protobuf::RepeatedPtrField< ::pms::StorageMsg >&
      msgs() const;

  // @@protoc_insertion_point(class_scope:pms.PackedStoreMsg)
 private:

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::pms::StorageMsg > msgs_;
  mutable int _cached_size_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_storage_5fmsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_storage_5fmsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_storage_5fmsg_2eproto();
  friend void protobuf_ShutdownFile_storage_5fmsg_2eproto();

  void InitAsDefaultInstance();
  static PackedStoreMsg* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// StorageMsg

// optional .pms.EStorageType mflag = 1;
inline void StorageMsg::clear_mflag() {
  mflag_ = 0;
}
inline ::pms::EStorageType StorageMsg::mflag() const {
  // @@protoc_insertion_point(field_get:pms.StorageMsg.mflag)
  return static_cast< ::pms::EStorageType >(mflag_);
}
inline void StorageMsg::set_mflag(::pms::EStorageType value) {
  
  mflag_ = value;
  // @@protoc_insertion_point(field_set:pms.StorageMsg.mflag)
}

// optional sint32 result = 2;
inline void StorageMsg::clear_result() {
  result_ = 0;
}
inline ::google::protobuf::int32 StorageMsg::result() const {
  // @@protoc_insertion_point(field_get:pms.StorageMsg.result)
  return result_;
}
inline void StorageMsg::set_result(::google::protobuf::int32 value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:pms.StorageMsg.result)
}

// optional sint64 sequence = 3;
inline void StorageMsg::clear_sequence() {
  sequence_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 StorageMsg::sequence() const {
  // @@protoc_insertion_point(field_get:pms.StorageMsg.sequence)
  return sequence_;
}
inline void StorageMsg::set_sequence(::google::protobuf::int64 value) {
  
  sequence_ = value;
  // @@protoc_insertion_point(field_set:pms.StorageMsg.sequence)
}

// optional string userid = 4;
inline void StorageMsg::clear_userid() {
  userid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& StorageMsg::userid() const {
  // @@protoc_insertion_point(field_get:pms.StorageMsg.userid)
  return userid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StorageMsg::set_userid(const ::std::string& value) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pms.StorageMsg.userid)
}
inline void StorageMsg::set_userid(const char* value) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pms.StorageMsg.userid)
}
inline void StorageMsg::set_userid(const char* value, size_t size) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pms.StorageMsg.userid)
}
inline ::std::string* StorageMsg::mutable_userid() {
  
  // @@protoc_insertion_point(field_mutable:pms.StorageMsg.userid)
  return userid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StorageMsg::release_userid() {
  // @@protoc_insertion_point(field_release:pms.StorageMsg.userid)
  
  return userid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StorageMsg::set_allocated_userid(::std::string* userid) {
  if (userid != NULL) {
    
  } else {
    
  }
  userid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), userid);
  // @@protoc_insertion_point(field_set_allocated:pms.StorageMsg.userid)
}

// optional string msgid = 5;
inline void StorageMsg::clear_msgid() {
  msgid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& StorageMsg::msgid() const {
  // @@protoc_insertion_point(field_get:pms.StorageMsg.msgid)
  return msgid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StorageMsg::set_msgid(const ::std::string& value) {
  
  msgid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pms.StorageMsg.msgid)
}
inline void StorageMsg::set_msgid(const char* value) {
  
  msgid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pms.StorageMsg.msgid)
}
inline void StorageMsg::set_msgid(const char* value, size_t size) {
  
  msgid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pms.StorageMsg.msgid)
}
inline ::std::string* StorageMsg::mutable_msgid() {
  
  // @@protoc_insertion_point(field_mutable:pms.StorageMsg.msgid)
  return msgid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StorageMsg::release_msgid() {
  // @@protoc_insertion_point(field_release:pms.StorageMsg.msgid)
  
  return msgid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StorageMsg::set_allocated_msgid(::std::string* msgid) {
  if (msgid != NULL) {
    
  } else {
    
  }
  msgid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msgid);
  // @@protoc_insertion_point(field_set_allocated:pms.StorageMsg.msgid)
}

// optional string content = 6;
inline void StorageMsg::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& StorageMsg::content() const {
  // @@protoc_insertion_point(field_get:pms.StorageMsg.content)
  return content_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StorageMsg::set_content(const ::std::string& value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pms.StorageMsg.content)
}
inline void StorageMsg::set_content(const char* value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pms.StorageMsg.content)
}
inline void StorageMsg::set_content(const char* value, size_t size) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pms.StorageMsg.content)
}
inline ::std::string* StorageMsg::mutable_content() {
  
  // @@protoc_insertion_point(field_mutable:pms.StorageMsg.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* StorageMsg::release_content() {
  // @@protoc_insertion_point(field_release:pms.StorageMsg.content)
  
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void StorageMsg::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    
  } else {
    
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:pms.StorageMsg.content)
}

// -------------------------------------------------------------------

// PackedStoreMsg

// repeated .pms.StorageMsg msgs = 1;
inline int PackedStoreMsg::msgs_size() const {
  return msgs_.size();
}
inline void PackedStoreMsg::clear_msgs() {
  msgs_.Clear();
}
inline const ::pms::StorageMsg& PackedStoreMsg::msgs(int index) const {
  // @@protoc_insertion_point(field_get:pms.PackedStoreMsg.msgs)
  return msgs_.Get(index);
}
inline ::pms::StorageMsg* PackedStoreMsg::mutable_msgs(int index) {
  // @@protoc_insertion_point(field_mutable:pms.PackedStoreMsg.msgs)
  return msgs_.Mutable(index);
}
inline ::pms::StorageMsg* PackedStoreMsg::add_msgs() {
  // @@protoc_insertion_point(field_add:pms.PackedStoreMsg.msgs)
  return msgs_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::pms::StorageMsg >*
PackedStoreMsg::mutable_msgs() {
  // @@protoc_insertion_point(field_mutable_list:pms.PackedStoreMsg.msgs)
  return &msgs_;
}
inline const ::google::protobuf::RepeatedPtrField< ::pms::StorageMsg >&
PackedStoreMsg::msgs() const {
  // @@protoc_insertion_point(field_list:pms.PackedStoreMsg.msgs)
  return msgs_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pms

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_storage_5fmsg_2eproto__INCLUDED
