# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: tensorflow/core/protobuf/rewriter_config.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from tensorflow.core.framework import attr_value_pb2 as tensorflow_dot_core_dot_framework_dot_attr__value__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='tensorflow/core/protobuf/rewriter_config.proto',
  package='tensorflow',
  syntax='proto3',
  serialized_options=_b('\n\030org.tensorflow.frameworkB\024RewriterConfigProtosP\001Z<github.com/tensorflow/tensorflow/tensorflow/go/core/protobuf\370\001\001'),
  serialized_pb=_b('\n.tensorflow/core/protobuf/rewriter_config.proto\x12\ntensorflow\x1a*tensorflow/core/framework/attr_value.proto\";\n\x13\x41utoParallelOptions\x12\x0e\n\x06\x65nable\x18\x01 \x01(\x08\x12\x14\n\x0cnum_replicas\x18\x02 \x01(\x05\"+\n\x16ScopedAllocatorOptions\x12\x11\n\tenable_op\x18\x01 \x03(\t\"\xcb\x0c\n\x0eRewriterConfig\x12;\n\x10layout_optimizer\x18\x01 \x01(\x0e\x32!.tensorflow.RewriterConfig.Toggle\x12;\n\x10\x63onstant_folding\x18\x03 \x01(\x0e\x32!.tensorflow.RewriterConfig.Toggle\x12=\n\x12shape_optimization\x18\r \x01(\x0e\x32!.tensorflow.RewriterConfig.Toggle\x12\x34\n\tremapping\x18\x0e \x01(\x0e\x32!.tensorflow.RewriterConfig.Toggle\x12\x42\n\x17\x61rithmetic_optimization\x18\x07 \x01(\x0e\x32!.tensorflow.RewriterConfig.Toggle\x12\x42\n\x17\x64\x65pendency_optimization\x18\x08 \x01(\x0e\x32!.tensorflow.RewriterConfig.Toggle\x12<\n\x11loop_optimization\x18\t \x01(\x0e\x32!.tensorflow.RewriterConfig.Toggle\x12@\n\x15\x66unction_optimization\x18\n \x01(\x0e\x32!.tensorflow.RewriterConfig.Toggle\x12\x39\n\x0e\x64\x65\x62ug_stripper\x18\x0b \x01(\x0e\x32!.tensorflow.RewriterConfig.Toggle\x12\x1d\n\x15\x64isable_model_pruning\x18\x02 \x01(\x08\x12H\n\x1dscoped_allocator_optimization\x18\x0f \x01(\x0e\x32!.tensorflow.RewriterConfig.Toggle\x12O\n\x19meta_optimizer_iterations\x18\x0c \x01(\x0e\x32,.tensorflow.RewriterConfig.NumIterationsType\x12\x17\n\x0fmin_graph_nodes\x18\x11 \x01(\x05\x12\x42\n\x13memory_optimization\x18\x04 \x01(\x0e\x32%.tensorflow.RewriterConfig.MemOptType\x12/\n\'memory_optimizer_target_node_name_scope\x18\x06 \x01(\t\x12\x36\n\rauto_parallel\x18\x05 \x01(\x0b\x32\x1f.tensorflow.AutoParallelOptions\x12\x41\n\x15scoped_allocator_opts\x18\x10 \x01(\x0b\x32\".tensorflow.ScopedAllocatorOptions\x12\x12\n\noptimizers\x18\x64 \x03(\t\x12K\n\x11\x63ustom_optimizers\x18\xc8\x01 \x03(\x0b\x32/.tensorflow.RewriterConfig.CustomGraphOptimizer\x1a\xca\x01\n\x14\x43ustomGraphOptimizer\x12\x0c\n\x04name\x18\x01 \x01(\t\x12X\n\rparameter_map\x18\x02 \x03(\x0b\x32\x41.tensorflow.RewriterConfig.CustomGraphOptimizer.ParameterMapEntry\x1aJ\n\x11ParameterMapEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12$\n\x05value\x18\x02 \x01(\x0b\x32\x15.tensorflow.AttrValue:\x02\x38\x01\"6\n\x06Toggle\x12\x0b\n\x07\x44\x45\x46\x41ULT\x10\x00\x12\x06\n\x02ON\x10\x01\x12\x07\n\x03OFF\x10\x02\x12\x0e\n\nAGGRESSIVE\x10\x03\"<\n\x11NumIterationsType\x12\x15\n\x11\x44\x45\x46\x41ULT_NUM_ITERS\x10\x00\x12\x07\n\x03ONE\x10\x01\x12\x07\n\x03TWO\x10\x02\"\x9f\x01\n\nMemOptType\x12\x13\n\x0f\x44\x45\x46\x41ULT_MEM_OPT\x10\x00\x12\x0e\n\nNO_MEM_OPT\x10\x01\x12\n\n\x06MANUAL\x10\x02\x12\x17\n\x13SWAPPING_HEURISTICS\x10\x04\x12\x1c\n\x18RECOMPUTATION_HEURISTICS\x10\x05\x12\x19\n\x15SCHEDULING_HEURISTICS\x10\x06\x12\x0e\n\nHEURISTICS\x10\x03\x42s\n\x18org.tensorflow.frameworkB\x14RewriterConfigProtosP\x01Z<github.com/tensorflow/tensorflow/tensorflow/go/core/protobuf\xf8\x01\x01\x62\x06proto3')
  ,
  dependencies=[tensorflow_dot_core_dot_framework_dot_attr__value__pb2.DESCRIPTOR,])



