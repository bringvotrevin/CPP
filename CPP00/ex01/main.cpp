/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:52:22 by dim               #+#    #+#             */
/*   Updated: 2022/04/29 21:41:42 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
// #include <sstream>

int	main(void)
{
	PhoneBook phonebook;
	std::string input;
	while (1)
	{
		std::cout << "WRITE A COMMAND (ADD / SEARCH / EXIT) : "; 
		std::getline(std::cin >> std::ws, input);
		if (std::cin.eof())
			return (0);
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else if (input == "EXIT")
			break;
		else
			std::cout << RED "### ERROR : WRONG COMMAND. TRY AGAIN ###" NC << std::endl;
	}
	return (0);
}
