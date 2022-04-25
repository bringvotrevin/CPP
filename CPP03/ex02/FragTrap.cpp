/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 05:33:15 by dim               #+#    #+#             */
/*   Updated: 2022/04/26 05:44:41 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap Conversion constructor called" << std::endl;
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other)
{

}

FragTrap& FragTrap::operator=(const FragTrap& other)
{

}

FragTrap::~FragTrap()
{
	
}