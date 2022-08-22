from setuptools import setup

package_name = 'my_python_pkg'

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
    maintainer='azraa',
    maintainer_email='azraa@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "py_node = my_python_pkg.my_first_node:main",  #This installs executable file into ROS2 workspace. executable name = packageName.nodeName:function to start. To run executable using ros2 cmds: source .bashrc -> ros2 run pkg_name executable_names
            "robot_news_station = my_python_pkg.robot_news_station:main",
            "smartphone = my_python_pkg.smartphone:main",
            "number_publisher = my_python_pkg.number_publisher:main",
            "number_counter = my_python_pkg.number_counter:main",
            "add_two_ints_server = my_python_pkg.add_two_ints_server:main",
            "add_two_ints_client  = my_python_pkg.add_two_ints_client:main",
            "add_two_ints_client_no_oop = my_python_pkg.add_two_ints_client_no_oop:main",
            "hw_status_publisher = my_python_pkg.hw_status_publisher:main",
            "led_panel = my_python_pkg.led_panel:main",  
            "battery = my_python_pkg.battery_node:main",
            "image_subscriber = my_python_pkg.image_subscriber:main" ,
            "image_subscriber_rt = my_python_pkg.image_subscriber_rt:main"
        ],
    },
)
