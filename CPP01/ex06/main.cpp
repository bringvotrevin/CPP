/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:40:36 by dim               #+#    #+#             */
/*   Updated: 2022/04/24 22:17:18 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harlFilter.hpp"

std::string	lowerString(std::string level)
{
	size_t end = level.length();
	for (size_t j = 0, end = level.length(); j < end; j++)
		level[j] = std::tolower(level[j]);
	return (level);
}

int		main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "ERROR : execute with one argument like \"DEBUG\", \"INFO\", \"WARNING\", \"ERROR\" or anything you want" << std::endl;
		return (0);
	}
	std::string level = lowerString(argv[1]);
	Harl harl(level);
	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	
	return (0);
}