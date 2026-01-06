from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'robot_control_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='jiseong',
    maintainer_email='727jisung@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'llm_service_node = robot_control_pkg.llm_service_node:main',
            'teleop_node = robot_control_pkg.teleop_node:main',
            'movement_action_server = robot_control_pkg.movement_action_server:main',
        ],
    },
)
