/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 02:06:10 by dim               #+#    #+#             */
/*   Updated: 2022/04/27 16:35:42 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain()
{
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
			idx = i + 1;
	}

	switch(idx)
	{
		case 1 :
			this->debug();
		case 2 :
			this->info();
		case 3 :
			this->warning();
		case 4 :
			this->error();
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl ;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. " << '\n' << "I really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. " << '\n' << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. " << '\n' << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

Harl::Harl(std::string level) : level(level) {}

Harl::~Harl() {}