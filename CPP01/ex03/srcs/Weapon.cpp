/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:28:28 by dim               #+#    #+#             */
/*   Updated: 2022/04/22 04:33:55 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

std::string	&Weapon::getType()
{
	return (type);
}

void		Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon()
{

}

Weapon::~Weapon()
{
	
}