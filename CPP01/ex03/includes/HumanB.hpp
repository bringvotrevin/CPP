/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:25:44 by dim               #+#    #+#             */
/*   Updated: 2022/04/22 18:16:54 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class	HumanB
{
	public:
		void	attack();
		void	setWeapon(Weapon &weapon);
		HumanB(std::string name);
		HumanB();
		~HumanB();
	private:
		std::string	name;
		Weapon		*weapon;
};

#endif