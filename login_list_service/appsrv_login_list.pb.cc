// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: appsrv_login_list.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "appsrv_login_list.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com_protocol {

namespace {


}  // namespace


void protobuf_AssignDesc_appsrv_5flogin_5flist_2eproto() {
  protobuf_AddDesc_appsrv_5flogin_5flist_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "appsrv_login_list.proto");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_appsrv_5flogin_5flist_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_appsrv_5flogin_5flist_2eproto() {
}

void protobuf_AddDesc_appsrv_5flogin_5flist_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::com_protocol::protobuf_AddDesc_CLIENT_5fGET_5fLOGIN_5fLIST_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027appsrv_login_list.proto\022\014com_protocol\032"
    "\033CLIENT_GET_LOGIN_LIST.proto", 68);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "appsrv_login_list.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_appsrv_5flogin_5flist_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_appsrv_5flogin_5flist_2eproto {
  StaticDescriptorInitializer_appsrv_5flogin_5flist_2eproto() {
    protobuf_AddDesc_appsrv_5flogin_5flist_2eproto();
  }
} static_descriptor_initializer_appsrv_5flogin_5flist_2eproto_;

// @@protoc_insertion_point(namespace_scope)

}  // namespace com_protocol

// @@protoc_insertion_point(global_scope)
