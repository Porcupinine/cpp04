/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 22:17:37 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 22:17:37 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.h"
#include "../includes/IMateriaSource.h"
#include "../includes/ICharacter.h"
#include "../includes/Ice.h"
#include "../includes/Cure.h"
#include "../includes/MateriaSource.h"
#include "../includes/Character.h"
#include "../includes/Floor.h"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* cloud = new Character("Cloud");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	cloud->equip(tmp);
	tmp = src->createMateria("cure");
	cloud->equip(tmp);
	tmp = src->createMateria("ice");
	cloud->equip(tmp);
	tmp = src->createMateria("cure");
	cloud->equip(tmp);
	tmp = src->createMateria("ice");
	cloud->equip(tmp);

	cloud->unequip(2);
	tmp = src->createMateria("cure");
	cloud->equip(tmp);
	cloud->drop(0);
	ICharacter* Sephiroth = new Character("Sephiroth");
	cloud->use(0, *Sephiroth);
	cloud->use(1, *Sephiroth);
	delete Sephiroth;
	delete cloud;
	delete src;
	return 0;
}
