from k3lso_msgs.srv import MotorsStep
from sensor_msgs.msg import Imu

import sys
import rclpy
from rclpy.node import Node
import time

class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('motor_cli')
        self.cli = self.create_client(MotorsStep, 'motors_step')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.pub = self.create_publisher(Imu, 'imu', 10)


def main(args=None):
    rclpy.init(args=args)

    minimal_client = MinimalClientAsync()

    while True:
        req = MotorsStep.Request()
        req.motors_command.name = ['hola', 'a', 'todo']
        req.motors_command.position = [0.12]*len(req.motors_command.name)
        req.motors_command.velocity = [0.15]*len(req.motors_command.name)
        req.motors_command.effort =   [0.18]*len(req.motors_command.name)
        resp_future = minimal_client.cli.call_async(req)

        while rclpy.ok():
            rclpy.spin_once(minimal_client)
            if resp_future.done():
                try:
                    response = resp_future.result()
                except Exception as e:
                    print(e)
                else:
                    minimal_client.pub.publish(response.imu)
                break

        time.sleep(0.0001)

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()