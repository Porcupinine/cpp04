/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 22:08:59 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 22:08:59 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Cure.h"


Cure::Cure() : AMateria("cure"){

}

Cure::~Cure() {

}

Cure::Cure(const Cure &cp) : AMateria(cp.m_type) {

}

Cure &Cure::operator=(const Cure &cp) {
	return *this;
}

AMateria *Cure::clone() const {
	return nullptr;
}

void Cure::use(ICharacter &target) {
	std::cout<<"* Heals "<<target.getName()<<"'s wounds *\n";
}
