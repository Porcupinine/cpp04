/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 22:08:39 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 22:08:39 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <utility>

#include "../includes/AMateria.h"

AMateria::AMateria(std::string type) : m_type(std::move(type)) {
}

std::string const &AMateria::getType() const {
	return m_type;
}

void AMateria::use(ICharacter &target) {

}
