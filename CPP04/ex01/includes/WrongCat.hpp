/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 21:58:26 by dim               #+#    #+#             */
/*   Updated: 2022/04/26 22:06:44 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGCAT_H__
#define _WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private: 

public:
	WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat& rhs);
	~WrongCat();
	void	makeSound() const;
};

#endif