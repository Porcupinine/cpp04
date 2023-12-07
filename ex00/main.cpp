
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

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
	return 0;
}