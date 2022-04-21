/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:07:06 by dim               #+#    #+#             */
/*   Updated: 2022/04/21 18:35:24 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void	Zombie::announce()
{
	std::cout << zombiename << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	zombiename = name;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << zombiename << " : I'll be back..." << std::endl;
}