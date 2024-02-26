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
	for (auto x : m_equiped) {
		delete x;
	}
	for (auto x : m_inventory) {
		delete x;
	}
}

Character &Character::operator=(const Character &cp) {
	m_name = cp.m_name;
	for (size_t x = 0; x < k_equipedSize; ++x) {
		m_equiped[x] = cp.m_equiped[x];
	}
	m_equipedSlot = cp.m_equipedSlot;
	return *this;
}
//TODO copy inventory

Character::Character(const Character &cp) {
	m_name = cp.m_name;
	for (size_t x = 0; x < k_equipedSize; ++x) {
		m_equiped[x] = cp.m_equiped[x];
	}
	m_equipedSlot = cp.m_equipedSlot;
}

std::string const &Character::getName() const {
	return m_name;
}

void Character::addToInventory(AMateria *m) {
	std::cout << m->getType() << " is now on the inventory\n";
	m_inventory[m_inventorySlot] = m;
	m_inventorySlot++;
	m_equipedSlot--;
}

void Character::equip(AMateria* m) {
	if (m_equipedSlot == k_equipedSize) {
		std::cout << "Unequip something and try again\n";
		addToInventory(m);
		return;
	}
	for (size_t x = 0; x < k_equipedSize; ++x) {
		if (m_equiped[x] == nullptr) {
			m_equiped[x] = m;
			m_equipedSlot++;
			std::cout << m->getType() << " equipped on slot: " << x << "\n";
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (m_inventorySlot == k_inventorySize) {
		std::cout<<"Inventory is full!\n";
		drop(idx);
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
