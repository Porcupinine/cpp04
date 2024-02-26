/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/08 10:14:41 by laura         #+#    #+#                 */
/*   Updated: 2023/12/08 10:14:41 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP04_WRONGCAT_H
#define CPP04_WRONGCAT_H


class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		~WrongCat() override;
		WrongCat(const WrongCat& cp);
		WrongCat& operator=(const WrongCat& cp);
};


#endif //CPP04_WRONGCAT_H
