/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 19:02:15 by dim               #+#    #+#             */
/*   Updated: 2022/04/22 19:49:30 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "ERROR: Put three arguments <filename> <s1> <s2>" << std::endl;
		return (0);
	}
	std::string	file_name = argv[1];
	std::ifstream	R_file(file_name);
	if (!R_file.is_open())
		return (1);

	std::ofstream	W_file(file_name + ".replace");
	
	return (0);	
}