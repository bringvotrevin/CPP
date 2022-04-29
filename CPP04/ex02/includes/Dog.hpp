/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:07:59 by dim               #+#    #+#             */
/*   Updated: 2022/04/29 16:50:40 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP__
#define _DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private: 
	Brain *brain;
public:
	Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& rhs);
	~Dog();

	void	makeSound() const;

	void	changeIdea(const std::string& idea);
	void	sayIt() const;
};

#endif