//
// Created by lpraca-l on 12/5/23.
//

#ifndef CPP04_DOG_H
#define CPP04_DOG_H

#include "Animal.h"

class Dog : public Animal {
	public:
		Dog();
		~Dog();
		Dog(Dog& cp);
		Dog& operator=(const Dog& cp);
		void makeSound() const;
};


#endif //CPP04_DOG_H
