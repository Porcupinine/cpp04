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
	{
		std::cout << "--------TEST 1--------------\n";
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		const WrongAnimal *k = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << k->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		k->makeSound();
		for(int x = 0; x<100;x++) {
			std::cout<<j->brainyMessage(x);
		}
		std::cout<<"\n";
		for(int x = 0;x<100;x++) {
			std::cout<<i->brainyMessage(x);
		}
		std::cout<<"\n";
		delete (j);
		delete (i);
		delete (k);
		std::cout << "\n\n";
	}
	{
		std::cout << "--------TEST 2--------------\n";
		const Animal *l[2] = {new Dog(), new Cat()};
		for (auto &x: l) {
			std::cout << x->getType() << "\n";
			x->makeSound();
			delete x;
		}
	}
	std::cout<<"\n\n";
	{
		std::cout<<"--------TEST 3--------------\n";
		Dog *a = new Dog();
		Dog b(*a);
		Dog c;
		c = *a;
		std::cout<<a->getType()<<"\n";
		std::cout<<b.getType()<<"\n";
		std::cout<<c.getType()<<"\n";
		a->makeSound();
		b.makeSound();
		c.makeSound();
		delete a;
		for(int x = 0; x<100;x++) {
			std::cout<<b.brainyMessage(x);
		}
		std::cout<<"\n";
	}
	return 0;
}