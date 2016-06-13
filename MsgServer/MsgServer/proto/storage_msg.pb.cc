// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: storage_msg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "storage_msg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace pms {

void protobuf_ShutdownFile_storage_5fmsg_2eproto() {
  delete StorageMsg::default_instance_;
  delete PackedStoreMsg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_storage_5fmsg_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_storage_5fmsg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::pms::protobuf_AddDesc_storage_5fmsg_5ftype_2eproto();
  StorageMsg::default_instance_ = new StorageMsg();
  PackedStoreMsg::default_instance_ = new PackedStoreMsg();
  StorageMsg::default_instance_->InitAsDefaultInstance();
  PackedStoreMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_storage_5fmsg_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_storage_5fmsg_2eproto_once_);
void protobuf_AddDesc_storage_5fmsg_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_storage_5fmsg_2eproto_once_,
                 &protobuf_AddDesc_storage_5fmsg_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_storage_5fmsg_2eproto {
  StaticDescriptorInitializer_storage_5fmsg_2eproto() {
    protobuf_AddDesc_storage_5fmsg_2eproto();
  }
} static_descriptor_initializer_storage_5fmsg_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StorageMsg::kMflagFieldNumber;
const int StorageMsg::kResultFieldNumber;
const int StorageMsg::kSequenceFieldNumber;
const int StorageMsg::kUseridFieldNumber;
const int StorageMsg::kMsgidFieldNumber;
const int StorageMsg::kContentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StorageMsg::StorageMsg()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pms.StorageMsg)
}

void StorageMsg::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

StorageMsg::StorageMsg(const StorageMsg& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:pms.StorageMsg)
}

void StorageMsg::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  mflag_ = 0;
  result_ = 0;
  sequence_ = GOOGLE_LONGLONG(0);
  userid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  msgid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  content_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

StorageMsg::~StorageMsg() {
  // @@protoc_insertion_point(destructor:pms.StorageMsg)
  SharedDtor();
}

void StorageMsg::SharedDtor() {
  userid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  msgid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  content_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void StorageMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const StorageMsg& StorageMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_storage_5fmsg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_storage_5fmsg_2eproto();
#endif
  return *default_instance_;
}

StorageMsg* StorageMsg::default_instance_ = NULL;

StorageMsg* StorageMsg::New(::google::protobuf::Arena* arena) const {
  StorageMsg* n = new StorageMsg;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StorageMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:pms.StorageMsg)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(StorageMsg, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<StorageMsg*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(mflag_, sequence_);
  userid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  msgid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool StorageMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pms.StorageMsg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .pms.EStorageType mflag = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_mflag(static_cast< ::pms::EStorageType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_result;
        break;
      }

      // optional sint32 result = 2;
      case 2: {
        if (tag == 16) {
         parse_result:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &result_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_sequence;
        break;
      }

      // optional sint64 sequence = 3;
      case 3: {
        if (tag == 24) {
         parse_sequence:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SINT64>(
                 input, &sequence_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_userid;
        break;
      }

      // optional string userid = 4;
      case 4: {
        if (tag == 34) {
         parse_userid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_userid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->userid().data(), this->userid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "pms.StorageMsg.userid"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_msgid;
        break;
      }

      // optional string msgid = 5;
      case 5: {
        if (tag == 42) {
         parse_msgid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msgid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->msgid().data(), this->msgid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "pms.StorageMsg.msgid"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_content;
        break;
      }

      // optional string content = 6;
      case 6: {
        if (tag == 50) {
         parse_content:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_content()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->content().data(), this->content().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "pms.StorageMsg.content"));
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
  // @@protoc_insertion_point(parse_success:pms.StorageMsg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pms.StorageMsg)
  return false;
#undef DO_
}

void StorageMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pms.StorageMsg)
  // optional .pms.EStorageType mflag = 1;
  if (this->mflag() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->mflag(), output);
  }

  // optional sint32 result = 2;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(2, this->result(), output);
  }

  // optional sint64 sequence = 3;
  if (this->sequence() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt64(3, this->sequence(), output);
  }

  // optional string userid = 4;
  if (this->userid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->userid().data(), this->userid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pms.StorageMsg.userid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->userid(), output);
  }

  // optional string msgid = 5;
  if (this->msgid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->msgid().data(), this->msgid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pms.StorageMsg.msgid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->msgid(), output);
  }

  // optional string content = 6;
  if (this->content().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->content().data(), this->content().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pms.StorageMsg.content");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->content(), output);
  }

  // @@protoc_insertion_point(serialize_end:pms.StorageMsg)
}

int StorageMsg::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:pms.StorageMsg)
  int total_size = 0;

  // optional .pms.EStorageType mflag = 1;
  if (this->mflag() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->mflag());
  }

  // optional sint32 result = 2;
  if (this->result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::SInt32Size(
        this->result());
  }

  // optional sint64 sequence = 3;
  if (this->sequence() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::SInt64Size(
        this->sequence());
  }

  // optional string userid = 4;
  if (this->userid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->userid());
  }

  // optional string msgid = 5;
  if (this->msgid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->msgid());
  }

  // optional string content = 6;
  if (this->content().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->content());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void StorageMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const StorageMsg*>(&from));
}

