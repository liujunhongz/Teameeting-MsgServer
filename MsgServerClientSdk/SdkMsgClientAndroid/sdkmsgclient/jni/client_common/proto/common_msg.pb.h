// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common_msg.proto

#ifndef PROTOBUF_common_5fmsg_2eproto__INCLUDED
#define PROTOBUF_common_5fmsg_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace pms {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_common_5fmsg_2eproto();
void protobuf_AssignDesc_common_5fmsg_2eproto();
void protobuf_ShutdownFile_common_5fmsg_2eproto();

class MsgRep;
class MsgReq;
class ToUser;

enum EServerCmd {
  CLOGIN = 0,
  CSNDMSG = 1,
  CGETMSG = 2,
  CLOGOUT = 3,
  CKEEPALIVE = 4,
  CSEQN = 5,
  CDATA = 6,
  CSNTFSEQN = 7,
  CSNTFDATA = 8,
  CSYNCSEQN = 9,
  CSSEQN4DATA = 10,
  CSYNCDATA = 11,
  CSYNCGROUPDATA = 12,
  CNEWMSG = 13,
  CNEWMSGSEQN = 14,
  CNEWMSGDATA = 15,
  CGROUPNOTIFY = 16,
  CCREATESEQN = 17,
  CDELETESEQN = 18,
  EServerCmd_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  EServerCmd_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool EServerCmd_IsValid(int value);
const EServerCmd EServerCmd_MIN = CLOGIN;
const EServerCmd EServerCmd_MAX = CDELETESEQN;
const int EServerCmd_ARRAYSIZE = EServerCmd_MAX + 1;

enum EModuleType {
  TINVALID0 = 0,
  TINVALID1 = 1,
  TMEETING = 2,
  TP2P = 3,
  TLIVE = 4,
  TCALLCENTER = 5,
  TLOGICAL = 6,
  TSEQUENCE = 7,
  TSTORAGE = 8,
  TGRPNOTIFY = 9,
  TPUSHER = 10,
  EModuleType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  EModuleType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool EModuleType_IsValid(int value);
const EModuleType EModuleType_MIN = TINVALID0;
const EModuleType EModuleType_MAX = TPUSHER;
const int EModuleType_ARRAYSIZE = EModuleType_MAX + 1;

enum EMsgFlag {
  FINVALID = 0,
  FSINGLE = 1,
  FMULTI = 2,
  FGROUP = 3,
  EMsgFlag_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  EMsgFlag_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool EMsgFlag_IsValid(int value);
const EMsgFlag EMsgFlag_MIN = FINVALID;
const EMsgFlag EMsgFlag_MAX = FGROUP;
const int EMsgFlag_ARRAYSIZE = EMsgFlag_MAX + 1;

enum EMsgRole {
  RSENDER = 0,
  RRECVER = 1,
  EMsgRole_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  EMsgRole_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool EMsgRole_IsValid(int value);
const EMsgRole EMsgRole_MIN = RSENDER;
const EMsgRole EMsgRole_MAX = RRECVER;
const int EMsgRole_ARRAYSIZE = EMsgRole_MAX + 1;

enum EMsgRType {
  RREADLOCAL = 0,
  RREADREMOTE = 1,
  EMsgRType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  EMsgRType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool EMsgRType_IsValid(int value);
const EMsgRType EMsgRType_MIN = RREADLOCAL;
const EMsgRType EMsgRType_MAX = RREADREMOTE;
const int EMsgRType_ARRAYSIZE = EMsgRType_MAX + 1;

// ===================================================================

class MsgReq : public ::google::protobuf::MessageLite {
 public:
  MsgReq();
  virtual ~MsgReq();

  MsgReq(const MsgReq& from);

  inline MsgReq& operator=(const MsgReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const MsgReq& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MsgReq* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MsgReq* other);

  // implements Message ----------------------------------------------

  inline MsgReq* New() const { return New(NULL); }

