/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 05:33:34 by dim               #+#    #+#             */
/*   Updated: 2022/04/26 05:38:37 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_H__
#define _FRAGTRAP_H__
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	std::string _name;

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);
	~FragTrap();
};

#endif