void StorageMsg::MergeFrom(const StorageMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pms.StorageMsg)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.mflag() != 0) {
    set_mflag(from.mflag());
  }
  if (from.result() != 0) {
    set_result(from.result());
  }
  if (from.sequence() != 0) {
    set_sequence(from.sequence());
  }
  if (from.userid().size() > 0) {

    userid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.userid_);
  }
  if (from.msgid().size() > 0) {

    msgid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msgid_);
  }
  if (from.content().size() > 0) {

    content_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.content_);
  }
}

void StorageMsg::CopyFrom(const StorageMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pms.StorageMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StorageMsg::IsInitialized() const {

  return true;
}

void StorageMsg::Swap(StorageMsg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StorageMsg::InternalSwap(StorageMsg* other) {
  std::swap(mflag_, other->mflag_);
  std::swap(result_, other->result_);
  std::swap(sequence_, other->sequence_);
  userid_.Swap(&other->userid_);
  msgid_.Swap(&other->msgid_);
  content_.Swap(&other->content_);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string StorageMsg::GetTypeName() const {
  return "pms.StorageMsg";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// StorageMsg

// optional .pms.EStorageType mflag = 1;
void StorageMsg::clear_mflag() {
  mflag_ = 0;
}
 ::pms::EStorageType StorageMsg::mflag() const {
  // @@protoc_insertion_point(field_get:pms.StorageMsg.mflag)
  return static_cast< ::pms::EStorageType >(mflag_);
}
 void StorageMsg::set_mflag(::pms::EStorageType value) {
  
  mflag_ = value;
  // @@protoc_insertion_point(field_set:pms.StorageMsg.mflag)
}

// optional sint32 result = 2;
void StorageMsg::clear_result() {
  result_ = 0;
}
 ::google::protobuf::int32 StorageMsg::result() const {
  // @@protoc_insertion_point(field_get:pms.StorageMsg.result)
  return result_;
}
 void StorageMsg::set_result(::google::protobuf::int32 value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:pms.StorageMsg.result)
}

// optional sint64 sequence = 3;
void StorageMsg::clear_sequence() {
  sequence_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 StorageMsg::sequence() const {
  // @@protoc_insertion_point(field_get:pms.StorageMsg.sequence)
  return sequence_;
}
 void StorageMsg::set_sequence(::google::protobuf::int64 value) {
  
  sequence_ = value;
  // @@protoc_insertion_point(field_set:pms.StorageMsg.sequence)
}

// optional string userid = 4;
void StorageMsg::clear_userid() {
  userid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& StorageMsg::userid() const {
  // @@protoc_insertion_point(field_get:pms.StorageMsg.userid)
  return userid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void StorageMsg::set_userid(const ::std::string& value) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pms.StorageMsg.userid)
}
 void StorageMsg::set_userid(const char* value) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pms.StorageMsg.userid)
}
 void StorageMsg::set_userid(const char* value, size_t size) {
  
  userid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pms.StorageMsg.userid)
}
 ::std::string* StorageMsg::mutable_userid() {
  
  // @@protoc_insertion_point(field_mutable:pms.StorageMsg.userid)
  return userid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* StorageMsg::release_userid() {
  // @@protoc_insertion_point(field_release:pms.StorageMsg.userid)
  
  return userid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void StorageMsg::set_allocated_userid(::std::string* userid) {
  if (userid != NULL) {
    
  } else {
    
  }
  userid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), userid);
  // @@protoc_insertion_point(field_set_allocated:pms.StorageMsg.userid)
}

// optional string msgid = 5;
void StorageMsg::clear_msgid() {
  msgid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& StorageMsg::msgid() const {
  // @@protoc_insertion_point(field_get:pms.StorageMsg.msgid)
  return msgid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void StorageMsg::set_msgid(const ::std::string& value) {
  
  msgid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pms.StorageMsg.msgid)
}
 void StorageMsg::set_msgid(const char* value) {
  
  msgid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pms.StorageMsg.msgid)
}
 void StorageMsg::set_msgid(const char* value, size_t size) {
  
  msgid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pms.StorageMsg.msgid)
}
 ::std::string* StorageMsg::mutable_msgid() {
  
  // @@protoc_insertion_point(field_mutable:pms.StorageMsg.msgid)
  return msgid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* StorageMsg::release_msgid() {
  // @@protoc_insertion_point(field_release:pms.StorageMsg.msgid)
  
  return msgid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void StorageMsg::set_allocated_msgid(::std::string* msgid) {
  if (msgid != NULL) {
    
  } else {
    
  }
  msgid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msgid);
  // @@protoc_insertion_point(field_set_allocated:pms.StorageMsg.msgid)
}

// optional string content = 6;
void StorageMsg::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& StorageMsg::content() const {
  // @@protoc_insertion_point(field_get:pms.StorageMsg.content)
  return content_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void StorageMsg::set_content(const ::std::string& value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pms.StorageMsg.content)
}
 void StorageMsg::set_content(const char* value) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pms.StorageMsg.content)
}
 void StorageMsg::set_content(const char* value, size_t size) {
  
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pms.StorageMsg.content)
}
 ::std::string* StorageMsg::mutable_content() {
  
  // @@protoc_insertion_point(field_mutable:pms.StorageMsg.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* StorageMsg::release_content() {
  // @@protoc_insertion_point(field_release:pms.StorageMsg.content)
  
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void StorageMsg::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    
  } else {
    
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:pms.StorageMsg.content)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PackedStoreMsg::kMsgsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PackedStoreMsg::PackedStoreMsg()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pms.PackedStoreMsg)
}

