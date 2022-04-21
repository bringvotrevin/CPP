/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:25:44 by dim               #+#    #+#             */
/*   Updated: 2022/04/22 04:27:29 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class	HumanB
{
	public:
		void	attack();
		void	setWeapon(/* arg */);
		HumanB(std::string name);
	private:
		std::string	name;
		Weapon		*weapon;
		HumanB();
		~HumanB();
};

#endif