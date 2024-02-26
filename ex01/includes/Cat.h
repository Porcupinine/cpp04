/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 10:13:48 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 10:13:48 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_CAT_H
#define CPP04_CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal {
	private:
		Brain* m_catBrain;
	public:
		Cat();
		~Cat() override;
		Cat(const Cat& cp);
		Cat& operator=(const Cat& cp);
		void makeSound() const override;
};


#endif //CPP04_CAT_H
