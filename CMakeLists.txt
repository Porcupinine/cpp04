cmake_minimum_required(VERSION 3.26)
project(cpp04)

set(CMAKE_CXX_STANDARD 11)

add_executable(ex00
        ex00/Animal.cpp
        ex00/Animal.h
        ex00/Dog.cpp
        ex00/Dog.h
        ex00/Cat.cpp
        ex00/Cat.h
        ex00/main.cpp
        ex00/WrongAnimal.cpp
        ex00/WrongAnimal.h
        ex00/WrongCat.cpp
        ex00/WrongCat.h)

#add_executable(ex01)