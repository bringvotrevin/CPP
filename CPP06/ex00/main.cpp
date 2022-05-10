/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:52:56 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:50:39 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Detect.hpp"

int		ft_trim(std::string& input)
{
	size_t start = 0;
	size_t end = 0;

	start = input.find_first_not_of(" \t\v\n");
	end = input.find_last_not_of(" \t\v\n");
	if (start == std::string::npos && end == std::string::npos)
		return (1);
	input = input.substr(start, end - start + 1);
	return (0);
}

int		main(int argc, char *argv[])
{
	if (argc != 2  || *argv[1] == '\0')
	{
		std::cout << "ERROR : EXECUTE WITH ONE ARGUMENT" << std::endl;
		return (0);
	}
	std::string input(argv[1]);
	if (ft_trim(input))
	{
		std::cout << "ERROR : WRONG ARGUMENT" << std::endl;
		return (0);
	}
	try {
	Detect detect(input);
	detect.detectType();
	}
	catch (const std::exception& e) {
		std::cout << "ERROR: " << e.what() << std::endl;
	}
	return (0);
}
