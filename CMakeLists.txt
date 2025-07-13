cmake_minimum_required(VERSION 3.31)
project(algebraic_algorithms)

set(CMAKE_CXX_STANDARD 23)

add_executable(algebraic_algorithms powing.cpp main.cpp)

target_link_libraries(algebraic_algorithms PRIVATE stdc++exp)
