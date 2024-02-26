/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 10:12:37 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 10:12:37 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.h"

Animal::Animal() : m_type("Animal") {
	std::cout<<"Animal constructor called\n";
}

Animal::~Animal() {
	std::cout<<"Animal destructor called\n";
}

Animal::Animal(const Animal &cp) {
	m_type = cp.m_type;
	std::cout<<"Animal copy constructor called\n";
}

Animal &Animal::operator=(const Animal &cp) {
	std::cout<<"Animal copy operator called\n";
	if (this != &cp) {
		m_type = cp.m_type;
	}
	return *this;
}

void Animal::makeSound() const{
	std::cout<<"...\n";
}

std::string Animal::getType() const{
	return m_type;
}

Animal::Animal(std::string new_type) : m_type(std::move (new_type)) {
	std::cout<<"Animal constructor called\n";

}
