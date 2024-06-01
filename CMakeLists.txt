cmake_minimum_required(VERSION 3.27)
project(Standard_programming_methods_in_high_level_languages)

set(CMAKE_CXX_STANDARD 14)

include_directories(complex)

add_executable(Standard_programming_methods_in_high_level_languages
        complex/complex.cpp
        complex/complex.hpp)
