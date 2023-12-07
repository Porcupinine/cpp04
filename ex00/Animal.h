	//
// Created by lpraca-l on 12/5/23.
//

#ifndef CPP04_ANIMAL_H
#define CPP04_ANIMAL_H

#include <iostream>

class Animal {
	protected:
			std::string type;
	public:
		Animal();
		~Animal();
		Animal (Animal& cp);
		Animal& operator=(const Animal& cp);
		virtual void makeSound() const;
		std::string getType() const;

};


#endif //CPP04_ANIMAL_H
