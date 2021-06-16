import rclpy
from rclpy.node import Node
import time

from sensor_msgs.msg import Imu


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.t0 = time.time()
        self.count = 0
        self.subscription = self.create_subscription(
            Imu,
            'imu',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning


    def listener_callback(self, msg):
        self.count += 1
        if self.count == 1000:
            t1 = time.time()
            print(1000 / (t1-self.t0))
            self.t0 = t1
            self.count = 0


def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()