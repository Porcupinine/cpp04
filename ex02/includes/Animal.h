/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 10:13:09 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 10:13:09 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_ANIMAL_H
#define CPP04_ANIMAL_H

#include <iostream>

class Animal {
	protected:
			std::string m_type;
	public:
		Animal();
		explicit Animal(std::string new_type);
		virtual ~Animal();
		Animal (Animal& cp);
		Animal& operator=(const Animal& cp);
		virtual void makeSound() const;
		std::string getType() const;
		virtual std::string brainyMessage(int n) const = 0;
};


#endif //CPP04_ANIMAL_H
