/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 22:09:05 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 22:09:05 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_CURE_H
#define CPP04_CURE_H

#include <string>
#include "AMateria.h"

class Cure : public AMateria {
public:
	Cure();
	~Cure();
	Cure(const Cure& cp);
	Cure& operator=(const Cure& cp);
	AMateria* clone() const override;
	void use(ICharacter &target) override;
};


#endif //CPP04_CURE_H
