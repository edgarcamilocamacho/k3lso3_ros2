from setuptools import setup

package_name = 'test_perf_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='camilo',
    maintainer_email='camilo@unlimited-robotics.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'imu_pub = test_perf_py.imu_pub:main',
            'imu_pub_tim = test_perf_py.imu_pub_tim:main',
            'imu_sub = test_perf_py.imu_sub:main',
            'motor_ser = test_perf_py.motor_ser:main',
            'motor_cli = test_perf_py.motor_cli:main',
        ],
    },
)
