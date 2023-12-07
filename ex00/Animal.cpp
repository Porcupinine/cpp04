
#include "Animal.h"

Animal::Animal() {
	std::cout<<"Animal constructor called\n";
}

Animal::~Animal() {
	std::cout<<"Animal destructor called\n";
}

Animal::Animal(Animal &cp) {
	std::cout<<"Animal coppy constructor called\n";
}

Animal &Animal::operator=(const Animal &cp) {
	std::cout<<"Animal = operator called\n";
	return *this;
}

void Animal::makeSound() const{
	std::cout<<"...\n";
}

std::string Animal::getType() const{
	return type;
}
