cmake_minimum_required(VERSION 3.17)
project(myGithub)

set(CMAKE_CXX_STANDARD 14)

include_directories(mytest)

add_executable(myGithub
        mytest/complex.h
        mytest/mytest.cpp)