  MsgReq* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MsgReq& from);
  void MergeFrom(const MsgReq& from);
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
  void InternalSwap(MsgReq* other);
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

  // optional .pms.EServerCmd svr_cmds = 1;
  void clear_svr_cmds();
  static const int kSvrCmdsFieldNumber = 1;
  ::pms::EServerCmd svr_cmds() const;
  void set_svr_cmds(::pms::EServerCmd value);

  // optional .pms.EModuleType mod_type = 2;
  void clear_mod_type();
  static const int kModTypeFieldNumber = 2;
  ::pms::EModuleType mod_type() const;
  void set_mod_type(::pms::EModuleType value);

  // optional bytes content = 3;
  void clear_content();
  static const int kContentFieldNumber = 3;
  const ::std::string& content() const;
  void set_content(const ::std::string& value);
  void set_content(const char* value);
  void set_content(const void* value, size_t size);
  ::std::string* mutable_content();
  ::std::string* release_content();
  void set_allocated_content(::std::string* content);

  // @@protoc_insertion_point(class_scope:pms.MsgReq)
 private:

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  bool _is_default_instance_;
  int svr_cmds_;
  int mod_type_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  mutable int _cached_size_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_common_5fmsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_common_5fmsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_common_5fmsg_2eproto();
  friend void protobuf_ShutdownFile_common_5fmsg_2eproto();

  void InitAsDefaultInstance();
  static MsgReq* default_instance_;
};
// -------------------------------------------------------------------

class MsgRep : public ::google::protobuf::MessageLite {
 public:
  MsgRep();
  virtual ~MsgRep();

  MsgRep(const MsgRep& from);

  inline MsgRep& operator=(const MsgRep& from) {
    CopyFrom(from);
    return *this;
  }

  static const MsgRep& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MsgRep* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MsgRep* other);

  // implements Message ----------------------------------------------

  inline MsgRep* New() const { return New(NULL); }

  MsgRep* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MsgRep& from);
  void MergeFrom(const MsgRep& from);
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
  void InternalSwap(MsgRep* other);
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

  // optional .pms.EServerCmd svr_cmds = 1;
  void clear_svr_cmds();
  static const int kSvrCmdsFieldNumber = 1;
  ::pms::EServerCmd svr_cmds() const;
  void set_svr_cmds(::pms::EServerCmd value);

  // optional .pms.EModuleType mod_type = 2;
  void clear_mod_type();
  static const int kModTypeFieldNumber = 2;
  ::pms::EModuleType mod_type() const;
  void set_mod_type(::pms::EModuleType value);

  // optional bytes rsp_cont = 3;
  void clear_rsp_cont();
  static const int kRspContFieldNumber = 3;
  const ::std::string& rsp_cont() const;
  void set_rsp_cont(const ::std::string& value);
  void set_rsp_cont(const char* value);
  void set_rsp_cont(const void* value, size_t size);
  ::std::string* mutable_rsp_cont();
  ::std::string* release_rsp_cont();
  void set_allocated_rsp_cont(::std::string* rsp_cont);

  // optional sint32 rsp_code = 4;
  void clear_rsp_code();
  static const int kRspCodeFieldNumber = 4;
  ::google::protobuf::int32 rsp_code() const;
  void set_rsp_code(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:pms.MsgRep)
 private:

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  bool _is_default_instance_;
  int svr_cmds_;
  int mod_type_;
  ::google::protobuf::internal::ArenaStringPtr rsp_cont_;
  ::google::protobuf::int32 rsp_code_;
  mutable int _cached_size_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_common_5fmsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_common_5fmsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_common_5fmsg_2eproto();
  friend void protobuf_ShutdownFile_common_5fmsg_2eproto();

  void InitAsDefaultInstance();
  static MsgRep* default_instance_;
};
// -------------------------------------------------------------------

class ToUser : public ::google::protobuf::MessageLite {
 public:
  ToUser();
  virtual ~ToUser();

  ToUser(const ToUser& from);

  inline ToUser& operator=(const ToUser& from) {
    CopyFrom(from);
    return *this;
  }

