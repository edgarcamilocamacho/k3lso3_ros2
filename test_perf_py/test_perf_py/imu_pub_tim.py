import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Imu

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('imu_publisher')
        self.publisher_ = self.create_publisher(Imu, 'imu', 10)
        timer_period = 0.0001  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = Imu()
        self.publisher_.publish(msg)
        # self.get_logger().info('Publishing...')


def main(args=None):
    rclpy.init(args=args)
    minimal_publisher = MinimalPublisher()
    rclpy.spin(minimal_publisher)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
