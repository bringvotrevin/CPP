/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:08:16 by dim               #+#    #+#             */
/*   Updated: 2022/04/21 18:36:04 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombie[i].setName(name + std::to_string(i + 1));
	}
	return (zombie);
}