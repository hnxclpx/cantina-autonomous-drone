# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dynamic_reconfigure/ReconfigureRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import dynamic_reconfigure.msg

class ReconfigureRequest(genpy.Message):
  _md5sum = "ac41a77620a4a0348b7001641796a8a1"
  _type = "dynamic_reconfigure/ReconfigureRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """Config config

================================================================================
MSG: dynamic_reconfigure/Config
BoolParameter[] bools
IntParameter[] ints
StrParameter[] strs
DoubleParameter[] doubles
GroupState[] groups

================================================================================
MSG: dynamic_reconfigure/BoolParameter
string name
bool value

================================================================================
MSG: dynamic_reconfigure/IntParameter
string name
int32 value

================================================================================
MSG: dynamic_reconfigure/StrParameter
string name
string value

================================================================================
MSG: dynamic_reconfigure/DoubleParameter
string name
float64 value

================================================================================
MSG: dynamic_reconfigure/GroupState
string name
bool state
int32 id
int32 parent
"""
  __slots__ = ['config']
  _slot_types = ['dynamic_reconfigure/Config']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       config

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ReconfigureRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.config is None:
        self.config = dynamic_reconfigure.msg.Config()
    else:
      self.config = dynamic_reconfigure.msg.Config()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.config.bools)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.bools:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_B().pack(val1.value))
      length = len(self.config.ints)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.ints:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_i().pack(val1.value))
      length = len(self.config.strs)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.strs:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.value
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.config.doubles)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.doubles:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_d().pack(val1.value))
      length = len(self.config.groups)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.groups:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_B2i().pack(_x.state, _x.id, _x.parent))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.config is None:
        self.config = dynamic_reconfigure.msg.Config()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.bools = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.BoolParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 1
        (val1.value,) = _get_struct_B().unpack(str[start:end])
        val1.value = bool(val1.value)
        self.config.bools.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.ints = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.IntParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (val1.value,) = _get_struct_i().unpack(str[start:end])
        self.config.ints.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.strs = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.StrParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.value = str[start:end].decode('utf-8')
        else:
          val1.value = str[start:end]
        self.config.strs.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.doubles = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.DoubleParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 8
        (val1.value,) = _get_struct_d().unpack(str[start:end])
        self.config.doubles.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.groups = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.GroupState()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 9
        (_x.state, _x.id, _x.parent,) = _get_struct_B2i().unpack(str[start:end])
        val1.state = bool(val1.state)
        self.config.groups.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.config.bools)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.bools:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_B().pack(val1.value))
      length = len(self.config.ints)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.ints:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_i().pack(val1.value))
      length = len(self.config.strs)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.strs:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.value
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.config.doubles)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.doubles:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_d().pack(val1.value))
      length = len(self.config.groups)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.groups:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_B2i().pack(_x.state, _x.id, _x.parent))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.config is None:
        self.config = dynamic_reconfigure.msg.Config()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.bools = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.BoolParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 1
        (val1.value,) = _get_struct_B().unpack(str[start:end])
        val1.value = bool(val1.value)
        self.config.bools.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.ints = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.IntParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (val1.value,) = _get_struct_i().unpack(str[start:end])
        self.config.ints.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.strs = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.StrParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.value = str[start:end].decode('utf-8')
        else:
          val1.value = str[start:end]
        self.config.strs.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.doubles = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.DoubleParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 8
        (val1.value,) = _get_struct_d().unpack(str[start:end])
        self.config.doubles.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.groups = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.GroupState()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 9
        (_x.state, _x.id, _x.parent,) = _get_struct_B2i().unpack(str[start:end])
        val1.state = bool(val1.state)
        self.config.groups.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_d = None
def _get_struct_d():
    global _struct_d
    if _struct_d is None:
        _struct_d = struct.Struct("<d")
    return _struct_d
_struct_B2i = None
def _get_struct_B2i():
    global _struct_B2i
    if _struct_B2i is None:
        _struct_B2i = struct.Struct("<B2i")
    return _struct_B2i
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dynamic_reconfigure/ReconfigureResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import dynamic_reconfigure.msg

class ReconfigureResponse(genpy.Message):
  _md5sum = "ac41a77620a4a0348b7001641796a8a1"
  _type = "dynamic_reconfigure/ReconfigureResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """Config config


