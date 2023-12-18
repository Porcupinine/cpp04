/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/11 13:48:34 by laura         #+#    #+#                 */
/*   Updated: 2023/12/11 13:48:34 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <utility>
#include "../includes/Character.h"
#include "../includes/AMateria.h"

Character::Character(std::string name) : m_name(std::move(name)) {
	//TODO initialize nulptr
}

Character &Character::operator=(const Character &cp) {
	m_name = cp.m_name;
	for (int x = 0; x < 4; x++) {
		m_inventory[x] = cp.m_inventory[x];
	}
	m_inventory_slot = cp.m_inventory_slot;
	return *this;
}

Character::Character(const Character &cp) {
	m_name = cp.m_name;
	for (int x = 0; x < 4; x++) {
		m_inventory[x] = cp.m_inventory[x];
	}
	m_inventory_slot = cp.m_inventory_slot;
}

std::string const &Character::getName() const {
	return this->m_name;
}

void Character::equip(AMateria* m) {
	if(m_inventory_slot == 4) {
		std::cout<<"Inventory is full\n";
		return;
	}
	for (auto & x : m_inventory) {
		if (x == nullptr) {
			x = m;
			m_inventory_slot++;
			break;
		}
	}
}

void Character::unequip(int idx) {
	m_floor[m_floor_slot] = m_inventory[idx];
	m_inventory[idx] = nullptr;
	//TODO how to deal with item being droped?
}

void Character::use(int idx, ICharacter& target) {
	m_inventory[idx]->use(target);
	m_inventory[idx] = nullptr;
	//TODO using message + deletion of the materia
}
