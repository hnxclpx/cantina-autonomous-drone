// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: log_control.proto

#ifndef PROTOBUF_log_5fcontrol_2eproto__INCLUDED
#define PROTOBUF_log_5fcontrol_2eproto__INCLUDED

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
void GZ_MSGS_VISIBLE protobuf_AddDesc_log_5fcontrol_2eproto();
void protobuf_AssignDesc_log_5fcontrol_2eproto();
void protobuf_ShutdownFile_log_5fcontrol_2eproto();

class LogControl;

// ===================================================================

class GZ_MSGS_VISIBLE LogControl : public ::google::protobuf::Message {
 public:
  LogControl();
  virtual ~LogControl();

  LogControl(const LogControl& from);

  inline LogControl& operator=(const LogControl& from) {
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
  static const LogControl& default_instance();

  void Swap(LogControl* other);

  // implements Message ----------------------------------------------

  LogControl* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LogControl& from);
  void MergeFrom(const LogControl& from);
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

  // optional bool start = 1;
  inline bool has_start() const;
  inline void clear_start();
  static const int kStartFieldNumber = 1;
  inline bool start() const;
  inline void set_start(bool value);

  // optional bool stop = 2;
  inline bool has_stop() const;
  inline void clear_stop();
  static const int kStopFieldNumber = 2;
  inline bool stop() const;
  inline void set_stop(bool value);

  // optional bool paused = 3;
  inline bool has_paused() const;
  inline void clear_paused();
  static const int kPausedFieldNumber = 3;
  inline bool paused() const;
  inline void set_paused(bool value);

  // optional string base_path = 4;
  inline bool has_base_path() const;
  inline void clear_base_path();
  static const int kBasePathFieldNumber = 4;
  inline const ::std::string& base_path() const;
  inline void set_base_path(const ::std::string& value);
  inline void set_base_path(const char* value);
  inline void set_base_path(const char* value, size_t size);
  inline ::std::string* mutable_base_path();
  inline ::std::string* release_base_path();
  inline void set_allocated_base_path(::std::string* base_path);

  // optional string encoding = 5;
  inline bool has_encoding() const;
  inline void clear_encoding();
  static const int kEncodingFieldNumber = 5;
  inline const ::std::string& encoding() const;
  inline void set_encoding(const ::std::string& value);
  inline void set_encoding(const char* value);
  inline void set_encoding(const char* value, size_t size);
  inline ::std::string* mutable_encoding();
  inline ::std::string* release_encoding();
  inline void set_allocated_encoding(::std::string* encoding);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.LogControl)
 private:
  inline void set_has_start();
  inline void clear_has_start();
  inline void set_has_stop();
  inline void clear_has_stop();
  inline void set_has_paused();
  inline void clear_has_paused();
  inline void set_has_base_path();
  inline void clear_has_base_path();
  inline void set_has_encoding();
  inline void clear_has_encoding();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* base_path_;
  ::std::string* encoding_;
  bool start_;
  bool stop_;
  bool paused_;
  friend void GZ_MSGS_VISIBLE protobuf_AddDesc_log_5fcontrol_2eproto();
  friend void protobuf_AssignDesc_log_5fcontrol_2eproto();
  friend void protobuf_ShutdownFile_log_5fcontrol_2eproto();

  void InitAsDefaultInstance();
  static LogControl* default_instance_;
};
// ===================================================================


// ===================================================================

// LogControl

// optional bool start = 1;
inline bool LogControl::has_start() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LogControl::set_has_start() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LogControl::clear_has_start() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LogControl::clear_start() {
  start_ = false;
  clear_has_start();
}
inline bool LogControl::start() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogControl.start)
  return start_;
}
inline void LogControl::set_start(bool value) {
  set_has_start();
  start_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.LogControl.start)
}

