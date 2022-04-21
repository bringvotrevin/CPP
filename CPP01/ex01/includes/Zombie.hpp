/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:06:02 by dim               #+#    #+#             */
/*   Updated: 2022/04/21 18:35:18 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	private:
		std::string zombiename;
	public:
		void	announce();
		void	setName(std::string name);
		Zombie();
		~Zombie();
};

Zombie	*zombieHorde(int N, std::string name);

#endif