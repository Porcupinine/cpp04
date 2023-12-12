/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 22:08:52 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 22:08:52 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_ICE_H
#define CPP04_ICE_H

#include "AMateria.h"

class Ice : public AMateria {
public:
	Ice();
	~Ice() = default;
	Ice(const Ice &cp) = default;
	Ice &operator=(const Ice &cp) = default;
	AMateria *clone() const override;
	void use(ICharacter &target) override;
};
#endif //CPP04_ICE_H