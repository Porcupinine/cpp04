/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 22:08:47 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 22:08:47 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Ice.h"

Ice::Ice() : AMateria("ice") {}

void Ice::use(ICharacter &target) {
	std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *\n";
}

AMateria *Ice::clone() const {
	Ice* newIce = new Ice(*this);
	return newIce;
}

Ice::Ice(const Ice &cp) : AMateria(cp.m_type){
}
