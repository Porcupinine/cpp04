/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 10:13:36 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 10:13:36 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.h"

Cat::Cat() {
	m_type = "Kitty";
	std::cout<<"Cat constructor called\n";
}

Cat::~Cat() {
	std::cout<<"Cat destructor called\n";
}

Cat::Cat(const Cat &cp) : Animal(cp) {
	m_type = cp.m_type;
	std::cout<<"Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &cp) {
	std::cout<<"Cat = operator called\n";
	if (this != &cp) {
		Animal::operator=(cp);
	}
	return *this;
}

void Cat::makeSound() const{
	std::cout<<"Miau\n";
}