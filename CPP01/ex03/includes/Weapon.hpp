/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:26:16 by dim               #+#    #+#             */
/*   Updated: 2022/04/22 18:16:27 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class	Weapon
{
	public:
		const std::string	&getType();
		void				setType(std::string type);
		Weapon(std::string type);
		Weapon();
		~Weapon();
	private:
		std::string type;
};

#endif