cmake_minimum_required(VERSION 3.15)
project(Calendar)

set(CMAKE_CXX_STANDARD 14)

add_executable(Calendar main.cpp Month.cpp Month.h Color.cpp Color.h Date.cpp Date.h Justifier.cpp Justifier.h Year.cpp Year.h)
