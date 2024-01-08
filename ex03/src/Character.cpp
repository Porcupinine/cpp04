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
}


Character::~Character() {
	for (int x = 0; x < 4; x++) {
		delete m_equiped[x];
	}
	for (int x = 0; x < 10; x++) {
		delete m_inventory[x];
	}
}

Character &Character::operator=(const Character &cp) {
	m_name = cp.m_name;
	for (int x = 0; x < 4; x++) {
		m_equiped[x] = cp.m_equiped[x];
	}
	m_equipedSlot = cp.m_equipedSlot;
	return *this;
}

Character::Character(const Character &cp) {
	m_name = cp.m_name;
	for (int x = 0; x < 4; x++) {
		m_equiped[x] = cp.m_equiped[x];
	}
	m_equipedSlot = cp.m_equipedSlot;
}

std::string const &Character::getName() const {
	return this->m_name;
}

void Character::equip(AMateria* m) {
	if(m_equipedSlot == 4) {
		std::cout<<"Unequip something and try again\n";
		return;
	}
	for (int x = 0; x < 4; x++) {
		if (m_equiped[x] == nullptr) {
			m_equiped[x] = m;
			m_equipedSlot++;
			std::cout<<m->getType()<<" equipped on slot: "<<x<<"\n";
			break;
		}
	}
void Character::unequip(int idx) {
	if (m_inventorySlot == 10) {
		std::cout<<"Inventory is full!\n";
		return;
	}
	std::cout<<"slot " <<idx<<" is now empty\n";
	m_inventory[m_inventorySlot] = m_equiped[idx];
	m_equiped[idx] = nullptr;
	m_inventorySlot++;
	m_equipedSlot--;
}

void Character::use(int idx, ICharacter& target) {
	m_equiped[idx]->use(target);
}

void Character::drop(int idx) {
	std::cout<<m_name<<" droped "<<m_inventory[idx]->getType()<<"\n";
	Floor::getFloor().addToFloor(m_inventory[idx]);
	m_inventory[idx] = nullptr;
}


