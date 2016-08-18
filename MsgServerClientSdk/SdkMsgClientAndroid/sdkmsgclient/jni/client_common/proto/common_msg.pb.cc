// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common_msg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "common_msg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace pms {

void protobuf_ShutdownFile_common_5fmsg_2eproto() {
  delete MsgReq::default_instance_;
  delete MsgRep::default_instance_;
  delete ToUser::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_common_5fmsg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_common_5fmsg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  MsgReq::default_instance_ = new MsgReq();
  MsgRep::default_instance_ = new MsgRep();
  ToUser::default_instance_ = new ToUser();
  MsgReq::default_instance_->InitAsDefaultInstance();
  MsgRep::default_instance_->InitAsDefaultInstance();
  ToUser::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_common_5fmsg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_common_5fmsg_2eproto_once_);
void protobuf_AddDesc_common_5fmsg_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_common_5fmsg_2eproto_once_,
                 &protobuf_AddDesc_common_5fmsg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_common_5fmsg_2eproto {
  StaticDescriptorInitializer_common_5fmsg_2eproto() {
    protobuf_AddDesc_common_5fmsg_2eproto();
  }
} static_descriptor_initializer_common_5fmsg_2eproto_;
#endif
bool EServerCmd_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
      return true;
    default:
      return false;
  }
}

bool EModuleType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      return true;
    default:
      return false;
  }
}

bool EMsgFlag_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

bool EMsgRole_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

bool EMsgRType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MsgReq::kSvrCmdsFieldNumber;
const int MsgReq::kModTypeFieldNumber;
const int MsgReq::kContentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MsgReq::MsgReq()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pms.MsgReq)
}

void MsgReq::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

MsgReq::MsgReq(const MsgReq& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:pms.MsgReq)
}

void MsgReq::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  svr_cmds_ = 0;
  mod_type_ = 0;
  content_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

MsgReq::~MsgReq() {
  // @@protoc_insertion_point(destructor:pms.MsgReq)
  SharedDtor();
}

void MsgReq::SharedDtor() {
  content_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MsgReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgReq& MsgReq::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_common_5fmsg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_common_5fmsg_2eproto();
#endif
  return *default_instance_;
}

MsgReq* MsgReq::default_instance_ = NULL;

MsgReq* MsgReq::New(::google::protobuf::Arena* arena) const {
  MsgReq* n = new MsgReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MsgReq::Clear() {
// @@protoc_insertion_point(message_clear_start:pms.MsgReq)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(MsgReq, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MsgReq*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(svr_cmds_, mod_type_);
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool MsgReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pms.MsgReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .pms.EServerCmd svr_cmds = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_svr_cmds(static_cast< ::pms::EServerCmd >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_mod_type;
        break;
      }

      // optional .pms.EModuleType mod_type = 2;
      case 2: {
        if (tag == 16) {
         parse_mod_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_mod_type(static_cast< ::pms::EModuleType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_content;
        break;
      }

      // optional bytes content = 3;
      case 3: {
        if (tag == 26) {
         parse_content:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_content()));
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
  // @@protoc_insertion_point(parse_success:pms.MsgReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pms.MsgReq)
  return false;
#undef DO_
}

void MsgReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pms.MsgReq)
  // optional .pms.EServerCmd svr_cmds = 1;
  if (this->svr_cmds() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->svr_cmds(), output);
  }

  // optional .pms.EModuleType mod_type = 2;
  if (this->mod_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->mod_type(), output);
  }

  // optional bytes content = 3;
  if (this->content().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->content(), output);
  }

  // @@protoc_insertion_point(serialize_end:pms.MsgReq)
}

int MsgReq::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:pms.MsgReq)
  int total_size = 0;

  // optional .pms.EServerCmd svr_cmds = 1;
  if (this->svr_cmds() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->svr_cmds());
  }

  // optional .pms.EModuleType mod_type = 2;
  if (this->mod_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->mod_type());
  }

  // optional bytes content = 3;
  if (this->content().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->content());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgReq::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgReq*>(&from));
}

void MsgReq::MergeFrom(const MsgReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pms.MsgReq)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.svr_cmds() != 0) {
    set_svr_cmds(from.svr_cmds());
  }
  if (from.mod_type() != 0) {
    set_mod_type(from.mod_type());
  }
  if (from.content().size() > 0) {

    content_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.content_);
  }
}

