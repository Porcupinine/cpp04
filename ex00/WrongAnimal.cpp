//
// Created by lpraca-l on 12/7/23.
//

#include "WrongAnimal.h"
#include <iostream>

WrongAnimal::WrongAnimal() {
	std::cout<<"WrongAnimal constructor called\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout<<"WrongAnimal destructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal &cp) {
	std::cout<<"WrongAnimal coppy constructor called\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cp) {
	std::cout<<"WrongAnimal = operator called\n";
	return *this;
}

void WrongAnimal::makeSound() const{
	std::cout<<"...\n";
}

std::string WrongAnimal::getType() const{
	return type;
}