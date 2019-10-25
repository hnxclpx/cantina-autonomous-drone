// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: propagation_particle.proto

#ifndef PROTOBUF_propagation_5fparticle_2eproto__INCLUDED
#define PROTOBUF_propagation_5fparticle_2eproto__INCLUDED

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
void GZ_MSGS_VISIBLE protobuf_AddDesc_propagation_5fparticle_2eproto();
void protobuf_AssignDesc_propagation_5fparticle_2eproto();
void protobuf_ShutdownFile_propagation_5fparticle_2eproto();

class PropagationParticle;

// ===================================================================

class GZ_MSGS_VISIBLE PropagationParticle : public ::google::protobuf::Message {
 public:
  PropagationParticle();
  virtual ~PropagationParticle();

  PropagationParticle(const PropagationParticle& from);

  inline PropagationParticle& operator=(const PropagationParticle& from) {
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
  static const PropagationParticle& default_instance();

  void Swap(PropagationParticle* other);

  // implements Message ----------------------------------------------

  PropagationParticle* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PropagationParticle& from);
  void MergeFrom(const PropagationParticle& from);
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

  // required double x = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline double x() const;
  inline void set_x(double value);

  // required double y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline double y() const;
  inline void set_y(double value);

  // required double signal_level = 3;
  inline bool has_signal_level() const;
  inline void clear_signal_level();
  static const int kSignalLevelFieldNumber = 3;
  inline double signal_level() const;
  inline void set_signal_level(double value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.PropagationParticle)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_signal_level();
  inline void clear_has_signal_level();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double x_;
  double y_;
  double signal_level_;
  friend void GZ_MSGS_VISIBLE protobuf_AddDesc_propagation_5fparticle_2eproto();
  friend void protobuf_AssignDesc_propagation_5fparticle_2eproto();
  friend void protobuf_ShutdownFile_propagation_5fparticle_2eproto();

  void InitAsDefaultInstance();
  static PropagationParticle* default_instance_;
};
// ===================================================================


// ===================================================================

// PropagationParticle

// required double x = 1;
inline bool PropagationParticle::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PropagationParticle::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PropagationParticle::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PropagationParticle::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline double PropagationParticle::x() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PropagationParticle.x)
  return x_;
}
inline void PropagationParticle::set_x(double value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.PropagationParticle.x)
}

// required double y = 2;
inline bool PropagationParticle::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PropagationParticle::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PropagationParticle::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PropagationParticle::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline double PropagationParticle::y() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PropagationParticle.y)
  return y_;
}
inline void PropagationParticle::set_y(double value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.PropagationParticle.y)
}

// required double signal_level = 3;
inline bool PropagationParticle::has_signal_level() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PropagationParticle::set_has_signal_level() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PropagationParticle::clear_has_signal_level() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PropagationParticle::clear_signal_level() {
  signal_level_ = 0;
  clear_has_signal_level();
}
inline double PropagationParticle::signal_level() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.PropagationParticle.signal_level)
  return signal_level_;
}
inline void PropagationParticle::set_signal_level(double value) {
  set_has_signal_level();
  signal_level_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.PropagationParticle.signal_level)
}


typedef boost::shared_ptr<gazebo::msgs::PropagationParticle> PropagationParticlePtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::PropagationParticle const> ConstPropagationParticlePtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_propagation_5fparticle_2eproto__INCLUDED
