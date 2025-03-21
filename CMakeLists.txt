cmake_minimum_required(VERSION 3.25)
project(BOC)

add_subdirectory(basicOp)
add_subdirectory(view)

add_executable(BOC main.cpp)

target_link_libraries(BOC PRIVATE basicOp view)
