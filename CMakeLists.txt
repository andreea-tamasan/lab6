cmake_minimum_required(VERSION 3.21)
project(lab4)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab4 main.cpp Square/Square.cpp Square/Square.h Tests/Tests.cpp Tests/Tests.h Consola/Consola.h Consola/Consola.cpp Repository/Repository.cpp Repository/Repository.h)
