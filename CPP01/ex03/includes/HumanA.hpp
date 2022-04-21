/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:24:52 by dim               #+#    #+#             */
/*   Updated: 2022/04/22 04:28:34 by dim              ###   ########.fr       */
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
	private:
		std::string		name;
		Weapon			&weapon;
		HumanA();
		~HumanA();
};

#endif