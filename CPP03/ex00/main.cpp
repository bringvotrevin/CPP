/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:18:42 by dim               #+#    #+#             */
/*   Updated: 2022/04/26 02:34:26 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main()
{
	ClapTrap	a("a");
	ClapTrap	b("b");
	ClapTrap	c("c");

	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.getDamagePoint());
	std::cout << std::endl;
	a.attack("b");
	b.takeDamage(a.getDamagePoint());
	std::cout << std::endl;
	b.attack("a");
	a.takeDamage(b.getDamagePoint());
	std::cout << std::endl;
	c.attack("b");
	b.takeDamage(c.getDamagePoint());
	std::cout << std::endl;
	a.beRepaired(25);
	std::cout << std::endl;
	return (0);
}