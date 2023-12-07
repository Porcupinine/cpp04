//
// Created by lpraca-l on 12/7/23.
//

#ifndef CPP04_WRONGCAT_H
#define CPP04_WRONGCAT_H


class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat& cp);
		WrongCat& operator=(const WrongCat& cp);
};


#endif //CPP04_WRONGCAT_H
