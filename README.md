
# rtabmap_iris
* ROS version: Melodic
* rtabap to be used in dissertation
* Original RTABMAP repository [here](https://github.com/introlab/rtabmap_ros)
* bagfiles are not in this repository due to their size


rtabmap_ros [![Build Status](https://travis-ci.org/introlab/rtabmap_ros.svg?branch=master)](https://travis-ci.org/introlab/rtabmap_ros)
===========

RTAB-Map's ROS package.

For more information, demos and tutorials about this package, visit [rtabmap_ros](http://wiki.ros.org/rtabmap_ros) page on ROS wiki.

For the RTAB-Map libraries and standalone application, visit [RTAB-Map's home page](http://introlab.github.io/rtabmap) or [RTAB-Map's wiki](https://github.com/introlab/rtabmap/wiki).

### Docker

* Go to [docker](https://github.com/introlab/rtabmap_ros/tree/master/docker) directory for an example.


## Build from source


* Source needed files to run rtabmap_ros:

    ```bash
    $ source /opt/ros/noetic/setup.bash
    $ cd "$(find /home -name rtabmap_ros-master -type d 2>/dev/null)"
    $ source ~/catkin_ws/devel/setup.bash
    ```

## Simulator
  For this project it will be used the intellwheels sensor simulator that can be downloaded [here](https://drive.google.com/file/d/1wsxc9bg74hcLTiFRIrgUMmKxt-XUGYSe/view?usp=sharing)


# Usage

## Mapping
* To run wheelchair maaping using gazebo environment(assuming that you have ros package wheelchair_world):
    ```bash
    $ roslaunch rtabmap_ros wheelchair_mapping.launch
    ```
    by running this command it will be open rviz and gazebo simulator. In rviz check Displays > MapCloud > Download map. You can control the wheelchair by sending information to the topic /cmd_vel, you can do this by running:

    ```bash
    $ rostopic pub -1 /cmd_vel geometry_msgs/Twist -- '[2.0, 0.0, 0.0]' '[0.0, 0.0, 1.8]'
    ```

    Or by using the package wheelchair_teleop by running:

    ```bash
    $ roslaunch wheelchair_teleop wheelchair_teleop_key.launch
    ```

* To run rtabmap mapping using kitti bags:
    ```bash
    $ roslaunch rtabmap_ros rtabmap_iris.launch
    ```
    by default it will open rtabmapviz, run:
    ```bash
    $ roslaunch rtabmap_ros rtabmap_iris.launch rtabmapviz:=false rviz:=true
    ```
    to run rviz instead, check the box Displays > MapCloud > Download map.
   This command should be accompanied by the respective play of the kitti bag.

## Loop closure appereance based

  * To run Loop closure appereance based using a kitti bag run:
  ```bash
  $ roslaunch rtabmap_ros Iris_appearance_mapping.launch
  ```
  *To run from a directory with frames run:
  ```bash
  $ roslaunch rtabmap_ros Iris_appearance_mapping.launch input_topic:=/image input:=(directory to the images)
  ```
  by default the directoy to the images is $(find rtabmap_ros)/launch/data/demo_appearance)

  *To run from a camera:
  ```bash
  $ roslaunch rtabmap_ros Iris_appearance_mapping.launch input_topic:=/image input:=null
  ```
