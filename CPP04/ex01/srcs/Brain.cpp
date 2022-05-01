/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 19:57:31 by dim               #+#    #+#             */
/*   Updated: 2022/04/30 20:28:40 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	setIdeas("\0");
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const std::string &idea)
{
	setIdeas(idea);
	std::cout << "Brain Conversion constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain& other)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

void	Brain::setIdeas(const std::string& idea)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = idea;
}

void	Brain::openIdeas()
{
	std::cout << "Thinking... [ ";
	for (int i = 0; i < 100; i++)
	{
		std::cout << ideas[i];
		if (i < 99)
			std::cout << ",";
	}
	std::cout << " ]" << std::endl;
}