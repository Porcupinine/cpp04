/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Floor.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/21 19:37:50 by laura         #+#    #+#                 */
/*   Updated: 2023/12/21 19:37:50 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Floor.h"


Floor& Floor::getFloor() {
	static Floor instance;
	return instance;
}

Floor::Floor() : m_inventory (new AMateria*[10]{}), m_inventorySize(0), m_inventoryCapacity(10) {
}

void Floor::moreFloor() {
	auto** newInventory = new AMateria*[m_inventoryCapacity*2]{};
	auto** tmpInventory = m_inventory;
	for(size_t it = 0; it < m_inventoryCapacity; it++) {
		newInventory[it] = m_inventory[it];
	}
	m_inventory = newInventory;
	delete [] tmpInventory;
	m_inventoryCapacity *=2;
}

void Floor::addToFloor(AMateria *newMateria) {
	if (m_inventorySize == m_inventoryCapacity) {
		moreFloor();
	}
	m_inventory[m_inventorySize] = newMateria;
	m_inventorySize++;
}

Floor::~Floor() {
	for(size_t it = 0; it < m_inventoryCapacity; it++) {
		delete m_inventory[it];
	}
	delete [] m_inventory;
}

