cmake_minimum_required(VERSION 3.16.3)
project(PS5_controller_test)
find_package(SDL2 REQUIRED)
include_directories(${PROJECT_SOURCE_DIR})
include_directories(${SDL2_INCLUDE_DIRS})
add_executable(PS5_controller_test PS5_controller_test.cpp)
target_link_libraries(PS5_controller_test PUBLIC ${SDL2_LIBRARIES})