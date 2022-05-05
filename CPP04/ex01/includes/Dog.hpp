/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:07:59 by dim               #+#    #+#             */
/*   Updated: 2022/05/05 19:50:15 by dim              ###   ########seoul.kr  */
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
	Dog& operator=(const Dog& other);
	~Dog();

	void	makeSound() const;

	void	changeIdea(const std::string& idea);
	void	sayIt() const;
};

#endif