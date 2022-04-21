/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:15:11 by dim               #+#    #+#             */
/*   Updated: 2022/04/21 18:01:10 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Zombie.hpp"

int	main()
{
	Zombie	*zombieptr;

	zombieptr = newZombie("heapzombie");
	randomChump("stackzombie");
	zombieptr->announce();
	delete zombieptr;
	return (0);
}