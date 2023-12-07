	//
// Created by lpraca-l on 12/5/23.
//

#ifndef CPP04_CAT_H
#define CPP04_CAT_H

#include "Animal.h"

class Cat : public Animal {
	public:
		Cat();
		~Cat();
		Cat(Cat& cp);
		Cat& operator=(const Cat& cp);
		void makeSound() const;
};


#endif //CPP04_CAT_H
