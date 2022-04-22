/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:24:52 by dim               #+#    #+#             */
/*   Updated: 2022/04/22 18:41:51 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA
{
	public:
		void	attack();
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
	private:
		std::string		name;
		Weapon			&weapon;
};

#endif