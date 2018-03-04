// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CLIENT_GET_LOGIN_LIST.proto

#ifndef PROTOBUF_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto__INCLUDED
#define PROTOBUF_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace com_protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();
void protobuf_AssignDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();
void protobuf_ShutdownFile_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();

class ClientGetLoginListReq;
class LoginServerInfo;
class ClientGetLoginListRsp;

// ===================================================================

class ClientGetLoginListReq : public ::google::protobuf::Message {
 public:
  ClientGetLoginListReq();
  virtual ~ClientGetLoginListReq();

  ClientGetLoginListReq(const ClientGetLoginListReq& from);

  inline ClientGetLoginListReq& operator=(const ClientGetLoginListReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ClientGetLoginListReq& default_instance();

  void Swap(ClientGetLoginListReq* other);

  // implements Message ----------------------------------------------

  ClientGetLoginListReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ClientGetLoginListReq& from);
  void MergeFrom(const ClientGetLoginListReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:com_protocol.ClientGetLoginListReq)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();
  friend void protobuf_AssignDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();
  friend void protobuf_ShutdownFile_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();

  void InitAsDefaultInstance();
  static ClientGetLoginListReq* default_instance_;
};
// -------------------------------------------------------------------

class LoginServerInfo : public ::google::protobuf::Message {
 public:
  LoginServerInfo();
  virtual ~LoginServerInfo();

  LoginServerInfo(const LoginServerInfo& from);

  inline LoginServerInfo& operator=(const LoginServerInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginServerInfo& default_instance();

  void Swap(LoginServerInfo* other);

  // implements Message ----------------------------------------------

  LoginServerInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginServerInfo& from);
  void MergeFrom(const LoginServerInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 ip = 1;
  inline bool has_ip() const;
  inline void clear_ip();
  static const int kIpFieldNumber = 1;
  inline ::google::protobuf::uint32 ip() const;
  inline void set_ip(::google::protobuf::uint32 value);

  // required uint32 port = 2;
  inline bool has_port() const;
  inline void clear_port();
  static const int kPortFieldNumber = 2;
  inline ::google::protobuf::uint32 port() const;
  inline void set_port(::google::protobuf::uint32 value);

  // optional uint32 game_service_id = 3;
  inline bool has_game_service_id() const;
  inline void clear_game_service_id();
  static const int kGameServiceIdFieldNumber = 3;
  inline ::google::protobuf::uint32 game_service_id() const;
  inline void set_game_service_id(::google::protobuf::uint32 value);

  // optional uint32 business_service_id = 4;
  inline bool has_business_service_id() const;
  inline void clear_business_service_id();
  static const int kBusinessServiceIdFieldNumber = 4;
  inline ::google::protobuf::uint32 business_service_id() const;
  inline void set_business_service_id(::google::protobuf::uint32 value);

  // required uint32 current_persons = 5;
  inline bool has_current_persons() const;
  inline void clear_current_persons();
  static const int kCurrentPersonsFieldNumber = 5;
  inline ::google::protobuf::uint32 current_persons() const;
  inline void set_current_persons(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com_protocol.LoginServerInfo)
 private:
  inline void set_has_ip();
  inline void clear_has_ip();
  inline void set_has_port();
  inline void clear_has_port();
  inline void set_has_game_service_id();
  inline void clear_has_game_service_id();
  inline void set_has_business_service_id();
  inline void clear_has_business_service_id();
  inline void set_has_current_persons();
  inline void clear_has_current_persons();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 ip_;
  ::google::protobuf::uint32 port_;
  ::google::protobuf::uint32 game_service_id_;
  ::google::protobuf::uint32 business_service_id_;
  ::google::protobuf::uint32 current_persons_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();
  friend void protobuf_AssignDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();
  friend void protobuf_ShutdownFile_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();

  void InitAsDefaultInstance();
  static LoginServerInfo* default_instance_;
};
// -------------------------------------------------------------------

class ClientGetLoginListRsp : public ::google::protobuf::Message {
 public:
  ClientGetLoginListRsp();
  virtual ~ClientGetLoginListRsp();

  ClientGetLoginListRsp(const ClientGetLoginListRsp& from);

