//
// Created by laura on 8-12-23.
//

#ifndef CPP04_MATERIASOURCE_H
#define CPP04_MATERIASOURCE_H

#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource() = default;
	~MateriaSource()= default;
	MateriaSource(const MateriaSource& cp) = default;
	MateriaSource& operator=(const MateriaSource& cp) = default;
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
private:
	AMateria* m_materias[4]{};
	size_t m_materias_slot{0};
};


#endif //CPP04_MATERIASOURCE_H
