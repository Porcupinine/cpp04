//
// Created by lpraca-l on 12/7/23.
//

#include "WrongAnimal.h"
#include "WrongCat.h"
#include <iostream>

WrongCat::WrongCat() {
	type = "WrongKitty";
	std::cout<<"WrongCat constructor called\n";
}

WrongCat::~WrongCat() {
	std::cout<<"WrongCat destructor called\n";
}

WrongCat::WrongCat(WrongCat &cp) {
	std::cout<<"WrongCat copy constructor called\n";
}

WrongCat &WrongCat::operator=(const WrongCat &cp) {
	std::cout<<"WrongCat = operator called\n";
	return *this;
}