void MsgReq::CopyFrom(const MsgReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pms.MsgReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgReq::IsInitialized() const {

  return true;
}

void MsgReq::Swap(MsgReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MsgReq::InternalSwap(MsgReq* other) {
  std::swap(svr_cmds_, other->svr_cmds_);
  std::swap(mod_type_, other->mod_type_);
  content_.Swap(&other->content_);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MsgReq::GetTypeName() const {
  return "pms.MsgReq";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MsgReq

// optional .pms.EServerCmd svr_cmds = 1;
void MsgReq::clear_svr_cmds() {
  svr_cmds_ = 0;
}
 ::pms::EServerCmd MsgReq::svr_cmds() const {
  // @@protoc_insertion_point(field_get:pms.MsgReq.svr_cmds)
  return static_cast< ::pms::EServerCmd >(svr_cmds_);
}
 void MsgReq::set_svr_cmds(::pms::EServerCmd value) {
  
  svr_cmds_ = value;
  // @@protoc_insertion_point(field_set:pms.MsgReq.svr_cmds)
}

// optional .pms.EModuleType mod_type = 2;
void MsgReq::clear_mod_type() {
  mod_type_ = 0;
}
 ::pms::EModuleType MsgReq::mod_type() const {
  // @@protoc_insertion_point(field_get:pms.MsgReq.mod_type)
  return static_cast< ::pms::EModuleType >(mod_type_);
}
 void MsgReq::set_mod_type(::pms::EModuleType value) {
  
  mod_type_ = value;
  // @@protoc_insertion_point(field_set:pms.MsgReq.mod_type)
}

// optional bytes content = 3;
void MsgReq::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& MsgReq::content() const {
  // @@protoc_insertion_point(field_get:pms.MsgReq.content)
  return content_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MsgReq::set_content(const ::std::string& value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pms.MsgReq.content)
}
 void MsgReq::set_content(const char* value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pms.MsgReq.content)
}
 void MsgReq::set_content(const void* value, size_t size) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pms.MsgReq.content)
}
 ::std::string* MsgReq::mutable_content() {
  
  // @@protoc_insertion_point(field_mutable:pms.MsgReq.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* MsgReq::release_content() {
  // @@protoc_insertion_point(field_release:pms.MsgReq.content)
  
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MsgReq::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    
  } else {
    
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:pms.MsgReq.content)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MsgRep::kSvrCmdsFieldNumber;
const int MsgRep::kModTypeFieldNumber;
const int MsgRep::kRspContFieldNumber;
const int MsgRep::kRspCodeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MsgRep::MsgRep()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pms.MsgRep)
}

void MsgRep::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

MsgRep::MsgRep(const MsgRep& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:pms.MsgRep)
}

void MsgRep::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  svr_cmds_ = 0;
  mod_type_ = 0;
  rsp_cont_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  rsp_code_ = 0;
}

MsgRep::~MsgRep() {
  // @@protoc_insertion_point(destructor:pms.MsgRep)
  SharedDtor();
}

void MsgRep::SharedDtor() {
  rsp_cont_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MsgRep::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MsgRep& MsgRep::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_common_5fmsg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_common_5fmsg_2eproto();
#endif
  return *default_instance_;
}

MsgRep* MsgRep::default_instance_ = NULL;

MsgRep* MsgRep::New(::google::protobuf::Arena* arena) const {
  MsgRep* n = new MsgRep;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MsgRep::Clear() {
// @@protoc_insertion_point(message_clear_start:pms.MsgRep)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(MsgRep, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MsgRep*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(svr_cmds_, mod_type_);
  rsp_cont_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  rsp_code_ = 0;

#undef ZR_HELPER_
#undef ZR_

}

bool MsgRep::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pms.MsgRep)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .pms.EServerCmd svr_cmds = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_svr_cmds(static_cast< ::pms::EServerCmd >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_mod_type;
        break;
      }

      // optional .pms.EModuleType mod_type = 2;
      case 2: {
        if (tag == 16) {
         parse_mod_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_mod_type(static_cast< ::pms::EModuleType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_rsp_cont;
        break;
      }

      // optional bytes rsp_cont = 3;
      case 3: {
        if (tag == 26) {
         parse_rsp_cont:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_rsp_cont()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_rsp_code;
        break;
      }

      // optional sint32 rsp_code = 4;
      case 4: {
        if (tag == 32) {
         parse_rsp_code:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &rsp_code_)));

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
  // @@protoc_insertion_point(parse_success:pms.MsgRep)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pms.MsgRep)
  return false;
#undef DO_
}

void MsgRep::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pms.MsgRep)
  // optional .pms.EServerCmd svr_cmds = 1;
  if (this->svr_cmds() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->svr_cmds(), output);
  }

  // optional .pms.EModuleType mod_type = 2;
  if (this->mod_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->mod_type(), output);
  }

  // optional bytes rsp_cont = 3;
  if (this->rsp_cont().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->rsp_cont(), output);
  }

  // optional sint32 rsp_code = 4;
  if (this->rsp_code() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(4, this->rsp_code(), output);
  }

  // @@protoc_insertion_point(serialize_end:pms.MsgRep)
}

