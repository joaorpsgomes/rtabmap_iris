execute_process(COMMAND "/home/joaorpsgomes/Desktop/ros_workspace/src/rtabmap_ros-master/build/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/joaorpsgomes/Desktop/ros_workspace/src/rtabmap_ros-master/build/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
