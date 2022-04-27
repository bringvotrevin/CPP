/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:27:49 by dim               #+#    #+#             */
/*   Updated: 2022/04/27 15:55:46 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void	HumanB::attack()
{
	if (weapon == NULL)
	{
		std::cout << name << " has no weapon.. cannot attack"<< std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::HumanB(std::string name)
: name(name), weapon(NULL) {}

HumanB::HumanB() {}

HumanB::~HumanB() {}