int MsgRep::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:pms.MsgRep)
  int total_size = 0;

  // optional .pms.EServerCmd svr_cmds = 1;
  if (this->svr_cmds() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->svr_cmds());
  }

  // optional .pms.EModuleType mod_type = 2;
  if (this->mod_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->mod_type());
  }

  // optional bytes rsp_cont = 3;
  if (this->rsp_cont().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->rsp_cont());
  }

  // optional sint32 rsp_code = 4;
  if (this->rsp_code() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::SInt32Size(
        this->rsp_code());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgRep::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MsgRep*>(&from));
}

void MsgRep::MergeFrom(const MsgRep& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pms.MsgRep)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.svr_cmds() != 0) {
    set_svr_cmds(from.svr_cmds());
  }
  if (from.mod_type() != 0) {
    set_mod_type(from.mod_type());
  }
  if (from.rsp_cont().size() > 0) {

    rsp_cont_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.rsp_cont_);
  }
  if (from.rsp_code() != 0) {
    set_rsp_code(from.rsp_code());
  }
}

void MsgRep::CopyFrom(const MsgRep& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pms.MsgRep)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgRep::IsInitialized() const {

  return true;
}

void MsgRep::Swap(MsgRep* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MsgRep::InternalSwap(MsgRep* other) {
  std::swap(svr_cmds_, other->svr_cmds_);
  std::swap(mod_type_, other->mod_type_);
  rsp_cont_.Swap(&other->rsp_cont_);
  std::swap(rsp_code_, other->rsp_code_);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MsgRep::GetTypeName() const {
  return "pms.MsgRep";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MsgRep

// optional .pms.EServerCmd svr_cmds = 1;
void MsgRep::clear_svr_cmds() {
  svr_cmds_ = 0;
}
 ::pms::EServerCmd MsgRep::svr_cmds() const {
  // @@protoc_insertion_point(field_get:pms.MsgRep.svr_cmds)
  return static_cast< ::pms::EServerCmd >(svr_cmds_);
}
 void MsgRep::set_svr_cmds(::pms::EServerCmd value) {
  
  svr_cmds_ = value;
  // @@protoc_insertion_point(field_set:pms.MsgRep.svr_cmds)
}

// optional .pms.EModuleType mod_type = 2;
void MsgRep::clear_mod_type() {
  mod_type_ = 0;
}
 ::pms::EModuleType MsgRep::mod_type() const {
  // @@protoc_insertion_point(field_get:pms.MsgRep.mod_type)
  return static_cast< ::pms::EModuleType >(mod_type_);
}
 void MsgRep::set_mod_type(::pms::EModuleType value) {
  
  mod_type_ = value;
  // @@protoc_insertion_point(field_set:pms.MsgRep.mod_type)
}

// optional bytes rsp_cont = 3;
void MsgRep::clear_rsp_cont() {
  rsp_cont_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& MsgRep::rsp_cont() const {
  // @@protoc_insertion_point(field_get:pms.MsgRep.rsp_cont)
  return rsp_cont_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MsgRep::set_rsp_cont(const ::std::string& value) {
  
  rsp_cont_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pms.MsgRep.rsp_cont)
}
 void MsgRep::set_rsp_cont(const char* value) {
  
  rsp_cont_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pms.MsgRep.rsp_cont)
}
 void MsgRep::set_rsp_cont(const void* value, size_t size) {
  
  rsp_cont_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pms.MsgRep.rsp_cont)
}
 ::std::string* MsgRep::mutable_rsp_cont() {
  
  // @@protoc_insertion_point(field_mutable:pms.MsgRep.rsp_cont)
  return rsp_cont_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* MsgRep::release_rsp_cont() {
  // @@protoc_insertion_point(field_release:pms.MsgRep.rsp_cont)
  
  return rsp_cont_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void MsgRep::set_allocated_rsp_cont(::std::string* rsp_cont) {
  if (rsp_cont != NULL) {
    
  } else {
    
  }
  rsp_cont_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), rsp_cont);
  // @@protoc_insertion_point(field_set_allocated:pms.MsgRep.rsp_cont)
}

// optional sint32 rsp_code = 4;
void MsgRep::clear_rsp_code() {
  rsp_code_ = 0;
}
 ::google::protobuf::int32 MsgRep::rsp_code() const {
  // @@protoc_insertion_point(field_get:pms.MsgRep.rsp_code)
  return rsp_code_;
}
 void MsgRep::set_rsp_code(::google::protobuf::int32 value) {
  
  rsp_code_ = value;
  // @@protoc_insertion_point(field_set:pms.MsgRep.rsp_code)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ToUser::kUsersFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ToUser::ToUser()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pms.ToUser)
}

void ToUser::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ToUser::ToUser(const ToUser& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:pms.ToUser)
}

void ToUser::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
}

