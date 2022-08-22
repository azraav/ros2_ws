# generated from rosidl_generator_py/resource/_idl.py.em
# with input from flir_lepton_msgs:msg/RawData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RawData(type):
    """Metaclass of message 'RawData'."""

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
            module = import_type_support('flir_lepton_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'flir_lepton_msgs.msg.RawData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__raw_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__raw_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__raw_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__raw_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__raw_data

            from example_interfaces.msg import Int16MultiArray
            if Int16MultiArray.__class__._TYPE_SUPPORT is None:
                Int16MultiArray.__class__.__import_type_support__()

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


class RawData(metaclass=Metaclass_RawData):
    """Message class 'RawData'."""

    __slots__ = [
        '_header',
        '_raw_values',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'raw_values': 'example_interfaces/Int16MultiArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['example_interfaces', 'msg'], 'Int16MultiArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from example_interfaces.msg import Int16MultiArray
        self.raw_values = kwargs.get('raw_values', Int16MultiArray())

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
        if self.raw_values != other.raw_values:
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
    def raw_values(self):
        """Message field 'raw_values'."""
        return self._raw_values

    @raw_values.setter
    def raw_values(self, value):
        if __debug__:
            from example_interfaces.msg import Int16MultiArray
            assert \
                isinstance(value, Int16MultiArray), \
                "The 'raw_values' field must be a sub message of type 'Int16MultiArray'"
        self._raw_values = value
