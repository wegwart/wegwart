cmake_minimum_required(VERSION 3.10)

# set the project name
project(wegwart)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Download automatically, you can also just copy the conan.cmake file
if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
   message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
   file(DOWNLOAD "https://github.com/conan-io/cmake-conan/raw/v0.15/conan.cmake"
                 "${CMAKE_BINARY_DIR}/conan.cmake" 
                 TLS_VERIFY ON)
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)

message(STATUS "conan_check...")
conan_check()

message(STATUS "conan_cmake_run...")
conan_cmake_run(CONANFILE conanfile.txt
                BASIC_SETUP) #CMAKE_TARGETS)
                #BUILD missing)

#include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
#conan_basic_setup()

# add the executable
add_executable(wegwart wegwart.cpp src/adapter.cpp)

target_link_libraries(wegwart ${CONAN_LIBS})
