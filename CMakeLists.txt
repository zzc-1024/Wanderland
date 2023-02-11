cmake_minimum_required(VERSION 3.0.0)
project(Wonderland VERSION 0.0.0)

file(GLOB SRC_FILES
    ./src/*.cpp
)

include_directories(./include)

add_executable(Test ${SRC_FILES})
