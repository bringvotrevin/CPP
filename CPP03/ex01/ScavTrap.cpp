/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 02:50:01 by dim               #+#    #+#             */
/*   Updated: 2022/04/27 16:08:01 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap Conversion constructor called" << std::endl;
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other): ClapTrap(other) // 부모생성자 인자로 자식 넣어주는건 됨, 반대는 안되는듯
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	setName(other.getName());
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_hitPoint != 0 && _energyPoint != 0)
	{
		std::cout << "[ATTACK] " << "ScavTrap < " << getName() << " > attacks < " << target
		<< " >, causing [ " << _attackDamage << " ] points of damage!" <<std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}