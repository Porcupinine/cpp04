//
// Created by laura on 8-12-23.
//

#ifndef CPP04_CHARACTER_H
#define CPP04_CHARACTER_H


#include "ICharacter.h"

class Character : public ICharacter{
private:
	std::string m_name;
	AMateria* m_inventory[4]{};
	size_t m_inventory_slot{0};
	static AMateria* m_floor[1000]{};
	static size_t m_floor_slot;
public:
	explicit Character(std::string name);
	~Character() override = default;
	Character(const Character& cp);
	Character& operator=(const Character& cp);
	std::string const & getName() const override;
	void equip(AMateria* m) override;
	void unequip(int idx) override;
	void use(int idx, ICharacter& target) override;
};


#endif //CPP04_CHARACTER_H