  static const ToUser& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ToUser* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ToUser* other);

  // implements Message ----------------------------------------------

  inline ToUser* New() const { return New(NULL); }

  ToUser* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ToUser& from);
  void MergeFrom(const ToUser& from);
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
  void InternalSwap(ToUser* other);
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

  // repeated string users = 1;
  int users_size() const;
  void clear_users();
  static const int kUsersFieldNumber = 1;
  const ::std::string& users(int index) const;
  ::std::string* mutable_users(int index);
  void set_users(int index, const ::std::string& value);
  void set_users(int index, const char* value);
  void set_users(int index, const char* value, size_t size);
  ::std::string* add_users();
  void add_users(const ::std::string& value);
  void add_users(const char* value);
  void add_users(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& users() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_users();

  // @@protoc_insertion_point(class_scope:pms.ToUser)
 private:

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::std::string> users_;
  mutable int _cached_size_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_common_5fmsg_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_common_5fmsg_2eproto();
  #endif
  friend void protobuf_AssignDesc_common_5fmsg_2eproto();
  friend void protobuf_ShutdownFile_common_5fmsg_2eproto();

  void InitAsDefaultInstance();
  static ToUser* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MsgReq

// optional .pms.EServerCmd svr_cmds = 1;
inline void MsgReq::clear_svr_cmds() {
  svr_cmds_ = 0;
}
inline ::pms::EServerCmd MsgReq::svr_cmds() const {
  // @@protoc_insertion_point(field_get:pms.MsgReq.svr_cmds)
  return static_cast< ::pms::EServerCmd >(svr_cmds_);
}
inline void MsgReq::set_svr_cmds(::pms::EServerCmd value) {
  
  svr_cmds_ = value;
  // @@protoc_insertion_point(field_set:pms.MsgReq.svr_cmds)
}

// optional .pms.EModuleType mod_type = 2;
inline void MsgReq::clear_mod_type() {
  mod_type_ = 0;
}
inline ::pms::EModuleType MsgReq::mod_type() const {
  // @@protoc_insertion_point(field_get:pms.MsgReq.mod_type)
  return static_cast< ::pms::EModuleType >(mod_type_);
}
inline void MsgReq::set_mod_type(::pms::EModuleType value) {
  
  mod_type_ = value;
  // @@protoc_insertion_point(field_set:pms.MsgReq.mod_type)
}

// optional bytes content = 3;
inline void MsgReq::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgReq::content() const {
  // @@protoc_insertion_point(field_get:pms.MsgReq.content)
  return content_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgReq::set_content(const ::std::string& value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pms.MsgReq.content)
}
inline void MsgReq::set_content(const char* value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pms.MsgReq.content)
}
inline void MsgReq::set_content(const void* value, size_t size) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pms.MsgReq.content)
}
inline ::std::string* MsgReq::mutable_content() {
  
  // @@protoc_insertion_point(field_mutable:pms.MsgReq.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgReq::release_content() {
  // @@protoc_insertion_point(field_release:pms.MsgReq.content)
  
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgReq::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    
  } else {
    
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:pms.MsgReq.content)
}

// -------------------------------------------------------------------

// MsgRep

// optional .pms.EServerCmd svr_cmds = 1;
inline void MsgRep::clear_svr_cmds() {
  svr_cmds_ = 0;
}
inline ::pms::EServerCmd MsgRep::svr_cmds() const {
  // @@protoc_insertion_point(field_get:pms.MsgRep.svr_cmds)
  return static_cast< ::pms::EServerCmd >(svr_cmds_);
}
inline void MsgRep::set_svr_cmds(::pms::EServerCmd value) {
  
  svr_cmds_ = value;
  // @@protoc_insertion_point(field_set:pms.MsgRep.svr_cmds)
}

