/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 10:14:19 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 10:14:19 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_DOG_H
#define CPP04_DOG_H

#include "Animal.h"

class Dog : public Animal {
	public:
		Dog();
		~Dog() override;
		Dog(const Dog& cp);
		Dog& operator=(const Dog& cp);
		void makeSound() const override;
};


#endif //CPP04_DOG_H
