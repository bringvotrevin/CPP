/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:27:08 by dim               #+#    #+#             */
/*   Updated: 2022/04/22 04:33:31 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include "../includes/Weapon.hpp"

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon)
: name(name), weapon(weapon)
{
}

HumanA::HumanA()
{
	
}

HumanA::~HumanA()
{
	
}