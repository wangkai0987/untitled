cmake_minimum_required(VERSION 3.19)
project(untitled C)

set(CMAKE_C_STANDARD 99)

add_executable(untitled main.c wangkai/wkSample.c wangkai/wkSample.h wangkai/wkTest.c wangkai/wkTest.h)
