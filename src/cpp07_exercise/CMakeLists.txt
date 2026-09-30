cmake_minimum_required(VERSION 3.8)
project(cpp07_exercise)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(turtlesim REQUIRED)
find_package(base_demo REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)

add_executable(exer01_pub_sub src/exer01_pub_sub.cpp)
target_include_directories(exer01_pub_sub PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(exer01_pub_sub PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  exer01_pub_sub
  "rclcpp"
  "turtlesim"
  "base_demo"
  "geometry_msgs"
  "rclcpp_action"
)

add_executable(exer02_server src/exer02_server.cpp)
target_compile_features(exer02_server PUBLIC cxx_std_17)
ament_target_dependencies(
  exer02_server
  "rclcpp"
  "turtlesim"
  "base_demo"
)

add_executable(exer03_client src/exer03_client.cpp)
target_compile_features(exer03_client PUBLIC cxx_std_17)
ament_target_dependencies(
  exer03_client
  "rclcpp"
  "base_demo"
)

add_executable(exer04_action_server src/exer04_action_server.cpp)
target_compile_features(exer04_action_server PUBLIC cxx_std_17)
ament_target_dependencies(
  exer04_action_server
  "rclcpp"
  "rclcpp_action"
  "base_demo"
  "turtlesim"
  "geometry_msgs"
)

add_executable(exer05_action_client src/exer05_action_client.cpp)
target_compile_features(exer05_action_client PUBLIC cxx_std_17)
ament_target_dependencies(
  exer05_action_client
  "rclcpp"
  "rclcpp_action"
  "base_demo"
  "turtlesim"
  "geometry_msgs"
)

add_executable(exer06_param src/exer06_param.cpp)
target_compile_features(exer06_param PUBLIC cxx_std_17)
ament_target_dependencies(
  exer06_param
  "rclcpp"
)

install(TARGETS
  exer01_pub_sub
  exer02_server
  exer03_client
  exer04_action_server
  exer05_action_client
  exer06_param
  DESTINATION lib/${PROJECT_NAME})
install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
