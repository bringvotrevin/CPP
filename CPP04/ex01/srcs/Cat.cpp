/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:07:51 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:16:46 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat()
: Animal("cat"), brain(NULL)
{
	std::cout << "Cat Default constructor called" << std::endl;
	brain = new Brain;
	brain->setIdeas("cat");
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	brain = new Brain();
	*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
	type = other.getType();
	*brain = *other.brain;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "meow,,," << std::endl;
}

void	Cat::changeIdea(const std::string& idea)
{
	brain->setIdeas(idea);
}

void	Cat::sayIt() const
{
	brain->openIdeas();
}
