/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:40:36 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:10:00 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string	lowerString(std::string level)
{
	for (size_t j = 0, end = level.length(); j < end; j++)
		level[j] = std::tolower(level[j]);
	return (level);
}

int		main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "ERROR : execute with only one argument like \"DEBUG\", \"INFO\", \"WARNING\", \"ERROR\" or anything you want" << std::endl;
		return (0);
	}
	std::string level = lowerString(argv[1]);
	Harl harl(level);
	harl.complain();
	return (0);
}
