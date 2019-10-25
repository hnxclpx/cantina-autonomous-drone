// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: server_control.proto

#ifndef PROTOBUF_server_5fcontrol_2eproto__INCLUDED
#define PROTOBUF_server_5fcontrol_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void GZ_MSGS_VISIBLE protobuf_AddDesc_server_5fcontrol_2eproto();
void protobuf_AssignDesc_server_5fcontrol_2eproto();
void protobuf_ShutdownFile_server_5fcontrol_2eproto();

class ServerControl;

// ===================================================================

class GZ_MSGS_VISIBLE ServerControl : public ::google::protobuf::Message {
 public:
  ServerControl();
  virtual ~ServerControl();

  ServerControl(const ServerControl& from);

  inline ServerControl& operator=(const ServerControl& from) {
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
  static const ServerControl& default_instance();

  void Swap(ServerControl* other);

  // implements Message ----------------------------------------------

  ServerControl* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ServerControl& from);
  void MergeFrom(const ServerControl& from);
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

  // optional string save_world_name = 1;
  inline bool has_save_world_name() const;
  inline void clear_save_world_name();
  static const int kSaveWorldNameFieldNumber = 1;
  inline const ::std::string& save_world_name() const;
  inline void set_save_world_name(const ::std::string& value);
  inline void set_save_world_name(const char* value);
  inline void set_save_world_name(const char* value, size_t size);
  inline ::std::string* mutable_save_world_name();
  inline ::std::string* release_save_world_name();
  inline void set_allocated_save_world_name(::std::string* save_world_name);

  // optional string save_filename = 2;
  inline bool has_save_filename() const;
  inline void clear_save_filename();
  static const int kSaveFilenameFieldNumber = 2;
  inline const ::std::string& save_filename() const;
  inline void set_save_filename(const ::std::string& value);
  inline void set_save_filename(const char* value);
  inline void set_save_filename(const char* value, size_t size);
  inline ::std::string* mutable_save_filename();
  inline ::std::string* release_save_filename();
  inline void set_allocated_save_filename(::std::string* save_filename);

  // optional string open_filename = 3;
  inline bool has_open_filename() const;
  inline void clear_open_filename();
  static const int kOpenFilenameFieldNumber = 3;
  inline const ::std::string& open_filename() const;
  inline void set_open_filename(const ::std::string& value);
  inline void set_open_filename(const char* value);
  inline void set_open_filename(const char* value, size_t size);
  inline ::std::string* mutable_open_filename();
  inline ::std::string* release_open_filename();
  inline void set_allocated_open_filename(::std::string* open_filename);

  // optional bool new_world = 4;
  inline bool has_new_world() const;
  inline void clear_new_world();
  static const int kNewWorldFieldNumber = 4;
  inline bool new_world() const;
  inline void set_new_world(bool value);

  // optional bool stop = 5;
  inline bool has_stop() const;
  inline void clear_stop();
  static const int kStopFieldNumber = 5;
  inline bool stop() const;
  inline void set_stop(bool value);

  // optional bool clone = 6;
  inline bool has_clone() const;
  inline void clear_clone();
  static const int kCloneFieldNumber = 6;
  inline bool clone() const;
  inline void set_clone(bool value);

  // optional uint32 new_port = 7;
  inline bool has_new_port() const;
  inline void clear_new_port();
  static const int kNewPortFieldNumber = 7;
  inline ::google::protobuf::uint32 new_port() const;
  inline void set_new_port(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.ServerControl)
 private:
  inline void set_has_save_world_name();
  inline void clear_has_save_world_name();
  inline void set_has_save_filename();
  inline void clear_has_save_filename();
  inline void set_has_open_filename();
  inline void clear_has_open_filename();
  inline void set_has_new_world();
  inline void clear_has_new_world();
  inline void set_has_stop();
  inline void clear_has_stop();
  inline void set_has_clone();
  inline void clear_has_clone();
  inline void set_has_new_port();
  inline void clear_has_new_port();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* save_world_name_;
  ::std::string* save_filename_;
  ::std::string* open_filename_;
  bool new_world_;
  bool stop_;
  bool clone_;
  ::google::protobuf::uint32 new_port_;
  friend void GZ_MSGS_VISIBLE protobuf_AddDesc_server_5fcontrol_2eproto();
  friend void protobuf_AssignDesc_server_5fcontrol_2eproto();
  friend void protobuf_ShutdownFile_server_5fcontrol_2eproto();

