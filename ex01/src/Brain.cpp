/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 10:35:12 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 10:35:12 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.h"
#include <iostream>

Brain::Brain() {
	std::cout<<"Brain constructor called\n";
}

Brain::~Brain() {
	std::cout<<"Brain destructor called\n";
}

Brain::Brain(Brain &cp) {
	std::cout<<"Brain copy constructor called\n";
}

Brain &Brain::operator=(const Brain &cp) {
	std::cout<<"Brain copy operator called\n";
	return *this;
}
