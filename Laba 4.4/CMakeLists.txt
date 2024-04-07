cmake_minimum_required(VERSION 3.27)
project(Laba_4_4)

set(CMAKE_CXX_STANDARD 17)

add_executable(Laba_4_4 main.cpp
        Figure.h
        Rectangle.h
        Circle.h
        Trapezium.h
        Rectangle.cpp
        Circle.cpp
        Trapezium.cpp)