// optional .pms.EModuleType mod_type = 2;
inline void MsgRep::clear_mod_type() {
  mod_type_ = 0;
}
inline ::pms::EModuleType MsgRep::mod_type() const {
  // @@protoc_insertion_point(field_get:pms.MsgRep.mod_type)
  return static_cast< ::pms::EModuleType >(mod_type_);
}
inline void MsgRep::set_mod_type(::pms::EModuleType value) {
  
  mod_type_ = value;
  // @@protoc_insertion_point(field_set:pms.MsgRep.mod_type)
}

// optional bytes rsp_cont = 3;
inline void MsgRep::clear_rsp_cont() {
  rsp_cont_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MsgRep::rsp_cont() const {
  // @@protoc_insertion_point(field_get:pms.MsgRep.rsp_cont)
  return rsp_cont_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgRep::set_rsp_cont(const ::std::string& value) {
  
  rsp_cont_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pms.MsgRep.rsp_cont)
}
inline void MsgRep::set_rsp_cont(const char* value) {
  
  rsp_cont_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pms.MsgRep.rsp_cont)
}
inline void MsgRep::set_rsp_cont(const void* value, size_t size) {
  
  rsp_cont_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pms.MsgRep.rsp_cont)
}
inline ::std::string* MsgRep::mutable_rsp_cont() {
  
  // @@protoc_insertion_point(field_mutable:pms.MsgRep.rsp_cont)
  return rsp_cont_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MsgRep::release_rsp_cont() {
  // @@protoc_insertion_point(field_release:pms.MsgRep.rsp_cont)
  
  return rsp_cont_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MsgRep::set_allocated_rsp_cont(::std::string* rsp_cont) {
  if (rsp_cont != NULL) {
    
  } else {
    
  }
  rsp_cont_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), rsp_cont);
  // @@protoc_insertion_point(field_set_allocated:pms.MsgRep.rsp_cont)
}

// optional sint32 rsp_code = 4;
inline void MsgRep::clear_rsp_code() {
  rsp_code_ = 0;
}
inline ::google::protobuf::int32 MsgRep::rsp_code() const {
  // @@protoc_insertion_point(field_get:pms.MsgRep.rsp_code)
  return rsp_code_;
}
inline void MsgRep::set_rsp_code(::google::protobuf::int32 value) {
  
  rsp_code_ = value;
  // @@protoc_insertion_point(field_set:pms.MsgRep.rsp_code)
}

// -------------------------------------------------------------------

// ToUser

// repeated string users = 1;
inline int ToUser::users_size() const {
  return users_.size();
}
inline void ToUser::clear_users() {
  users_.Clear();
}
inline const ::std::string& ToUser::users(int index) const {
  // @@protoc_insertion_point(field_get:pms.ToUser.users)
  return users_.Get(index);
}
inline ::std::string* ToUser::mutable_users(int index) {
  // @@protoc_insertion_point(field_mutable:pms.ToUser.users)
  return users_.Mutable(index);
}
inline void ToUser::set_users(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:pms.ToUser.users)
  users_.Mutable(index)->assign(value);
}
inline void ToUser::set_users(int index, const char* value) {
  users_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:pms.ToUser.users)
}
inline void ToUser::set_users(int index, const char* value, size_t size) {
  users_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:pms.ToUser.users)
}
inline ::std::string* ToUser::add_users() {
  // @@protoc_insertion_point(field_add_mutable:pms.ToUser.users)
  return users_.Add();
}
inline void ToUser::add_users(const ::std::string& value) {
  users_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:pms.ToUser.users)
}
inline void ToUser::add_users(const char* value) {
  users_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:pms.ToUser.users)
}
inline void ToUser::add_users(const char* value, size_t size) {
  users_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:pms.ToUser.users)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
ToUser::users() const {
  // @@protoc_insertion_point(field_list:pms.ToUser.users)
  return users_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
ToUser::mutable_users() {
  // @@protoc_insertion_point(field_mutable_list:pms.ToUser.users)
  return &users_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pms

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::pms::EServerCmd> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::pms::EModuleType> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::pms::EMsgFlag> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::pms::EMsgRole> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::pms::EMsgRType> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_common_5fmsg_2eproto__INCLUDED
