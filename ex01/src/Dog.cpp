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

Dog::Dog() : Animal("Dogo"), m_dogBrain(new Brain()){
	for (auto & m_idea : m_dogBrain->m_ideas) {
		m_idea = "Au-Au";
	}
	std::cout<<"Dog constructor called\n";
}

Dog::~Dog() {
	delete m_dogBrain;
	std::cout<<"Dog destructor called\n";
}

Dog::Dog(const Dog &cp) {
	m_type = cp.m_type;
	delete m_dogBrain;
	m_dogBrain = new Brain(*cp.m_dogBrain);
	std::cout<<"Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &cp) {
	if (&cp == this) {
		return *this;
	}
	m_type = cp.m_type;
	delete m_dogBrain;
	m_dogBrain = new Brain(*cp.m_dogBrain);
	std::cout<<"Dog copy operator called\n";
	return *this;
}

void Dog::makeSound() const{
	std::cout<<"Au-au\n";
}

std::string Dog::brainyMessage(int n) {
	return m_dogBrain->m_ideas[n];
}
