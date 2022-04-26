/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:18:36 by dim               #+#    #+#             */
/*   Updated: 2022/04/26 17:20:49 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: _name("default"), _hitPoint(10), _energyPoint(10), _attackDamage(5)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(5)
{
	std::cout << "ClapTrap Conversion constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
: _name(other._name), _hitPoint(other._hitPoint),
_energyPoint(other._energyPoint), _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	_name = other._name;
	_hitPoint = other._hitPoint;
	_energyPoint = other._energyPoint;
	_attackDamage = other._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (_hitPoint != 0 && _energyPoint != 0)
	{
		std::cout << "[ATTACK] " << "ClapTrap < " << _name << " > attacks < " << target
		<< " >, causing [ " << _attackDamage << " ] points of damage!" <<std::endl;
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
			<< _attackDamage << " ] points of damage!" <<std::endl;
	if (static_cast<int>(_hitPoint - amount) <= 0)
	{
		_hitPoint = 0;
		std::cout << "              * [ 0 ] energy points left. he's dead.. *" << std::endl;
	}
	else
	{
		_hitPoint -= amount;
		std::cout << "              * [ " << _hitPoint << " ] energy points left *" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoint += amount;
	std::cout << "[REPAIRED] " << "< " << _name << " > "
		<< "got back [ " << amount << " ] energy" << std::endl;
}

unsigned int	ClapTrap::getDamagePoint() const
{
	return (_attackDamage);
}

unsigned int	ClapTrap::getHitPoint() const
{
	return (_hitPoint);
}

unsigned int	ClapTrap::getEnergyPoint() const
{
	return (_energyPoint);
}

void	ClapTrap::setName(const std::string &name)
{
	_name = name;
}

std::string	const&ClapTrap::getName() const
{
	return (_name);
}