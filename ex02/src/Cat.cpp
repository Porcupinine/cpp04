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

Cat::Cat() : Animal("Kitty"), m_catBrain(new Brain()) {
	for (auto & m_idea : m_catBrain->m_ideas) {
		m_idea = "Miauu";
	}
	std::cout<<"Cat constructor called\n";
}

Cat::~Cat() {
	delete m_catBrain;
	std::cout<<"Cat destructor called\n";
}

Cat::Cat(Cat &cp) {
	m_type = cp.m_type;
	delete m_catBrain;
	m_catBrain =new Brain(*cp.m_catBrain);
	std::cout<<"Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &cp) {
	m_type = cp.m_type;
	delete m_catBrain;
	m_catBrain =new Brain(*cp.m_catBrain);
	std::cout<<"Cat copy operator called\n";
	return *this;
}

void Cat::makeSound() const{
	std::cout<<"Miau\n";
}

std::string Cat::brainyMessage(int n) const {
	return m_catBrain->m_ideas[n];
}
