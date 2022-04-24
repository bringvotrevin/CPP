/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 02:06:31 by dim               #+#    #+#             */
/*   Updated: 2022/04/24 02:12:12 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
	public:
		void	complain(std::string level);
		Harl();
		~Harl();
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif