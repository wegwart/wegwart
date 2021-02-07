cmake_minimum_required(VERSION 3.10)

# set the project name
project(wegwart)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

# add the executable
add_executable(wegwart wegwart.cpp src/adapter.cpp)

target_link_libraries(wegwart ${CONAN_LIBS})
