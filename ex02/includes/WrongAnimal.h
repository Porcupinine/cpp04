/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 10:12:20 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 10:12:20 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_WRONGANIMAL_H
#define CPP04_WRONGANIMAL_H

#include <string>

class WrongAnimal {
	protected:
		std::string m_type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal (WrongAnimal& cp);
		WrongAnimal& operator=(const WrongAnimal& cp);
		virtual void makeSound() const;
		std::string getType() const;
};


#endif //CPP04_WRONGANIMAL_H
