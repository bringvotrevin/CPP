/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:18:42 by dim               #+#    #+#             */
/*   Updated: 2022/04/28 20:08:57 by dim              ###   ########seoul.kr  */
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