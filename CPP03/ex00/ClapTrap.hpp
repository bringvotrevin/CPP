/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:18:39 by dim               #+#    #+#             */
/*   Updated: 2022/04/26 02:18:58 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_H__
#define _CLAPTRAP_H__
#include <iostream>
#include <string>

class ClapTrap
{
private: 
	std::string	_name;
	unsigned int	_hitPoint;
	unsigned int	_energyPoint;
	unsigned int	_attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& rhs);
	~ClapTrap();

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	unsigned int	getDamagePoint();
};

#endif