================================================================================
MSG: dynamic_reconfigure/Config
BoolParameter[] bools
IntParameter[] ints
StrParameter[] strs
DoubleParameter[] doubles
GroupState[] groups

================================================================================
MSG: dynamic_reconfigure/BoolParameter
string name
bool value

================================================================================
MSG: dynamic_reconfigure/IntParameter
string name
int32 value

================================================================================
MSG: dynamic_reconfigure/StrParameter
string name
string value

================================================================================
MSG: dynamic_reconfigure/DoubleParameter
string name
float64 value

================================================================================
MSG: dynamic_reconfigure/GroupState
string name
bool state
int32 id
int32 parent
"""
  __slots__ = ['config']
  _slot_types = ['dynamic_reconfigure/Config']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       config

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ReconfigureResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.config is None:
        self.config = dynamic_reconfigure.msg.Config()
    else:
      self.config = dynamic_reconfigure.msg.Config()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.config.bools)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.bools:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_B().pack(val1.value))
      length = len(self.config.ints)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.ints:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_i().pack(val1.value))
      length = len(self.config.strs)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.strs:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.value
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.config.doubles)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.doubles:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_d().pack(val1.value))
      length = len(self.config.groups)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.groups:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_B2i().pack(_x.state, _x.id, _x.parent))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.config is None:
        self.config = dynamic_reconfigure.msg.Config()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.bools = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.BoolParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 1
        (val1.value,) = _get_struct_B().unpack(str[start:end])
        val1.value = bool(val1.value)
        self.config.bools.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.ints = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.IntParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (val1.value,) = _get_struct_i().unpack(str[start:end])
        self.config.ints.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.strs = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.StrParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.value = str[start:end].decode('utf-8')
        else:
          val1.value = str[start:end]
        self.config.strs.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.doubles = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.DoubleParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 8
        (val1.value,) = _get_struct_d().unpack(str[start:end])
        self.config.doubles.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.groups = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.GroupState()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 9
        (_x.state, _x.id, _x.parent,) = _get_struct_B2i().unpack(str[start:end])
        val1.state = bool(val1.state)
        self.config.groups.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.config.bools)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.bools:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_B().pack(val1.value))
      length = len(self.config.ints)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.ints:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_i().pack(val1.value))
      length = len(self.config.strs)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.strs:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1.value
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.config.doubles)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.doubles:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_d().pack(val1.value))
      length = len(self.config.groups)
      buff.write(_struct_I.pack(length))
      for val1 in self.config.groups:
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        _x = val1
        buff.write(_get_struct_B2i().pack(_x.state, _x.id, _x.parent))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.config is None:
        self.config = dynamic_reconfigure.msg.Config()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.bools = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.BoolParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 1
        (val1.value,) = _get_struct_B().unpack(str[start:end])
        val1.value = bool(val1.value)
        self.config.bools.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.ints = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.IntParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (val1.value,) = _get_struct_i().unpack(str[start:end])
        self.config.ints.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.strs = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.StrParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.value = str[start:end].decode('utf-8')
        else:
          val1.value = str[start:end]
        self.config.strs.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.doubles = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.DoubleParameter()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        start = end
        end += 8
        (val1.value,) = _get_struct_d().unpack(str[start:end])
        self.config.doubles.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.config.groups = []
      for i in range(0, length):
        val1 = dynamic_reconfigure.msg.GroupState()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8')
        else:
          val1.name = str[start:end]
        _x = val1
        start = end
        end += 9
        (_x.state, _x.id, _x.parent,) = _get_struct_B2i().unpack(str[start:end])
        val1.state = bool(val1.state)
        self.config.groups.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_d = None
def _get_struct_d():
    global _struct_d
    if _struct_d is None:
        _struct_d = struct.Struct("<d")
    return _struct_d
_struct_B2i = None
def _get_struct_B2i():
    global _struct_B2i
    if _struct_B2i is None:
        _struct_B2i = struct.Struct("<B2i")
    return _struct_B2i
class Reconfigure(object):
  _type          = 'dynamic_reconfigure/Reconfigure'
  _md5sum = 'bb125d226a21982a4a98760418dc2672'
  _request_class  = ReconfigureRequest
  _response_class = ReconfigureResponse
