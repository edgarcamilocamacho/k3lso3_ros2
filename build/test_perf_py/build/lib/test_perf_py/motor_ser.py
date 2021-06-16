from k3lso_msgs.srv import MotorsStep

import rclpy
from rclpy.node import Node


class MinimalService(Node):

    def __init__(self):
        super().__init__('motor_ser')
        self.srv = self.create_service(MotorsStep, 'motors_step', self.ser_callback)

    def ser_callback(self, request, response):
        response.joint_state.name = request.motors_command.name
        response.joint_state.position = [0.5]*len(response.joint_state.name)
        response.joint_state.velocity = [0.2]*len(response.joint_state.name)
        response.joint_state.effort =   [0.3]*len(response.joint_state.name)
        return response

def main(args=None):
    rclpy.init(args=args)
    minimal_service = MinimalService()
    rclpy.spin(minimal_service)
    rclpy.shutdown()

if __name__ == '__main__':
    main()