// optional bool stop = 2;
inline bool LogControl::has_stop() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LogControl::set_has_stop() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LogControl::clear_has_stop() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LogControl::clear_stop() {
  stop_ = false;
  clear_has_stop();
}
inline bool LogControl::stop() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogControl.stop)
  return stop_;
}
inline void LogControl::set_stop(bool value) {
  set_has_stop();
  stop_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.LogControl.stop)
}

// optional bool paused = 3;
inline bool LogControl::has_paused() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LogControl::set_has_paused() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LogControl::clear_has_paused() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LogControl::clear_paused() {
  paused_ = false;
  clear_has_paused();
}
inline bool LogControl::paused() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogControl.paused)
  return paused_;
}
inline void LogControl::set_paused(bool value) {
  set_has_paused();
  paused_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.LogControl.paused)
}

// optional string base_path = 4;
inline bool LogControl::has_base_path() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LogControl::set_has_base_path() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LogControl::clear_has_base_path() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LogControl::clear_base_path() {
  if (base_path_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    base_path_->clear();
  }
  clear_has_base_path();
}
inline const ::std::string& LogControl::base_path() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogControl.base_path)
  return *base_path_;
}
inline void LogControl::set_base_path(const ::std::string& value) {
  set_has_base_path();
  if (base_path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    base_path_ = new ::std::string;
  }
  base_path_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LogControl.base_path)
}
inline void LogControl::set_base_path(const char* value) {
  set_has_base_path();
  if (base_path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    base_path_ = new ::std::string;
  }
  base_path_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.LogControl.base_path)
}
inline void LogControl::set_base_path(const char* value, size_t size) {
  set_has_base_path();
  if (base_path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    base_path_ = new ::std::string;
  }
  base_path_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.LogControl.base_path)
}
inline ::std::string* LogControl::mutable_base_path() {
  set_has_base_path();
  if (base_path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    base_path_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LogControl.base_path)
  return base_path_;
}
inline ::std::string* LogControl::release_base_path() {
  clear_has_base_path();
  if (base_path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = base_path_;
    base_path_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void LogControl::set_allocated_base_path(::std::string* base_path) {
  if (base_path_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete base_path_;
  }
  if (base_path) {
    set_has_base_path();
    base_path_ = base_path;
  } else {
    clear_has_base_path();
    base_path_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LogControl.base_path)
}

// optional string encoding = 5;
inline bool LogControl::has_encoding() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LogControl::set_has_encoding() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LogControl::clear_has_encoding() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LogControl::clear_encoding() {
  if (encoding_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    encoding_->clear();
  }
  clear_has_encoding();
}
inline const ::std::string& LogControl::encoding() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.LogControl.encoding)
  return *encoding_;
}
inline void LogControl::set_encoding(const ::std::string& value) {
  set_has_encoding();
  if (encoding_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    encoding_ = new ::std::string;
  }
  encoding_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.LogControl.encoding)
}
inline void LogControl::set_encoding(const char* value) {
  set_has_encoding();
  if (encoding_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    encoding_ = new ::std::string;
  }
  encoding_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.LogControl.encoding)
}
inline void LogControl::set_encoding(const char* value, size_t size) {
  set_has_encoding();
  if (encoding_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    encoding_ = new ::std::string;
  }
  encoding_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.LogControl.encoding)
}
inline ::std::string* LogControl::mutable_encoding() {
  set_has_encoding();
  if (encoding_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    encoding_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.LogControl.encoding)
  return encoding_;
}
inline ::std::string* LogControl::release_encoding() {
  clear_has_encoding();
  if (encoding_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = encoding_;
    encoding_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void LogControl::set_allocated_encoding(::std::string* encoding) {
  if (encoding_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete encoding_;
  }
  if (encoding) {
    set_has_encoding();
    encoding_ = encoding;
  } else {
    clear_has_encoding();
    encoding_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.LogControl.encoding)
}


typedef boost::shared_ptr<gazebo::msgs::LogControl> LogControlPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::LogControl const> ConstLogControlPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_log_5fcontrol_2eproto__INCLUDED