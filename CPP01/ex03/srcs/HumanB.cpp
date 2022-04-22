/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:27:49 by dim               #+#    #+#             */
/*   Updated: 2022/04/22 18:18:54 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"

void	HumanB::attack()
{
	if (weapon == NULL)
		return ;
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