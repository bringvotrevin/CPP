/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:35:55 by dim               #+#    #+#             */
/*   Updated: 2022/04/27 04:14:30 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_H__
# define _ANIMAL_H__
#include <iostream>
#include <string>

class Animal {
protected: 
	std::string	type;
public:
	Animal();
	Animal(const std::string type);
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	virtual ~Animal();

	std::string	const&getType() const;
	virtual void	makeSound() const;

	virtual void	sayIt() const;
};

#endif