/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/21 19:15:57 by laura         #+#    #+#                 */
/*   Updated: 2023/12/21 19:15:57 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_CHARACTER_H
#define CPP04_CHARACTER_H


#include "ICharacter.h"
#include "Floor.h"

class Character : public ICharacter{
private:
	static const size_t k_equipedSize = 4;
	static const size_t k_inventorySize = 10;
	std::string m_name;
	AMateria* m_equiped[k_equipedSize]{};
	size_t m_equipedSlot{0};
	AMateria* m_inventory[k_inventorySize]{};
	size_t m_inventorySlot{0};
public:
	explicit Character(std::string name);
	~Character() override;
	Character(const Character& cp);
	Character& operator=(const Character& cp);
	std::string const & getName() const override;
	void equip(AMateria* m) override;
	void unequip(int idx) override;
	void use(int idx, ICharacter& target) override;
	void drop(int idx) override;
	void addToInventory(AMateria *m);
};


#endif //CPP04_CHARACTER_H
