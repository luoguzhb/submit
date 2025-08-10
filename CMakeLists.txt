cmake_minimum_required(VERSION 3.10)
project(OpenCV_Example)

find_package(OpenCV REQUIRED)
message(STATUS "OpenCV 版本: ${OpenCV_VERSION}")

add_executable(open_video open_video.cpp)
target_link_libraries(open_video ${OpenCV_LIBS})