/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 02:06:10 by dim               #+#    #+#             */
/*   Updated: 2022/04/24 22:23:01 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harlFilter.hpp"

// std::string	Harl::lowerString(std::string level)
// {
// 	size_t end = level.length();
// 	for (size_t j = 0, end = level.length(); j < end; j++)
// 		level[j] = std::tolower(level[j]);
// 	return (level);
// }

void	Harl::complain(std::string level)
{
	void	(Harl::*makecomplain[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error 
	};
	std::string levels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};
	
	int	idx = 0;
	for (size_t i = 0, end = levels->length(); i < end; i++)
	{
		if (level == levels[i])
			idx = i;
	}

	switch(idx)
	{
		case 1 :
			(this->*explode)();
		case 2 :

		case 3 :

		case 4 :

		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void	Harl::debug(void)
{
	std::cout << "[debug]   ";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[info]    ";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[warning] ";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[error]   ";
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl(std::string level) : _level(level) {}

Harl::~Harl() {}