/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 22:05:50 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 22:05:50 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_AMATERIA_H
#define CPP04_AMATERIA_H

#include <string>
#include "ICharacter.h"

class AMateria {
	protected:
		std::string m_type;

	public:
		AMateria(std::string  type);
		~AMateria() = default;
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif //CPP04_AMATERIA_H
