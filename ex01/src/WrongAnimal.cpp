/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 10:14:32 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 10:14:32 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.h"
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
	return m_type;
}