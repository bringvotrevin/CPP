/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 02:06:10 by dim               #+#    #+#             */
/*   Updated: 2022/04/27 16:27:47 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	for (size_t j = 0, end = level.length(); j < end; j++)
	level[j] = std::tolower(level[j]);
	
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
	
	for (size_t i = 0, end = levels->length(); i < end; i++)
	{
		if (level == levels[i])
		{
			void (Harl::*explode)(void) = makecomplain[i];
			(this->*explode)();
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]   ";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]    ";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] ";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]   ";
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl() {}

Harl::~Harl() {}