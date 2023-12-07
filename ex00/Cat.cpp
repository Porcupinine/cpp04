//
// Created by lpraca-l on 12/5/23.
//

#include "Cat.h"

Cat::Cat() {
	type = "Kitty";
	std::cout<<"Cat constructor called\n";
}

Cat::~Cat() {
	std::cout<<"Cat destructor called\n";
}

Cat::Cat(Cat &cp) {
	std::cout<<"Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &cp) {
	std::cout<<"Cat = operator called\n";
	return *this;
}

void Cat::makeSound() const{
	std::cout<<"Miau\n";
}