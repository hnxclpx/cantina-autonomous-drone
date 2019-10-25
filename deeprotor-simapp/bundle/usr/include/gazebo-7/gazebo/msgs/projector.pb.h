// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: projector.proto

#ifndef PROTOBUF_projector_2eproto__INCLUDED
#define PROTOBUF_projector_2eproto__INCLUDED

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
#include "pose.pb.h"
#pragma GCC system_header
#include <boost/shared_ptr.hpp>
#include <gazebo/util/system.hh>
#include "gazebo/msgs/MsgFactory.hh"
// @@protoc_insertion_point(includes)

namespace gazebo {
namespace msgs {

// Internal implementation detail -- do not call these.
void GZ_MSGS_VISIBLE protobuf_AddDesc_projector_2eproto();
void protobuf_AssignDesc_projector_2eproto();
void protobuf_ShutdownFile_projector_2eproto();

class Projector;

// ===================================================================

class GZ_MSGS_VISIBLE Projector : public ::google::protobuf::Message {
 public:
  Projector();
  virtual ~Projector();

  Projector(const Projector& from);

  inline Projector& operator=(const Projector& from) {
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
  static const Projector& default_instance();

  void Swap(Projector* other);

  // implements Message ----------------------------------------------

  Projector* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Projector& from);
  void MergeFrom(const Projector& from);
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

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional string texture = 2;
  inline bool has_texture() const;
  inline void clear_texture();
  static const int kTextureFieldNumber = 2;
  inline const ::std::string& texture() const;
  inline void set_texture(const ::std::string& value);
  inline void set_texture(const char* value);
  inline void set_texture(const char* value, size_t size);
  inline ::std::string* mutable_texture();
  inline ::std::string* release_texture();
  inline void set_allocated_texture(::std::string* texture);

  // optional .gazebo.msgs.Pose pose = 3;
  inline bool has_pose() const;
  inline void clear_pose();
  static const int kPoseFieldNumber = 3;
  inline const ::gazebo::msgs::Pose& pose() const;
  inline ::gazebo::msgs::Pose* mutable_pose();
  inline ::gazebo::msgs::Pose* release_pose();
  inline void set_allocated_pose(::gazebo::msgs::Pose* pose);

  // optional double fov = 4 [default = 0.785];
  inline bool has_fov() const;
  inline void clear_fov();
  static const int kFovFieldNumber = 4;
  inline double fov() const;
  inline void set_fov(double value);

  // optional double near_clip = 5 [default = 0.1];
  inline bool has_near_clip() const;
  inline void clear_near_clip();
  static const int kNearClipFieldNumber = 5;
  inline double near_clip() const;
  inline void set_near_clip(double value);

  // optional double far_clip = 6 [default = 10];
  inline bool has_far_clip() const;
  inline void clear_far_clip();
  static const int kFarClipFieldNumber = 6;
  inline double far_clip() const;
  inline void set_far_clip(double value);

  // optional bool enabled = 7 [default = true];
  inline bool has_enabled() const;
  inline void clear_enabled();
  static const int kEnabledFieldNumber = 7;
  inline bool enabled() const;
  inline void set_enabled(bool value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.Projector)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_texture();
  inline void clear_has_texture();
  inline void set_has_pose();
  inline void clear_has_pose();
  inline void set_has_fov();
  inline void clear_has_fov();
  inline void set_has_near_clip();
  inline void clear_has_near_clip();
  inline void set_has_far_clip();
  inline void clear_has_far_clip();
  inline void set_has_enabled();
  inline void clear_has_enabled();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::std::string* texture_;
  ::gazebo::msgs::Pose* pose_;
  double fov_;
  double near_clip_;
  double far_clip_;
  bool enabled_;
  friend void GZ_MSGS_VISIBLE protobuf_AddDesc_projector_2eproto();
  friend void protobuf_AssignDesc_projector_2eproto();
  friend void protobuf_ShutdownFile_projector_2eproto();

  void InitAsDefaultInstance();
  static Projector* default_instance_;
};
// ===================================================================


// ===================================================================

// Projector

// required string name = 1;
inline bool Projector::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Projector::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Projector::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Projector::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Projector::name() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Projector.name)
  return *name_;
}
inline void Projector::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Projector.name)
}
inline void Projector::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Projector.name)
}
inline void Projector::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Projector.name)
}
inline ::std::string* Projector::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Projector.name)
  return name_;
}
inline ::std::string* Projector::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Projector::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Projector.name)
}

