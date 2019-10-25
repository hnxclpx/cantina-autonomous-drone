// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: world_reset.proto

#ifndef PROTOBUF_world_5freset_2eproto__INCLUDED
#define PROTOBUF_world_5freset_2eproto__INCLUDED

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
void GZ_MSGS_VISIBLE protobuf_AddDesc_world_5freset_2eproto();
void protobuf_AssignDesc_world_5freset_2eproto();
void protobuf_ShutdownFile_world_5freset_2eproto();

class WorldReset;

// ===================================================================

class GZ_MSGS_VISIBLE WorldReset : public ::google::protobuf::Message {
 public:
  WorldReset();
  virtual ~WorldReset();

  WorldReset(const WorldReset& from);

  inline WorldReset& operator=(const WorldReset& from) {
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
  static const WorldReset& default_instance();

  void Swap(WorldReset* other);

  // implements Message ----------------------------------------------

  WorldReset* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WorldReset& from);
  void MergeFrom(const WorldReset& from);
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

  // optional bool all = 1 [default = true];
  inline bool has_all() const;
  inline void clear_all();
  static const int kAllFieldNumber = 1;
  inline bool all() const;
  inline void set_all(bool value);

  // optional bool time_only = 2 [default = false];
  inline bool has_time_only() const;
  inline void clear_time_only();
  static const int kTimeOnlyFieldNumber = 2;
  inline bool time_only() const;
  inline void set_time_only(bool value);

  // optional bool model_only = 3 [default = false];
  inline bool has_model_only() const;
  inline void clear_model_only();
  static const int kModelOnlyFieldNumber = 3;
  inline bool model_only() const;
  inline void set_model_only(bool value);

  // @@protoc_insertion_point(class_scope:gazebo.msgs.WorldReset)
 private:
  inline void set_has_all();
  inline void clear_has_all();
  inline void set_has_time_only();
  inline void clear_has_time_only();
  inline void set_has_model_only();
  inline void clear_has_model_only();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  bool all_;
  bool time_only_;
  bool model_only_;
  friend void GZ_MSGS_VISIBLE protobuf_AddDesc_world_5freset_2eproto();
  friend void protobuf_AssignDesc_world_5freset_2eproto();
  friend void protobuf_ShutdownFile_world_5freset_2eproto();

  void InitAsDefaultInstance();
  static WorldReset* default_instance_;
};
// ===================================================================


// ===================================================================

// WorldReset

// optional bool all = 1 [default = true];
inline bool WorldReset::has_all() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WorldReset::set_has_all() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WorldReset::clear_has_all() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WorldReset::clear_all() {
  all_ = true;
  clear_has_all();
}
inline bool WorldReset::all() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.WorldReset.all)
  return all_;
}
inline void WorldReset::set_all(bool value) {
  set_has_all();
  all_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.WorldReset.all)
}

// optional bool time_only = 2 [default = false];
inline bool WorldReset::has_time_only() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WorldReset::set_has_time_only() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WorldReset::clear_has_time_only() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WorldReset::clear_time_only() {
  time_only_ = false;
  clear_has_time_only();
}
inline bool WorldReset::time_only() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.WorldReset.time_only)
  return time_only_;
}
inline void WorldReset::set_time_only(bool value) {
  set_has_time_only();
  time_only_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.WorldReset.time_only)
}

// optional bool model_only = 3 [default = false];
inline bool WorldReset::has_model_only() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WorldReset::set_has_model_only() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WorldReset::clear_has_model_only() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WorldReset::clear_model_only() {
  model_only_ = false;
  clear_has_model_only();
}
inline bool WorldReset::model_only() const {
  // @@protoc_insertion_point(field_get:gazebo.msgs.WorldReset.model_only)
  return model_only_;
}
inline void WorldReset::set_model_only(bool value) {
  set_has_model_only();
  model_only_ = value;
  // @@protoc_insertion_point(field_set:gazebo.msgs.WorldReset.model_only)
}


typedef boost::shared_ptr<gazebo::msgs::WorldReset> WorldResetPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gazebo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

typedef const boost::shared_ptr<gazebo::msgs::WorldReset const> ConstWorldResetPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_world_5freset_2eproto__INCLUDED
