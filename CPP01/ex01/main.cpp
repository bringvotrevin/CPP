/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:28:17 by dim               #+#    #+#             */
/*   Updated: 2022/04/27 15:43:18 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int		main(void)
{
	int		zombie_num = 10;
	Zombie	*zombies = zombieHorde(zombie_num, "Zombie");

	for (int i = 0; i < zombie_num; i++)
	{
		zombies[i].announce();
	}
	delete []zombies;
	return (0);
}