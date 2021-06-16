# generated from rosidl_generator_py/resource/_idl.py.em
# with input from k3lso_msgs:srv/MotorsStep.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorsStep_Request(type):
    """Metaclass of message 'MotorsStep_Request'."""

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
            module = import_type_support('k3lso_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'k3lso_msgs.srv.MotorsStep_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motors_step__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motors_step__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motors_step__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motors_step__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motors_step__request

            from k3lso_msgs.msg import MotorsCommand
            if MotorsCommand.__class__._TYPE_SUPPORT is None:
                MotorsCommand.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorsStep_Request(metaclass=Metaclass_MotorsStep_Request):
    """Message class 'MotorsStep_Request'."""

    __slots__ = [
        '_motors_command',
    ]

    _fields_and_field_types = {
        'motors_command': 'k3lso_msgs/MotorsCommand',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['k3lso_msgs', 'msg'], 'MotorsCommand'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from k3lso_msgs.msg import MotorsCommand
        self.motors_command = kwargs.get('motors_command', MotorsCommand())

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
        if self.motors_command != other.motors_command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def motors_command(self):
        """Message field 'motors_command'."""
        return self._motors_command

    @motors_command.setter
    def motors_command(self, value):
        if __debug__:
            from k3lso_msgs.msg import MotorsCommand
            assert \
                isinstance(value, MotorsCommand), \
                "The 'motors_command' field must be a sub message of type 'MotorsCommand'"
        self._motors_command = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_MotorsStep_Response(type):
    """Metaclass of message 'MotorsStep_Response'."""

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
            module = import_type_support('k3lso_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'k3lso_msgs.srv.MotorsStep_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motors_step__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motors_step__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motors_step__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motors_step__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motors_step__response

            from sensor_msgs.msg import Imu
            if Imu.__class__._TYPE_SUPPORT is None:
                Imu.__class__.__import_type_support__()

            from sensor_msgs.msg import JointState
            if JointState.__class__._TYPE_SUPPORT is None:
                JointState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorsStep_Response(metaclass=Metaclass_MotorsStep_Response):
    """Message class 'MotorsStep_Response'."""

    __slots__ = [
        '_joint_state',
        '_imu',
    ]

    _fields_and_field_types = {
        'joint_state': 'sensor_msgs/JointState',
        'imu': 'sensor_msgs/Imu',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Imu'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import JointState
        self.joint_state = kwargs.get('joint_state', JointState())
        from sensor_msgs.msg import Imu
        self.imu = kwargs.get('imu', Imu())

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
        if self.joint_state != other.joint_state:
            return False
        if self.imu != other.imu:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def joint_state(self):
        """Message field 'joint_state'."""
        return self._joint_state

    @joint_state.setter
    def joint_state(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'joint_state' field must be a sub message of type 'JointState'"
        self._joint_state = value

    @property
    def imu(self):
        """Message field 'imu'."""
        return self._imu

    @imu.setter
    def imu(self, value):
        if __debug__:
            from sensor_msgs.msg import Imu
            assert \
                isinstance(value, Imu), \
                "The 'imu' field must be a sub message of type 'Imu'"
        self._imu = value


class Metaclass_MotorsStep(type):
    """Metaclass of service 'MotorsStep'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('k3lso_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'k3lso_msgs.srv.MotorsStep')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__motors_step

            from k3lso_msgs.srv import _motors_step
            if _motors_step.Metaclass_MotorsStep_Request._TYPE_SUPPORT is None:
                _motors_step.Metaclass_MotorsStep_Request.__import_type_support__()
            if _motors_step.Metaclass_MotorsStep_Response._TYPE_SUPPORT is None:
                _motors_step.Metaclass_MotorsStep_Response.__import_type_support__()


class MotorsStep(metaclass=Metaclass_MotorsStep):
    from k3lso_msgs.srv._motors_step import MotorsStep_Request as Request
    from k3lso_msgs.srv._motors_step import MotorsStep_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
