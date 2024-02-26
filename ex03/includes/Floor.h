/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Floor.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/21 19:37:35 by laura         #+#    #+#                 */
/*   Updated: 2023/12/21 19:37:35 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_FLOOR_H
#define CPP04_FLOOR_H

#include "AMateria.h"

class Floor {
public:
	~Floor();
	void addToFloor(AMateria* newMateria);
	void moreFloor();
	static Floor& getFloor();
private:
	Floor();
	AMateria**	m_inventory;
	size_t		m_inventorySize;
	size_t		m_inventoryCapacity;
};


#endif //CPP04_FLOOR_H
