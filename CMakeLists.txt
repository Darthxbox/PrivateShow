cmake_minimum_required(VERSION 3.5)
project(PrivateShow)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ffmpeg.cpp ffmpeg.h filesystemWin.cpp filesystemWin.h)
add_executable(PrivateShow ${SOURCE_FILES})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")