  void InitAsDefaultInstance();
  static ServerControl* default_instance_;
};
// ===================================================================


// ===================================================================

// ServerControl

// optional string save_world_name = 1;
inline bool ServerControl::has_save_world_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ServerControl::set_has_save_world_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ServerControl::clear_has_save_world_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ServerControl::clear_save_world_name() {
  if (save_world_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    save_world_name_->clear();
  }
  clear_has_save_world_name();
}
inline const ::std::string& ServerControl::save_world_name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.ServerControl.save_world_name)
  return *save_world_name_;
}
inline void ServerControl::set_save_world_name(const ::std::string& value) {
  set_has_save_world_name();
  if (save_world_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    save_world_name_ = new ::std::string;
  }
  save_world_name_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.ServerControl.save_world_name)
}
inline void ServerControl::set_save_world_name(const char* value) {
  set_has_save_world_name();
  if (save_world_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    save_world_name_ = new ::std::string;
  }
  save_world_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.ServerControl.save_world_name)
}
inline void ServerControl::set_save_world_name(const char* value, size_t size) {
  set_has_save_world_name();
  if (save_world_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    save_world_name_ = new ::std::string;
  }
  save_world_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.ServerControl.save_world_name)
}
inline ::std::string* ServerControl::mutable_save_world_name() {
  set_has_save_world_name();
  if (save_world_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    save_world_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.ServerControl.save_world_name)
  return save_world_name_;
}
inline ::std::string* ServerControl::release_save_world_name() {
  clear_has_save_world_name();
  if (save_world_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = save_world_name_;
    save_world_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ServerControl::set_allocated_save_world_name(::std::string* save_world_name) {
  if (save_world_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete save_world_name_;
  }
  if (save_world_name) {
    set_has_save_world_name();
    save_world_name_ = save_world_name;
  } else {
    clear_has_save_world_name();
    save_world_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.ServerControl.save_world_name)
}

// optional string save_filename = 2;
inline bool ServerControl::has_save_filename() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ServerControl::set_has_save_filename() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ServerControl::clear_has_save_filename() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ServerControl::clear_save_filename() {
  if (save_filename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    save_filename_->clear();
  }
  clear_has_save_filename();
}
inline const ::std::string& ServerControl::save_filename() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.ServerControl.save_filename)
  return *save_filename_;
}
inline void ServerControl::set_save_filename(const ::std::string& value) {
  set_has_save_filename();
  if (save_filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    save_filename_ = new ::std::string;
  }
  save_filename_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.ServerControl.save_filename)
}
inline void ServerControl::set_save_filename(const char* value) {
  set_has_save_filename();
  if (save_filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    save_filename_ = new ::std::string;
  }
  save_filename_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.ServerControl.save_filename)
}
inline void ServerControl::set_save_filename(const char* value, size_t size) {
  set_has_save_filename();
  if (save_filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    save_filename_ = new ::std::string;
  }
  save_filename_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.ServerControl.save_filename)
}
inline ::std::string* ServerControl::mutable_save_filename() {
  set_has_save_filename();
  if (save_filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    save_filename_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.ServerControl.save_filename)
  return save_filename_;
}
inline ::std::string* ServerControl::release_save_filename() {
  clear_has_save_filename();
  if (save_filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = save_filename_;
    save_filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ServerControl::set_allocated_save_filename(::std::string* save_filename) {
  if (save_filename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete save_filename_;
  }
  if (save_filename) {
    set_has_save_filename();
    save_filename_ = save_filename;
  } else {
    clear_has_save_filename();
    save_filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.ServerControl.save_filename)
}

// optional string open_filename = 3;
inline bool ServerControl::has_open_filename() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ServerControl::set_has_open_filename() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ServerControl::clear_has_open_filename() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ServerControl::clear_open_filename() {
  if (open_filename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    open_filename_->clear();
  }
  clear_has_open_filename();
}
inline const ::std::string& ServerControl::open_filename() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.ServerControl.open_filename)
  return *open_filename_;
}
inline void ServerControl::set_open_filename(const ::std::string& value) {
  set_has_open_filename();
  if (open_filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    open_filename_ = new ::std::string;
  }
  open_filename_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.ServerControl.open_filename)
}
inline void ServerControl::set_open_filename(const char* value) {
  set_has_open_filename();
  if (open_filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    open_filename_ = new ::std::string;
  }
  open_filename_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.ServerControl.open_filename)
}
inline void ServerControl::set_open_filename(const char* value, size_t size) {
  set_has_open_filename();
  if (open_filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    open_filename_ = new ::std::string;
  }
  open_filename_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.ServerControl.open_filename)
}
inline ::std::string* ServerControl::mutable_open_filename() {
  set_has_open_filename();
  if (open_filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    open_filename_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.ServerControl.open_filename)
  return open_filename_;
}
inline ::std::string* ServerControl::release_open_filename() {
  clear_has_open_filename();
  if (open_filename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = open_filename_;
    open_filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ServerControl::set_allocated_open_filename(::std::string* open_filename) {
  if (open_filename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete open_filename_;
  }
  if (open_filename) {
    set_has_open_filename();
    open_filename_ = open_filename;
  } else {
    clear_has_open_filename();
    open_filename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.ServerControl.open_filename)
}

// optional bool new_world = 4;
inline bool ServerControl::has_new_world() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ServerControl::set_has_new_world() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ServerControl::clear_has_new_world() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ServerControl::clear_new_world() {
  new_world_ = false;
  clear_has_new_world();
}
inline bool ServerControl::new_world() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.ServerControl.new_world)
  return new_world_;
}
inline void ServerControl::set_new_world(bool value) {
  set_has_new_world();
  new_world_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.ServerControl.new_world)
}

