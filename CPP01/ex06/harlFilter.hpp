/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 02:06:31 by dim               #+#    #+#             */
/*   Updated: 2022/04/24 22:18:39 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_HPP
#define HARLFILTER_HPP
#include <iostream>
#include <string>
	
class Harl
{
	public:
		Harl(std::string level);
		~Harl();
		
		void	complain(std::string level);

	private:
		std::string	_level;
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif