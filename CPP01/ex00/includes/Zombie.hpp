/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:16:47 by dim               #+#    #+#             */
/*   Updated: 2022/04/21 17:55:23 by dim              ###   ########.fr       */
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
		void		announce();
		Zombie(std::string name);
		~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif