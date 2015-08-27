#set(CMAKE_VERBOSE_MAKEFILE 1)  # for debug: enable execution log of `make`

cmake_minimum_required(VERSION 3.1)

project(DesignPatternCImple)

#set(CMAKE_C_COMPILER   i686-w64-mingw32-gcc)
#set(CMAKE_CXX_COMPILER i686-w64-mingw32-g++)
set_property(GLOBAL PROPERTY CXX_STANDARD 11)
set_property(GLOBAL PROPERTY C_STANDARD 11)

#include_directories(       sample)


#set(CMAKE_CXX_FLAGS "-D__linux__")
#set(CMAKE_C_FLAGS   "-D__linux__")
#set(CMAKE_CXX_FLAGS "-DcFgwPlatform_Windows")
#set(CMAKE_C_FLAGS   "-DcFgwPlatform_Windows")


add_subdirectory(example)
add_subdirectory(lib)

