cmake_minimum_required(VERSION 3.26)
project(cpp04)

set(CMAKE_CXX_STANDARD 11)
add_compile_options(-fsanitize=address -fsanitize=leak -g3)
add_link_options(-fsanitize=address -fsanitize=leak)

add_executable(ex00
		ex00/src/Animal.cpp
		ex00/src/Dog.cpp
		ex00/src/Cat.cpp
		ex00/src/main.cpp
		ex00/src/WrongAnimal.cpp
		ex00/src/WrongCat.cpp)

add_executable(ex01
		ex01/src/Brain.cpp
		ex01/src/Animal.cpp
		ex01/src/WrongCat.cpp
		ex01/src/WrongAnimal.cpp
		ex01/src/main.cpp
		ex01/src/Dog.cpp
		ex01/src/Cat.cpp)

add_executable(ex02
		ex02/src/Animal.cpp
		ex02/src/Brain.cpp
		ex02/src/Cat.cpp
		ex02/src/Dog.cpp
		ex02/src/main.cpp
		ex02/src/WrongAnimal.cpp
		ex02/src/WrongCat.cpp)

add_executable(ex03
		ex03/src/AMateria.cpp
		ex03/src/Ice.cpp
		ex03/src/Cure.cpp
		ex03/src/main.cpp
		ex03/src/Character.cpp
		ex03/src/MateriaSource.cpp
		ex03/src/Floor.cpp
		ex03/includes/Floor.h)