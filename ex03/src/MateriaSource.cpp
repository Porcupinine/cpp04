//
// Created by laura on 8-12-23.
//

#include <iostream>
#include "../includes/MateriaSource.h"
#include "../includes/Ice.h"
#include "../includes/AMateria.h"
#include "../includes/Cure.h"

void MateriaSource::learnMateria(AMateria * m) {
	if(m_materias_slot == 4) {
		std::cout<<"Can't create more materias!\n";
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	AMateria* new_materia;
	if (type == "ice")
		new_materia = new Ice();
	if (type == "cure")
		new_materia = new Cure();
	for (auto & m_materia : m_materias) {
		if (m_materia == nullptr) {
			m_materia = new_materia;
			m_materias_slot++;
			break;
		}
	}
	return new_materia;
}