ToUser::~ToUser() {
  // @@protoc_insertion_point(destructor:pms.ToUser)
  SharedDtor();
}

void ToUser::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ToUser::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ToUser& ToUser::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_common_5fmsg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_common_5fmsg_2eproto();
#endif
  return *default_instance_;
}

ToUser* ToUser::default_instance_ = NULL;

ToUser* ToUser::New(::google::protobuf::Arena* arena) const {
  ToUser* n = new ToUser;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ToUser::Clear() {
// @@protoc_insertion_point(message_clear_start:pms.ToUser)
  users_.Clear();
}

bool ToUser::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pms.ToUser)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string users = 1;
      case 1: {
        if (tag == 10) {
         parse_users:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_users()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->users(this->users_size() - 1).data(),
            this->users(this->users_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "pms.ToUser.users"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_users;
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
  // @@protoc_insertion_point(parse_success:pms.ToUser)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pms.ToUser)
  return false;
#undef DO_
}

void ToUser::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pms.ToUser)
  // repeated string users = 1;
  for (int i = 0; i < this->users_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->users(i).data(), this->users(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pms.ToUser.users");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->users(i), output);
  }

  // @@protoc_insertion_point(serialize_end:pms.ToUser)
}

int ToUser::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:pms.ToUser)
  int total_size = 0;

  // repeated string users = 1;
  total_size += 1 * this->users_size();
  for (int i = 0; i < this->users_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->users(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ToUser::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ToUser*>(&from));
}

void ToUser::MergeFrom(const ToUser& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pms.ToUser)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  users_.MergeFrom(from.users_);
}

void ToUser::CopyFrom(const ToUser& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pms.ToUser)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ToUser::IsInitialized() const {

  return true;
}

void ToUser::Swap(ToUser* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ToUser::InternalSwap(ToUser* other) {
  users_.UnsafeArenaSwap(&other->users_);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string ToUser::GetTypeName() const {
  return "pms.ToUser";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ToUser

// repeated string users = 1;
int ToUser::users_size() const {
  return users_.size();
}
void ToUser::clear_users() {
  users_.Clear();
}
 const ::std::string& ToUser::users(int index) const {
  // @@protoc_insertion_point(field_get:pms.ToUser.users)
  return users_.Get(index);
}
 ::std::string* ToUser::mutable_users(int index) {
  // @@protoc_insertion_point(field_mutable:pms.ToUser.users)
  return users_.Mutable(index);
}
 void ToUser::set_users(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:pms.ToUser.users)
  users_.Mutable(index)->assign(value);
}
 void ToUser::set_users(int index, const char* value) {
  users_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:pms.ToUser.users)
}
 void ToUser::set_users(int index, const char* value, size_t size) {
  users_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:pms.ToUser.users)
}
 ::std::string* ToUser::add_users() {
  // @@protoc_insertion_point(field_add_mutable:pms.ToUser.users)
  return users_.Add();
}
 void ToUser::add_users(const ::std::string& value) {
  users_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:pms.ToUser.users)
}
 void ToUser::add_users(const char* value) {
  users_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:pms.ToUser.users)
}
 void ToUser::add_users(const char* value, size_t size) {
  users_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:pms.ToUser.users)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
ToUser::users() const {
  // @@protoc_insertion_point(field_list:pms.ToUser.users)
  return users_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
ToUser::mutable_users() {
  // @@protoc_insertion_point(field_mutable_list:pms.ToUser.users)
  return &users_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace pms

// @@protoc_insertion_point(global_scope)
