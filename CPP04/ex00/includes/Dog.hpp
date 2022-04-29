/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:07:59 by dim               #+#    #+#             */
/*   Updated: 2022/04/29 16:48:56 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP__
#define _DOG_HPP__

#include "Animal.hpp"

class Dog: public Animal
{
private: 

public:
	Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& rhs);
	~Dog();
	void	makeSound() const;
};

#endif