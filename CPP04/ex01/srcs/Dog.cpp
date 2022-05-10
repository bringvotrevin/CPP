/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:07:57 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:16:43 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
: Animal("dog"), brain(NULL)
{
	std::cout << "Dog Default constructor called" << std::endl;
	brain = new Brain("dog");
}

Dog::Dog(const Dog& other)
: Animal(other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	brain = new Brain();
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	type = other.getType();
	*brain = *other.brain;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "woof woof!!!!!!!!!!!!!!!!!!" << std::endl;
}

void	Dog::changeIdea(const std::string& idea)
{
	brain->setIdeas(idea);
}

void	Dog::sayIt() const
{
	brain->openIdeas();
}
