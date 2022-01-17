cmake_minimum_required(VERSION 3.2.1)
project(trial)

#set(OpenCV_DIR C:/opencv/build)
#set(OpenCV_DIR C:/opencv/build/x64/vc15/lib)

set(OpenCV_DIR C:/opencv/build/x64/mingw/bin)
find_package(OpenCV REQUIRED PATHS "C:/opencv/build")

include_directories(${OpenCV_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES display_img.cpp)

add_executable(shell-app ${SOURCE_FILES})
target_link_libraries(shell-app ${OpenCV_LIBS})