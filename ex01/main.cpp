/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:52:22 by dim               #+#    #+#             */
/*   Updated: 2022/04/20 16:47:59 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"
#include "includes/Contact.hpp"

int	main(void)
{
	PhoneBook phonebook;
	std::string input;
	while (1)
	{
		std::cout << "WRITE A COMMAND (ADD / SEARCH / EXIT) : "; 
		std::cin >> input;
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