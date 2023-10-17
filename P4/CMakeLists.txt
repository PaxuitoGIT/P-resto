cmake_minimum_required(VERSION 3.26)
project(P4)

set(CMAKE_CXX_STANDARD 17)

add_executable(P4 main.cpp
        funciones.cpp
        funciones.h
        matematicas.cpp
        matematicas.h
        nuevo.cpp)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG        7.1.3
)

add_library(matematicas SHARED funciones.cpp)

FetchContent_MakeAvailable(fmt)

target_link_libraries(P4 PRIVATE matematicas)