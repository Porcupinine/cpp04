/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/21 19:15:45 by laura         #+#    #+#                 */
/*   Updated: 2023/12/21 19:15:45 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/MateriaSource.h"
#include "../includes/Ice.h"
#include "../includes/AMateria.h"
#include "../includes/Cure.h"

void MateriaSource::learnMateria(AMateria * m) {
	if (m_materias_slot == 3) {
		std::cout << "Can't create more materias!\n";
		return;
	}
	for (int x = 0; x < 3; x++) {
		if (m_materias[x] == nullptr) {
			m_materias[x] = m;
			m_materias_slot++;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 3; ++i) {
		if(m_materias[i]->getType() == type)
			return m_materias[i]->clone();
	}
	return nullptr;
}

MateriaSource::~MateriaSource() {
	for(int x = 0; x < 3; x++) {
		delete m_materias[x];
	}
 	delete [] m_materias;
}

MateriaSource::MateriaSource() : m_materias (new AMateria*[10]{}) {
}
