cmake_minimum_required(VERSION 3.0.0)
project(Wonderland VERSION 0.0.0)

find_package(SFML 2.5 REQUIRED COMPONENTS graphics)

file(GLOB SRC_FILES
    ./src/*.cpp
    ./src/*/*.cpp
)

include_directories(./include)

add_executable(Test ${SRC_FILES})

target_link_libraries(Test sfml-graphics)
