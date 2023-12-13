/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 22:10:38 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 22:10:38 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_ICHARACTER_H
#define CPP04_ICHARACTER_H

#include <string>

class AMateria;

class ICharacter {
	public:
		virtual ~ICharacter() = default;
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};


#endif //CPP04_ICHARACTER_H
