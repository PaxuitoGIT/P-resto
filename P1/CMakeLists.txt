cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Persona.h
        Persona.cpp
        Estudiante.h
        Estudiante.cpp)
