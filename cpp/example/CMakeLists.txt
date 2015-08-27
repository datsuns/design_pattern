#set(CMAKE_VERBOSE_MAKEFILE 1)  # for debug: enable execution log of `make`

cmake_minimum_required(VERSION 3.1)

project(EasyExecution)

set(CMAKE_C_COMPILER   i686-w64-mingw32-gcc)
set(CMAKE_CXX_COMPILER i686-w64-mingw32-g++)
set_property(GLOBAL PROPERTY CXX_STANDARD 11)
set_property(GLOBAL PROPERTY C_STANDARD 11)

set(FwSrcRoot     /home/903PP1419/work/_pj/NEX/work/fetch_hawai/all/Unit.NX7)

set(SchedulerRoot ${FwSrcRoot}/Source/Runtime/R_1/scheduler)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/emu)
include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/emu/dummy_empty_headers)
include_directories(       ${FwSrcRoot}/Release_NX7/include)
include_directories(       ${FwSrcRoot}/Release_NX7/include/Fgw)


set(CMAKE_CXX_FLAGS "-D__linux__")
set(CMAKE_C_FLAGS   "-D__linux__")
set(CMAKE_CXX_FLAGS "-DcFgwPlatform_Windows")
set(CMAKE_C_FLAGS   "-DcFgwPlatform_Windows")

# redefinition for struct timespec
#   in time.h of MINGW chedk the following symbol before define timespec
set(CMAKE_CXX_FLAGS "-D_TIMESPEC_DEFINED")
set(CMAKE_C_FLAGS   "-D_TIMESPEC_DEFINED")


add_subdirectory(emu)
add_subdirectory(example)

