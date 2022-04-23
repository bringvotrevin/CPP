/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 19:02:15 by dim               #+#    #+#             */
/*   Updated: 2022/04/23 22:31:31 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WriteFile.hpp"
#include <iostream>
#include <fstream>

int		main(int argc, char *argv[])
{
	if (argc != 4 || *argv[2] == '\0')
	{
		std::cout << "ERROR: Put three arguments <filename> <s1> <s2>" << std::endl;
		return (0);
	}
	std::string	file_name = argv[1];
	std::ifstream	R_file(file_name);
	if (!R_file.is_open())
	{
		std::cout << "ERROR: Cannot open file" << std::endl;
		return (1);
	}
	std::ofstream	W_file(file_name + ".replace");
	if (!W_file.is_open())
	{
		std::cout << "ERROR: Cannot make " << file_name << ".replace" << std::endl;
		return (1);
	}
	write_file(argv, R_file, W_file);
	R_file.close();
	W_file.close();
	return (0);	
}
