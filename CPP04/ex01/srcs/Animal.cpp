/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 17:40:15 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:16:58 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
: type("animal")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const std::string type)
: type(type)
{
	std::cout << "Animal Conversion constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
: type(other.type)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	type = other.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

std::string	const&Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "(Silent)" << std::endl;
}

void	Animal::sayIt() const {}
