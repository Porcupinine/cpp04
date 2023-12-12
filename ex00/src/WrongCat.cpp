/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 10:14:59 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 10:14:59 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.h"
#include "../includes/WrongCat.h"
#include <iostream>

WrongCat::WrongCat() {
	m_type = "WrongKitty";
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