// optional bool stop = 5;
inline bool ServerControl::has_stop() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ServerControl::set_has_stop() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ServerControl::clear_has_stop() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ServerControl::clear_stop() {
  stop_ = false;
  clear_has_stop();
}
inline bool ServerControl::stop() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.ServerControl.stop)
  return stop_;
}
inline void ServerControl::set_stop(bool value) {
  set_has_stop();
  stop_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.ServerControl.stop)
}

// optional bool clone = 6;
inline bool ServerControl::has_clone() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ServerControl::set_has_clone() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ServerControl::clear_has_clone() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ServerControl::clear_clone() {
  clone_ = false;
  clear_has_clone();
}
inline bool ServerControl::clone() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.ServerControl.clone)
  return clone_;
}
inline void ServerControl::set_clone(bool value) {
  set_has_clone();
  clone_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.ServerControl.clone)
}

// optional uint32 new_port = 7;
inline bool ServerControl::has_new_port() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ServerControl::set_has_new_port() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ServerControl::clear_has_new_port() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ServerControl::clear_new_port() {
  new_port_ = 0u;
  clear_has_new_port();
}
inline ::google::protobuf::uint32 ServerControl::new_port() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.ServerControl.new_port)
  return new_port_;
}
inline void ServerControl::set_new_port(::google::protobuf::uint32 value) {
  set_has_new_port();
  new_port_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.ServerControl.new_port)
}


typedef boost::shared_ptr<gazebo::msgs::ServerControl> ServerControlPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::ServerControl const> ConstServerControlPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_server_5fcontrol_2eproto__INCLUDED
