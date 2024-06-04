cmake_minimum_required(VERSION 3.26)
project(test_analyze C)

set(CMAKE_C_STANDARD 11)

add_executable(test_analyze main.c
        test_header.h)
