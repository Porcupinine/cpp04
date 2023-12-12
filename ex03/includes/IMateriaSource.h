/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.h                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 22:13:28 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 22:13:28 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_IMATERIASOURCE_H
#define CPP04_IMATERIASOURCE_H

#include "AMateria.h"

class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};


#endif //CPP04_IMATERIASOURCE_H
