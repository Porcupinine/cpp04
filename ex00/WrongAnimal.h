//
// Created by lpraca-l on 12/7/23.
//

#ifndef CPP04_WRONGANIMAL_H
#define CPP04_WRONGANIMAL_H

#include <string>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal (WrongAnimal& cp);
		WrongAnimal& operator=(const WrongAnimal& cp);
		virtual void makeSound() const;
		std::string getType() const;
};


#endif //CPP04_WRONGANIMAL_H
