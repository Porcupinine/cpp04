/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 10:11:09 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 10:11:09 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.h"
#include "../includes/Dog.h"
#include "../includes/Cat.h"
#include "../includes/WrongAnimal.h"
#include "../includes/WrongCat.h"

int main()
{
	const Animal *meta = new Animal();
	const Dog *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *k = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	k->makeSound();
	delete(meta);
	delete(j);
	delete(i);
	delete(k);
	std::cout<<"\n";
	const Animal* l[3] = {new Dog(), new Cat(), new Animal()};
	for(auto & x : l) {
		std::cout<<x->getType()<<"\n";
		x->makeSound();
		delete x;
	}
	return 0;
}