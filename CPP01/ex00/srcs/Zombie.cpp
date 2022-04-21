/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:18:09 by dim               #+#    #+#             */
/*   Updated: 2022/04/21 18:27:23 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void	Zombie::announce()
{
	std::cout << zombiename << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	zombiename = name;
}

Zombie::~Zombie()
{
	std::cout << zombiename << " : I'll be back..." << std::endl;
}