cmake_minimum_required(VERSION 3.6)
project(pg3400_assignment_1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(SOURCE_FILES main.c)
add_executable(pg3400_assignment_1 ${SOURCE_FILES})