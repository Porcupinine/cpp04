//
// Created by lpraca-l on 12/5/23.
//

#include "Dog.h"

Dog::Dog() {
	type = "Dogo";
	std::cout<<"Dog constructor called\n";
}

Dog::~Dog() {
	std::cout<<"Dog destructor called\n";
}

Dog::Dog(Dog &cp) {
	std::cout<<"Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &cp) {
	std::cout<<"Dog = operator called\n";
	return *this;
}

void Dog::makeSound() const{
	std::cout<<"Au-au\n";
}