_REWRITERCONFIG_TOGGLE = _descriptor.EnumDescriptor(
  name='Toggle',
  full_name='tensorflow.RewriterConfig.Toggle',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='DEFAULT', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ON', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='OFF', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='AGGRESSIVE', index=3, number=3,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1546,
  serialized_end=1600,
)
_sym_db.RegisterEnumDescriptor(_REWRITERCONFIG_TOGGLE)

_REWRITERCONFIG_NUMITERATIONSTYPE = _descriptor.EnumDescriptor(
  name='NumIterationsType',
  full_name='tensorflow.RewriterConfig.NumIterationsType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='DEFAULT_NUM_ITERS', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ONE', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TWO', index=2, number=2,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1602,
  serialized_end=1662,
)
_sym_db.RegisterEnumDescriptor(_REWRITERCONFIG_NUMITERATIONSTYPE)

_REWRITERCONFIG_MEMOPTTYPE = _descriptor.EnumDescriptor(
  name='MemOptType',
  full_name='tensorflow.RewriterConfig.MemOptType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='DEFAULT_MEM_OPT', index=0, number=0,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='NO_MEM_OPT', index=1, number=1,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='MANUAL', index=2, number=2,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SWAPPING_HEURISTICS', index=3, number=4,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='RECOMPUTATION_HEURISTICS', index=4, number=5,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SCHEDULING_HEURISTICS', index=5, number=6,
      serialized_options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='HEURISTICS', index=6, number=3,
      serialized_options=None,
      type=None),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=1665,
  serialized_end=1824,
)
_sym_db.RegisterEnumDescriptor(_REWRITERCONFIG_MEMOPTTYPE)


_AUTOPARALLELOPTIONS = _descriptor.Descriptor(
  name='AutoParallelOptions',
  full_name='tensorflow.AutoParallelOptions',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='enable', full_name='tensorflow.AutoParallelOptions.enable', index=0,
      number=1, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='num_replicas', full_name='tensorflow.AutoParallelOptions.num_replicas', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=106,
  serialized_end=165,
)


_SCOPEDALLOCATOROPTIONS = _descriptor.Descriptor(
  name='ScopedAllocatorOptions',
  full_name='tensorflow.ScopedAllocatorOptions',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='enable_op', full_name='tensorflow.ScopedAllocatorOptions.enable_op', index=0,
      number=1, type=9, cpp_type=9, label=3,
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
  serialized_start=167,
  serialized_end=210,
)


_REWRITERCONFIG_CUSTOMGRAPHOPTIMIZER_PARAMETERMAPENTRY = _descriptor.Descriptor(
  name='ParameterMapEntry',
  full_name='tensorflow.RewriterConfig.CustomGraphOptimizer.ParameterMapEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='tensorflow.RewriterConfig.CustomGraphOptimizer.ParameterMapEntry.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='value', full_name='tensorflow.RewriterConfig.CustomGraphOptimizer.ParameterMapEntry.value', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=_b('8\001'),
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1470,
  serialized_end=1544,
)

_REWRITERCONFIG_CUSTOMGRAPHOPTIMIZER = _descriptor.Descriptor(
  name='CustomGraphOptimizer',
  full_name='tensorflow.RewriterConfig.CustomGraphOptimizer',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='tensorflow.RewriterConfig.CustomGraphOptimizer.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='parameter_map', full_name='tensorflow.RewriterConfig.CustomGraphOptimizer.parameter_map', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[_REWRITERCONFIG_CUSTOMGRAPHOPTIMIZER_PARAMETERMAPENTRY, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=1342,
  serialized_end=1544,
)