void PackedStoreMsg::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PackedStoreMsg::PackedStoreMsg(const PackedStoreMsg& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:pms.PackedStoreMsg)
}

void PackedStoreMsg::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

PackedStoreMsg::~PackedStoreMsg() {
  // @@protoc_insertion_point(destructor:pms.PackedStoreMsg)
  SharedDtor();
}

void PackedStoreMsg::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void PackedStoreMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PackedStoreMsg& PackedStoreMsg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_storage_5fmsg_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_storage_5fmsg_2eproto();
#endif
  return *default_instance_;
}

PackedStoreMsg* PackedStoreMsg::default_instance_ = NULL;

PackedStoreMsg* PackedStoreMsg::New(::google::protobuf::Arena* arena) const {
  PackedStoreMsg* n = new PackedStoreMsg;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PackedStoreMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:pms.PackedStoreMsg)
  msgs_.Clear();
}

bool PackedStoreMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pms.PackedStoreMsg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .pms.StorageMsg msgs = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_msgs:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_msgs()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_msgs;
        input->UnsafeDecrementRecursionDepth();
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
  // @@protoc_insertion_point(parse_success:pms.PackedStoreMsg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pms.PackedStoreMsg)
  return false;
#undef DO_
}

void PackedStoreMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pms.PackedStoreMsg)
  // repeated .pms.StorageMsg msgs = 1;
  for (unsigned int i = 0, n = this->msgs_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->msgs(i), output);
  }

  // @@protoc_insertion_point(serialize_end:pms.PackedStoreMsg)
}

int PackedStoreMsg::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:pms.PackedStoreMsg)
  int total_size = 0;

  // repeated .pms.StorageMsg msgs = 1;
  total_size += 1 * this->msgs_size();
  for (int i = 0; i < this->msgs_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->msgs(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PackedStoreMsg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PackedStoreMsg*>(&from));
}

void PackedStoreMsg::MergeFrom(const PackedStoreMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pms.PackedStoreMsg)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  msgs_.MergeFrom(from.msgs_);
}

void PackedStoreMsg::CopyFrom(const PackedStoreMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pms.PackedStoreMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PackedStoreMsg::IsInitialized() const {

  return true;
}

void PackedStoreMsg::Swap(PackedStoreMsg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PackedStoreMsg::InternalSwap(PackedStoreMsg* other) {
  msgs_.UnsafeArenaSwap(&other->msgs_);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string PackedStoreMsg::GetTypeName() const {
  return "pms.PackedStoreMsg";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PackedStoreMsg

// repeated .pms.StorageMsg msgs = 1;
int PackedStoreMsg::msgs_size() const {
  return msgs_.size();
}
void PackedStoreMsg::clear_msgs() {
  msgs_.Clear();
}
const ::pms::StorageMsg& PackedStoreMsg::msgs(int index) const {
  // @@protoc_insertion_point(field_get:pms.PackedStoreMsg.msgs)
  return msgs_.Get(index);
}
::pms::StorageMsg* PackedStoreMsg::mutable_msgs(int index) {
  // @@protoc_insertion_point(field_mutable:pms.PackedStoreMsg.msgs)
  return msgs_.Mutable(index);
}
::pms::StorageMsg* PackedStoreMsg::add_msgs() {
  // @@protoc_insertion_point(field_add:pms.PackedStoreMsg.msgs)
  return msgs_.Add();
}
::google::protobuf::RepeatedPtrField< ::pms::StorageMsg >*
PackedStoreMsg::mutable_msgs() {
  // @@protoc_insertion_point(field_mutable_list:pms.PackedStoreMsg.msgs)
  return &msgs_;
}
const ::google::protobuf::RepeatedPtrField< ::pms::StorageMsg >&
PackedStoreMsg::msgs() const {
  // @@protoc_insertion_point(field_list:pms.PackedStoreMsg.msgs)
  return msgs_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace pms

// @@protoc_insertion_point(global_scope)
