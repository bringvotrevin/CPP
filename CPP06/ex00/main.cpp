/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:52:56 by dim               #+#    #+#             */
/*   Updated: 2022/05/06 05:52:42 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Detect.hpp"

void	ft_trim(std::string& input)
{
	size_t start = 0;
	size_t end = 0;

	start = input.find_first_not_of(" \t\v\n");
	end = input.find_last_not_of(" \t\v\n");
	if (start != std::string::npos)
		input = input.substr(start, end - start + 1);
}

int		main(int argc, char *argv[])
{
	if (argc != 2  || *argv[1] == '\0')
	{
		std::cout << "ERROR : EXECUTE WITH ONE ARGUMENT" << std::endl;
		return (0);
	}
	std::string input(argv[1]);
	ft_trim(input);
	if (input == "")
	{
		std::cout << "ERROR : EXECUTE WITH ONE ARGUMENT" << std::endl;
		return (0);
	}
	try {
	Detect detect(input);
	detect.detectType();
	}
	catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}