# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target base_demo::base_demo
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${base_demo_TARGETS}.
if(base_demo_TARGETS AND NOT TARGET base_demo::base_demo)
  add_library(base_demo::base_demo INTERFACE IMPORTED)
  set_target_properties(base_demo::base_demo PROPERTIES
    INTERFACE_LINK_LIBRARIES "${base_demo_TARGETS}")
endif()
