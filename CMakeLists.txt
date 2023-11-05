cmake_minimum_required(VERSION 3.26)
project(PetInfo)

set(CMAKE_CXX_STANDARD 17)

add_executable(PetInfo main.cpp
        Pet.cpp
        Pet.h
        Cat.cpp
        Cat.h
        newCxxTest.h)
