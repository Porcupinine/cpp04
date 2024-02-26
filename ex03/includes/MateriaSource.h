/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/21 19:16:19 by laura         #+#    #+#                 */
/*   Updated: 2023/12/21 19:16:19 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_MATERIASOURCE_H
#define CPP04_MATERIASOURCE_H

#include "IMateriaSource.h"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	~MateriaSource() override;
	MateriaSource(const MateriaSource& cp) = default;
	MateriaSource& operator=(const MateriaSource& cp) = default;
	void learnMateria(AMateria*) override;
	AMateria* createMateria(std::string const & type) override;
private:
	AMateria** m_materias;
	size_t m_materias_slot{0};
};


#endif //CPP04_MATERIASOURCE_H
