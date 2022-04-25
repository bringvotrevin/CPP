/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 02:06:31 by dim               #+#    #+#             */
/*   Updated: 2022/04/25 11:07:47 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>
	
class Harl
{
	public:
		Harl(std::string level);
		~Harl();
		
		void	complain(void);

	private:
		std::string	level;
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif