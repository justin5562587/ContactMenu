cmake_minimum_required(VERSION 3.16)
project(ContactMenu VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)

include_directories(includes)

add_executable(ContactMenu main.cpp ContactMenu.cpp Person.cpp CSVController.cpp)