// optional string texture = 2;
inline bool Projector::has_texture() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Projector::set_has_texture() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Projector::clear_has_texture() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Projector::clear_texture() {
  if (texture_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    texture_->clear();
  }
  clear_has_texture();
}
inline const ::std::string& Projector::texture() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Projector.texture)
  return *texture_;
}
inline void Projector::set_texture(const ::std::string& value) {
  set_has_texture();
  if (texture_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    texture_ = new ::std::string;
  }
  texture_->assign(value);
  // @@protoc_insertion_point(field_set:gazebo.msgs.Projector.texture)
}
inline void Projector::set_texture(const char* value) {
  set_has_texture();
  if (texture_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    texture_ = new ::std::string;
  }
  texture_->assign(value);
  // @@protoc_insertion_point(field_set_char:gazebo.msgs.Projector.texture)
}
inline void Projector::set_texture(const char* value, size_t size) {
  set_has_texture();
  if (texture_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    texture_ = new ::std::string;
  }
  texture_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:gazebo.msgs.Projector.texture)
}
inline ::std::string* Projector::mutable_texture() {
  set_has_texture();
  if (texture_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    texture_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Projector.texture)
  return texture_;
}
inline ::std::string* Projector::release_texture() {
  clear_has_texture();
  if (texture_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = texture_;
    texture_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Projector::set_allocated_texture(::std::string* texture) {
  if (texture_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete texture_;
  }
  if (texture) {
    set_has_texture();
    texture_ = texture;
  } else {
    clear_has_texture();
    texture_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Projector.texture)
}

// optional .gazebo.msgs.Pose pose = 3;
inline bool Projector::has_pose() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Projector::set_has_pose() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Projector::clear_has_pose() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Projector::clear_pose() {
  if (pose_ != NULL) pose_->::gazebo::msgs::Pose::Clear();
  clear_has_pose();
}
inline const ::gazebo::msgs::Pose& Projector::pose() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Projector.pose)
  return pose_ != NULL ? *pose_ : *default_instance_->pose_;
}
inline ::gazebo::msgs::Pose* Projector::mutable_pose() {
  set_has_pose();
  if (pose_ == NULL) pose_ = new ::gazebo::msgs::Pose;
  // @@protoc_insertion_point(field_mutable:gazebo.msgs.Projector.pose)
  return pose_;
}
inline ::gazebo::msgs::Pose* Projector::release_pose() {
  clear_has_pose();
  ::gazebo::msgs::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline void Projector::set_allocated_pose(::gazebo::msgs::Pose* pose) {
  delete pose_;
  pose_ = pose;
  if (pose) {
    set_has_pose();
  } else {
    clear_has_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:gazebo.msgs.Projector.pose)
}

// optional double fov = 4 [default = 0.785];
inline bool Projector::has_fov() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Projector::set_has_fov() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Projector::clear_has_fov() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Projector::clear_fov() {
  fov_ = 0.785;
  clear_has_fov();
}
inline double Projector::fov() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Projector.fov)
  return fov_;
}
inline void Projector::set_fov(double value) {
  set_has_fov();
  fov_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Projector.fov)
}

// optional double near_clip = 5 [default = 0.1];
inline bool Projector::has_near_clip() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Projector::set_has_near_clip() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Projector::clear_has_near_clip() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Projector::clear_near_clip() {
  near_clip_ = 0.1;
  clear_has_near_clip();
}
inline double Projector::near_clip() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Projector.near_clip)
  return near_clip_;
}
inline void Projector::set_near_clip(double value) {
  set_has_near_clip();
  near_clip_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Projector.near_clip)
}

// optional double far_clip = 6 [default = 10];
inline bool Projector::has_far_clip() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Projector::set_has_far_clip() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Projector::clear_has_far_clip() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Projector::clear_far_clip() {
  far_clip_ = 10;
  clear_has_far_clip();
}
inline double Projector::far_clip() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Projector.far_clip)
  return far_clip_;
}
inline void Projector::set_far_clip(double value) {
  set_has_far_clip();
  far_clip_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Projector.far_clip)
}

// optional bool enabled = 7 [default = true];
inline bool Projector::has_enabled() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Projector::set_has_enabled() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Projector::clear_has_enabled() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Projector::clear_enabled() {
  enabled_ = true;
  clear_has_enabled();
}
inline bool Projector::enabled() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.Projector.enabled)
  return enabled_;
}
inline void Projector::set_enabled(bool value) {
  set_has_enabled();
  enabled_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.Projector.enabled)
}


typedef boost::shared_ptr<gazebo::msgs::Projector> ProjectorPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::Projector const> ConstProjectorPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_projector_2eproto__INCLUDED
