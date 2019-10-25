# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: tensorflow/contrib/tensorboard/plugins/projector/projector_config.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='tensorflow/contrib/tensorboard/plugins/projector/projector_config.proto',
  package='tensorflow',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\nGtensorflow/contrib/tensorboard/plugins/projector/projector_config.proto\x12\ntensorflow\">\n\x0eSpriteMetadata\x12\x12\n\nimage_path\x18\x01 \x01(\t\x12\x18\n\x10single_image_dim\x18\x02 \x03(\r\"\xaa\x01\n\rEmbeddingInfo\x12\x13\n\x0btensor_name\x18\x01 \x01(\t\x12\x15\n\rmetadata_path\x18\x02 \x01(\t\x12\x16\n\x0e\x62ookmarks_path\x18\x03 \x01(\t\x12\x14\n\x0ctensor_shape\x18\x04 \x03(\r\x12*\n\x06sprite\x18\x05 \x01(\x0b\x32\x1a.tensorflow.SpriteMetadata\x12\x13\n\x0btensor_path\x18\x06 \x01(\t\"}\n\x0fProjectorConfig\x12\x1d\n\x15model_checkpoint_path\x18\x01 \x01(\t\x12-\n\nembeddings\x18\x02 \x03(\x0b\x32\x19.tensorflow.EmbeddingInfo\x12\x1c\n\x14model_checkpoint_dir\x18\x03 \x01(\tb\x06proto3')
)




_SPRITEMETADATA = _descriptor.Descriptor(
  name='SpriteMetadata',
  full_name='tensorflow.SpriteMetadata',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='image_path', full_name='tensorflow.SpriteMetadata.image_path', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='single_image_dim', full_name='tensorflow.SpriteMetadata.single_image_dim', index=1,
      number=2, type=13, cpp_type=3, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=87,
  serialized_end=149,
)


_EMBEDDINGINFO = _descriptor.Descriptor(
  name='EmbeddingInfo',
  full_name='tensorflow.EmbeddingInfo',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='tensor_name', full_name='tensorflow.EmbeddingInfo.tensor_name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='metadata_path', full_name='tensorflow.EmbeddingInfo.metadata_path', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='bookmarks_path', full_name='tensorflow.EmbeddingInfo.bookmarks_path', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='tensor_shape', full_name='tensorflow.EmbeddingInfo.tensor_shape', index=3,
      number=4, type=13, cpp_type=3, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sprite', full_name='tensorflow.EmbeddingInfo.sprite', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='tensor_path', full_name='tensorflow.EmbeddingInfo.tensor_path', index=5,
      number=6, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=152,
  serialized_end=322,
)


_PROJECTORCONFIG = _descriptor.Descriptor(
  name='ProjectorConfig',
  full_name='tensorflow.ProjectorConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='model_checkpoint_path', full_name='tensorflow.ProjectorConfig.model_checkpoint_path', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='embeddings', full_name='tensorflow.ProjectorConfig.embeddings', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='model_checkpoint_dir', full_name='tensorflow.ProjectorConfig.model_checkpoint_dir', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=324,
  serialized_end=449,
)

_EMBEDDINGINFO.fields_by_name['sprite'].message_type = _SPRITEMETADATA
_PROJECTORCONFIG.fields_by_name['embeddings'].message_type = _EMBEDDINGINFO
DESCRIPTOR.message_types_by_name['SpriteMetadata'] = _SPRITEMETADATA
DESCRIPTOR.message_types_by_name['EmbeddingInfo'] = _EMBEDDINGINFO
DESCRIPTOR.message_types_by_name['ProjectorConfig'] = _PROJECTORCONFIG
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

SpriteMetadata = _reflection.GeneratedProtocolMessageType('SpriteMetadata', (_message.Message,), dict(
  DESCRIPTOR = _SPRITEMETADATA,
  __module__ = 'tensorflow.contrib.tensorboard.plugins.projector.projector_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.SpriteMetadata)
  ))
_sym_db.RegisterMessage(SpriteMetadata)

EmbeddingInfo = _reflection.GeneratedProtocolMessageType('EmbeddingInfo', (_message.Message,), dict(
  DESCRIPTOR = _EMBEDDINGINFO,
  __module__ = 'tensorflow.contrib.tensorboard.plugins.projector.projector_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.EmbeddingInfo)
  ))
_sym_db.RegisterMessage(EmbeddingInfo)

ProjectorConfig = _reflection.GeneratedProtocolMessageType('ProjectorConfig', (_message.Message,), dict(
  DESCRIPTOR = _PROJECTORCONFIG,
  __module__ = 'tensorflow.contrib.tensorboard.plugins.projector.projector_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.ProjectorConfig)
  ))
_sym_db.RegisterMessage(ProjectorConfig)


# @@protoc_insertion_point(module_scope)
