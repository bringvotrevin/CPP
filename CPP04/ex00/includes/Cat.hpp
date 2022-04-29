/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:07:54 by dim               #+#    #+#             */
/*   Updated: 2022/04/29 16:49:25 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP__
#define _CAT_HPP__

#include "Animal.hpp"

class Cat: public Animal
{
private: 

public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& rhs);
	~Cat();
	void	makeSound() const;
};

#endif