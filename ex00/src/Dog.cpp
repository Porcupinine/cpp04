/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 10:13:59 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 10:13:59 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.h"

Dog::Dog() {
	m_type = "Dogo";
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
