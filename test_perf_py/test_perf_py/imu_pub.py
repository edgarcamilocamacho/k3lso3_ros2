import rclpy
from rclpy.node import Node
import time

from sensor_msgs.msg import Imu

def main(args=None):
    rclpy.init(args=args)
    node = Node('imu_publisher')
    pub = node.create_publisher(Imu, 'imu', 10)
    while True:
        msg = Imu()
        pub.publish(msg)
        # time.sleep(0.001)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
