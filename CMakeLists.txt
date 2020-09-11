cmake_minimum_required(VERSION 3.16)
project(ContactMenu VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)

add_executable(ContactMenu main.cpp ContactMenu.cpp Person.cpp)