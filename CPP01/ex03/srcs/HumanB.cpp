/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:27:49 by dim               #+#    #+#             */
/*   Updated: 2022/04/22 04:33:19 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(/* arg */)
{
	
}

HumanB::HumanB(std::string name)
: name(name)
{
	
}

HumanB::HumanB()
{

}

HumanB::~HumanB()
{
	
}