/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 10:35:19 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 10:35:19 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_BRAIN_H
#define CPP04_BRAIN_H

#include <string>

class Brain {
public:
	std::string m_ideas[100];
	Brain();
	~Brain();
	Brain(Brain& cp);
	Brain& operator=(const Brain& cp);
};


#endif //CPP04_BRAIN_H
