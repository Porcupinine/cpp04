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
	MateriaSource() = default;
	~MateriaSource() override;
	MateriaSource(const MateriaSource& cp);
	MateriaSource& operator=(const MateriaSource& cp);
	void learnMateria(AMateria*) override;
	AMateria* createMateria(std::string const & type) override;
private:
	static const size_t k_materiasSize = 4;
	AMateria* m_materias[k_materiasSize]{};
	size_t m_materiasSlot{0};
};


#endif //CPP04_MATERIASOURCE_H
