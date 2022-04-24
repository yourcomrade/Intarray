cmake_minimum_required(VERSION 3.20)
project(Intarray)

set(CMAKE_CXX_STANDARD 20)

add_executable(Intarray main.cpp IntArray.h IntArray.cpp)
target_compile_options(IntArray PRIVATE -Wall -Wextra -Werror -pedantic -Og)
