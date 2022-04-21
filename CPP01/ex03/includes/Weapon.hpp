/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:26:16 by dim               #+#    #+#             */
/*   Updated: 2022/04/22 04:21:18 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class	Weapon
{
	public:
		std::string	&getType();
		void		setType(std::string type);
		Weapon(std::string type);
	private:
		std::string type;
		Weapon();
		~Weapon();
};

#endif