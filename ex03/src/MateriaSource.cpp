//
// Created by laura on 8-12-23.
//

#include <iostream>
#include "../includes/MateriaSource.h"
#include "../includes/Ice.h"
#include "../includes/AMateria.h"

void MateriaSource::learnMateria(AMateria *) {

}

AMateria *MateriaSource::createMateria(const std::string &type) {
	if(m_materias_slot == 4) {
		std::cout<<"Can't create more materias!\n";
		return nullptr;
	}
	AMateria* new_materia = new Ice();
	for (int x = 0; x < 4; x++) {
		if (m_materias[x] == nullptr) {
			m_materias[x] =
		}
	}
	return *new_materia;
}
