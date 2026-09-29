# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target turtlesim::turtlesim
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${turtlesim_TARGETS}.
if(turtlesim_TARGETS AND NOT TARGET turtlesim::turtlesim)
  add_library(turtlesim::turtlesim INTERFACE IMPORTED)
  set_target_properties(turtlesim::turtlesim PROPERTIES
    INTERFACE_LINK_LIBRARIES "${turtlesim_TARGETS}")
endif()