  inline ClientGetLoginListRsp& operator=(const ClientGetLoginListRsp& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ClientGetLoginListRsp& default_instance();

  void Swap(ClientGetLoginListRsp* other);

  // implements Message ----------------------------------------------

  ClientGetLoginListRsp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ClientGetLoginListRsp& from);
  void MergeFrom(const ClientGetLoginListRsp& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .com_protocol.LoginServerInfo login_info_list = 1;
  inline int login_info_list_size() const;
  inline void clear_login_info_list();
  static const int kLoginInfoListFieldNumber = 1;
  inline const ::com_protocol::LoginServerInfo& login_info_list(int index) const;
  inline ::com_protocol::LoginServerInfo* mutable_login_info_list(int index);
  inline ::com_protocol::LoginServerInfo* add_login_info_list();
  inline const ::google::protobuf::RepeatedPtrField< ::com_protocol::LoginServerInfo >&
      login_info_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::com_protocol::LoginServerInfo >*
      mutable_login_info_list();

  // @@protoc_insertion_point(class_scope:com_protocol.ClientGetLoginListRsp)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::com_protocol::LoginServerInfo > login_info_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();
  friend void protobuf_AssignDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();
  friend void protobuf_ShutdownFile_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();

  void InitAsDefaultInstance();
  static ClientGetLoginListRsp* default_instance_;
};
// ===================================================================


// ===================================================================

// ClientGetLoginListReq

// -------------------------------------------------------------------

// LoginServerInfo

// required uint32 ip = 1;
inline bool LoginServerInfo::has_ip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoginServerInfo::set_has_ip() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoginServerInfo::clear_has_ip() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoginServerInfo::clear_ip() {
  ip_ = 0u;
  clear_has_ip();
}
inline ::google::protobuf::uint32 LoginServerInfo::ip() const {
  return ip_;
}
inline void LoginServerInfo::set_ip(::google::protobuf::uint32 value) {
  set_has_ip();
  ip_ = value;
}

// required uint32 port = 2;
inline bool LoginServerInfo::has_port() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LoginServerInfo::set_has_port() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LoginServerInfo::clear_has_port() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LoginServerInfo::clear_port() {
  port_ = 0u;
  clear_has_port();
}
inline ::google::protobuf::uint32 LoginServerInfo::port() const {
  return port_;
}
inline void LoginServerInfo::set_port(::google::protobuf::uint32 value) {
  set_has_port();
  port_ = value;
}

// optional uint32 game_service_id = 3;
inline bool LoginServerInfo::has_game_service_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LoginServerInfo::set_has_game_service_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LoginServerInfo::clear_has_game_service_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LoginServerInfo::clear_game_service_id() {
  game_service_id_ = 0u;
  clear_has_game_service_id();
}
inline ::google::protobuf::uint32 LoginServerInfo::game_service_id() const {
  return game_service_id_;
}
inline void LoginServerInfo::set_game_service_id(::google::protobuf::uint32 value) {
  set_has_game_service_id();
  game_service_id_ = value;
}

// optional uint32 business_service_id = 4;
inline bool LoginServerInfo::has_business_service_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LoginServerInfo::set_has_business_service_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LoginServerInfo::clear_has_business_service_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LoginServerInfo::clear_business_service_id() {
  business_service_id_ = 0u;
  clear_has_business_service_id();
}
inline ::google::protobuf::uint32 LoginServerInfo::business_service_id() const {
  return business_service_id_;
}
inline void LoginServerInfo::set_business_service_id(::google::protobuf::uint32 value) {
  set_has_business_service_id();
  business_service_id_ = value;
}

// required uint32 current_persons = 5;
inline bool LoginServerInfo::has_current_persons() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LoginServerInfo::set_has_current_persons() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LoginServerInfo::clear_has_current_persons() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LoginServerInfo::clear_current_persons() {
  current_persons_ = 0u;
  clear_has_current_persons();
}
inline ::google::protobuf::uint32 LoginServerInfo::current_persons() const {
  return current_persons_;
}
inline void LoginServerInfo::set_current_persons(::google::protobuf::uint32 value) {
  set_has_current_persons();
  current_persons_ = value;
}

// -------------------------------------------------------------------

// ClientGetLoginListRsp

// repeated .com_protocol.LoginServerInfo login_info_list = 1;
inline int ClientGetLoginListRsp::login_info_list_size() const {
  return login_info_list_.size();
}
inline void ClientGetLoginListRsp::clear_login_info_list() {
  login_info_list_.Clear();
}
inline const ::com_protocol::LoginServerInfo& ClientGetLoginListRsp::login_info_list(int index) const {
  return login_info_list_.Get(index);
}
inline ::com_protocol::LoginServerInfo* ClientGetLoginListRsp::mutable_login_info_list(int index) {
  return login_info_list_.Mutable(index);
}
inline ::com_protocol::LoginServerInfo* ClientGetLoginListRsp::add_login_info_list() {
  return login_info_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com_protocol::LoginServerInfo >&
ClientGetLoginListRsp::login_info_list() const {
  return login_info_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::com_protocol::LoginServerInfo >*
ClientGetLoginListRsp::mutable_login_info_list() {
  return &login_info_list_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace com_protocol

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto__INCLUDED
