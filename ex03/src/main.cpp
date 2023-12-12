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

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