_REWRITERCONFIG = _descriptor.Descriptor(
  name='RewriterConfig',
  full_name='tensorflow.RewriterConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='layout_optimizer', full_name='tensorflow.RewriterConfig.layout_optimizer', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='constant_folding', full_name='tensorflow.RewriterConfig.constant_folding', index=1,
      number=3, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='shape_optimization', full_name='tensorflow.RewriterConfig.shape_optimization', index=2,
      number=13, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='remapping', full_name='tensorflow.RewriterConfig.remapping', index=3,
      number=14, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='arithmetic_optimization', full_name='tensorflow.RewriterConfig.arithmetic_optimization', index=4,
      number=7, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='dependency_optimization', full_name='tensorflow.RewriterConfig.dependency_optimization', index=5,
      number=8, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='loop_optimization', full_name='tensorflow.RewriterConfig.loop_optimization', index=6,
      number=9, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='function_optimization', full_name='tensorflow.RewriterConfig.function_optimization', index=7,
      number=10, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='debug_stripper', full_name='tensorflow.RewriterConfig.debug_stripper', index=8,
      number=11, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='disable_model_pruning', full_name='tensorflow.RewriterConfig.disable_model_pruning', index=9,
      number=2, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='scoped_allocator_optimization', full_name='tensorflow.RewriterConfig.scoped_allocator_optimization', index=10,
      number=15, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='meta_optimizer_iterations', full_name='tensorflow.RewriterConfig.meta_optimizer_iterations', index=11,
      number=12, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='min_graph_nodes', full_name='tensorflow.RewriterConfig.min_graph_nodes', index=12,
      number=17, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='memory_optimization', full_name='tensorflow.RewriterConfig.memory_optimization', index=13,
      number=4, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='memory_optimizer_target_node_name_scope', full_name='tensorflow.RewriterConfig.memory_optimizer_target_node_name_scope', index=14,
      number=6, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='auto_parallel', full_name='tensorflow.RewriterConfig.auto_parallel', index=15,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='scoped_allocator_opts', full_name='tensorflow.RewriterConfig.scoped_allocator_opts', index=16,
      number=16, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='optimizers', full_name='tensorflow.RewriterConfig.optimizers', index=17,
      number=100, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='custom_optimizers', full_name='tensorflow.RewriterConfig.custom_optimizers', index=18,
      number=200, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[_REWRITERCONFIG_CUSTOMGRAPHOPTIMIZER, ],
  enum_types=[
    _REWRITERCONFIG_TOGGLE,
    _REWRITERCONFIG_NUMITERATIONSTYPE,
    _REWRITERCONFIG_MEMOPTTYPE,
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=213,
  serialized_end=1824,
)

_REWRITERCONFIG_CUSTOMGRAPHOPTIMIZER_PARAMETERMAPENTRY.fields_by_name['value'].message_type = tensorflow_dot_core_dot_framework_dot_attr__value__pb2._ATTRVALUE
_REWRITERCONFIG_CUSTOMGRAPHOPTIMIZER_PARAMETERMAPENTRY.containing_type = _REWRITERCONFIG_CUSTOMGRAPHOPTIMIZER
_REWRITERCONFIG_CUSTOMGRAPHOPTIMIZER.fields_by_name['parameter_map'].message_type = _REWRITERCONFIG_CUSTOMGRAPHOPTIMIZER_PARAMETERMAPENTRY
_REWRITERCONFIG_CUSTOMGRAPHOPTIMIZER.containing_type = _REWRITERCONFIG
_REWRITERCONFIG.fields_by_name['layout_optimizer'].enum_type = _REWRITERCONFIG_TOGGLE
_REWRITERCONFIG.fields_by_name['constant_folding'].enum_type = _REWRITERCONFIG_TOGGLE
_REWRITERCONFIG.fields_by_name['shape_optimization'].enum_type = _REWRITERCONFIG_TOGGLE
_REWRITERCONFIG.fields_by_name['remapping'].enum_type = _REWRITERCONFIG_TOGGLE
_REWRITERCONFIG.fields_by_name['arithmetic_optimization'].enum_type = _REWRITERCONFIG_TOGGLE
_REWRITERCONFIG.fields_by_name['dependency_optimization'].enum_type = _REWRITERCONFIG_TOGGLE
_REWRITERCONFIG.fields_by_name['loop_optimization'].enum_type = _REWRITERCONFIG_TOGGLE
_REWRITERCONFIG.fields_by_name['function_optimization'].enum_type = _REWRITERCONFIG_TOGGLE
_REWRITERCONFIG.fields_by_name['debug_stripper'].enum_type = _REWRITERCONFIG_TOGGLE
_REWRITERCONFIG.fields_by_name['scoped_allocator_optimization'].enum_type = _REWRITERCONFIG_TOGGLE
_REWRITERCONFIG.fields_by_name['meta_optimizer_iterations'].enum_type = _REWRITERCONFIG_NUMITERATIONSTYPE
_REWRITERCONFIG.fields_by_name['memory_optimization'].enum_type = _REWRITERCONFIG_MEMOPTTYPE
_REWRITERCONFIG.fields_by_name['auto_parallel'].message_type = _AUTOPARALLELOPTIONS
_REWRITERCONFIG.fields_by_name['scoped_allocator_opts'].message_type = _SCOPEDALLOCATOROPTIONS
_REWRITERCONFIG.fields_by_name['custom_optimizers'].message_type = _REWRITERCONFIG_CUSTOMGRAPHOPTIMIZER
_REWRITERCONFIG_TOGGLE.containing_type = _REWRITERCONFIG
_REWRITERCONFIG_NUMITERATIONSTYPE.containing_type = _REWRITERCONFIG
_REWRITERCONFIG_MEMOPTTYPE.containing_type = _REWRITERCONFIG
DESCRIPTOR.message_types_by_name['AutoParallelOptions'] = _AUTOPARALLELOPTIONS
DESCRIPTOR.message_types_by_name['ScopedAllocatorOptions'] = _SCOPEDALLOCATOROPTIONS
DESCRIPTOR.message_types_by_name['RewriterConfig'] = _REWRITERCONFIG
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

AutoParallelOptions = _reflection.GeneratedProtocolMessageType('AutoParallelOptions', (_message.Message,), dict(
  DESCRIPTOR = _AUTOPARALLELOPTIONS,
  __module__ = 'tensorflow.core.protobuf.rewriter_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.AutoParallelOptions)
  ))
_sym_db.RegisterMessage(AutoParallelOptions)

ScopedAllocatorOptions = _reflection.GeneratedProtocolMessageType('ScopedAllocatorOptions', (_message.Message,), dict(
  DESCRIPTOR = _SCOPEDALLOCATOROPTIONS,
  __module__ = 'tensorflow.core.protobuf.rewriter_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.ScopedAllocatorOptions)
  ))
_sym_db.RegisterMessage(ScopedAllocatorOptions)

RewriterConfig = _reflection.GeneratedProtocolMessageType('RewriterConfig', (_message.Message,), dict(

  CustomGraphOptimizer = _reflection.GeneratedProtocolMessageType('CustomGraphOptimizer', (_message.Message,), dict(

    ParameterMapEntry = _reflection.GeneratedProtocolMessageType('ParameterMapEntry', (_message.Message,), dict(
      DESCRIPTOR = _REWRITERCONFIG_CUSTOMGRAPHOPTIMIZER_PARAMETERMAPENTRY,
      __module__ = 'tensorflow.core.protobuf.rewriter_config_pb2'
      # @@protoc_insertion_point(class_scope:tensorflow.RewriterConfig.CustomGraphOptimizer.ParameterMapEntry)
      ))
    ,
    DESCRIPTOR = _REWRITERCONFIG_CUSTOMGRAPHOPTIMIZER,
    __module__ = 'tensorflow.core.protobuf.rewriter_config_pb2'
    # @@protoc_insertion_point(class_scope:tensorflow.RewriterConfig.CustomGraphOptimizer)
    ))
  ,
  DESCRIPTOR = _REWRITERCONFIG,
  __module__ = 'tensorflow.core.protobuf.rewriter_config_pb2'
  # @@protoc_insertion_point(class_scope:tensorflow.RewriterConfig)
  ))
_sym_db.RegisterMessage(RewriterConfig)
_sym_db.RegisterMessage(RewriterConfig.CustomGraphOptimizer)
_sym_db.RegisterMessage(RewriterConfig.CustomGraphOptimizer.ParameterMapEntry)


DESCRIPTOR._options = None
_REWRITERCONFIG_CUSTOMGRAPHOPTIMIZER_PARAMETERMAPENTRY._options = None
# @@protoc_insertion_point(module_scope)
