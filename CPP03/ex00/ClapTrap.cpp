/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:18:36 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:13:16 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: _name("default"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap Conversion constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
: _name(other._name), _hitPoint(other._hitPoint),
_energyPoint(other._energyPoint), _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	_name = other._name;
	_hitPoint = other._hitPoint;
	_energyPoint = other._energyPoint;
	_attackDamage = other._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_hitPoint != 0 && _energyPoint != 0)
	{
		_energyPoint--;
		std::cout << "[ATTACK] " << "ClapTrap < " << _name << " > attacks < " << target
		<< " >, causing [ " << _attackDamage << " ] points of damage!" << '\n' \
		<< "         1 energy point used : " << "[ " << _energyPoint << " ] energy point left" << std::endl;
	}
	else
	{
		std::cout << "[ATTACK] " << " Fail : no energy point or no hit point " << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[TAKE DAMAGE] ";
	if (_hitPoint == 0)
	{
		std::cout << " he's already dead.. *" << std::endl;
		return ;
	}
	std::cout << "ClapTrap < " << _name << " > has taken [ " 
			<< amount << " ] points of damage!" <<std::endl;
	if (static_cast<int>(_hitPoint - amount) <= 0)
	{
		_hitPoint = 0;
		std::cout << "              * [ 0 ] hit points left. he's dead.. *" << std::endl;
	}
	else
	{
		_hitPoint -= amount;
		std::cout << "              * [ " << _hitPoint << " ] hit points left *" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoint != 0 && _energyPoint != 0)
	{
		_hitPoint += amount;
		_energyPoint--;
		std::cout << "[REPAIRED] " << "< " << _name << " > "
			<< "got back [ " << amount << " ] hit point and lose 1 enregy point" << '\n' \
			<< "          [ " << _energyPoint << " ] energy point left" << std::endl;
	}
	else
	{
		std::cout << "[REPAIRED] " << " Fail : no energy point or no hit point " << std::endl;
	}
}

unsigned int	ClapTrap::getDamagePoint()
{
	return (_attackDamage);
}
