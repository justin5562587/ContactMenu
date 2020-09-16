cmake_minimum_required(VERSION 3.16)
project(ContactMenu VERSION 1.0)

set(CMAKE_PREFIX_PATH "/Users/justin/Qt/5.15.1/clang_64")
set(Qt5_DIR "${CMAKE_PREFIX_PATH}/lib/cmake/Qt5")
set(Qt5Widgets_DIR "${CMAKE_PREFIX_PATH}/lib/cmake/Qt5Widgets")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(CMAKE_CXX_STANDARD 11)

include_directories(includes)

add_executable(ContactMenu main.cpp ContactMenu.cpp Person.cpp)

target_link_libraries(ContactMenu Qt5::Widgets)
