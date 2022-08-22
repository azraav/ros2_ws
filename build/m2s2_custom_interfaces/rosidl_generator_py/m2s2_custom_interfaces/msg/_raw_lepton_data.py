# generated from rosidl_generator_py/resource/_idl.py.em
# with input from m2s2_custom_interfaces:msg/RawLeptonData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RawLeptonData(type):
    """Metaclass of message 'RawLeptonData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('m2s2_custom_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'm2s2_custom_interfaces.msg.RawLeptonData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__raw_lepton_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__raw_lepton_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__raw_lepton_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__raw_lepton_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__raw_lepton_data

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RawLeptonData(metaclass=Metaclass_RawLeptonData):
    """Message class 'RawLeptonData'."""

    __slots__ = [
        '_header',
        '_height',
        '_width',
        '_encoding',
        '_is_bigendian',
        '_step',
        '_data',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'height': 'uint32',
        'width': 'uint32',
        'encoding': 'string',
        'is_bigendian': 'uint8',
        'step': 'uint32',
        'data': 'sequence<uint16>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint16')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.height = kwargs.get('height', int())
        self.width = kwargs.get('width', int())
        self.encoding = kwargs.get('encoding', str())
        self.is_bigendian = kwargs.get('is_bigendian', int())
        self.step = kwargs.get('step', int())
        self.data = array.array('H', kwargs.get('data', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.height != other.height:
            return False
        if self.width != other.width:
            return False
        if self.encoding != other.encoding:
            return False
        if self.is_bigendian != other.is_bigendian:
            return False
        if self.step != other.step:
            return False
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'height' field must be an unsigned integer in [0, 4294967295]"
        self._height = value

    @property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'width' field must be an unsigned integer in [0, 4294967295]"
        self._width = value

    @property
    def encoding(self):
        """Message field 'encoding'."""
        return self._encoding

    @encoding.setter
    def encoding(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'encoding' field must be of type 'str'"
        self._encoding = value

    @property
    def is_bigendian(self):
        """Message field 'is_bigendian'."""
        return self._is_bigendian

    @is_bigendian.setter
    def is_bigendian(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'is_bigendian' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'is_bigendian' field must be an unsigned integer in [0, 255]"
        self._is_bigendian = value

    @property
    def step(self):
        """Message field 'step'."""
        return self._step

    @step.setter
    def step(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'step' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'step' field must be an unsigned integer in [0, 4294967295]"
        self._step = value

    @property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'H', \
                "The 'data' array.array() must have the type code of 'H'"
            self._data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._data = array.array('H', value)
