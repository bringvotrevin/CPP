/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:55:55 by dim               #+#    #+#             */
/*   Updated: 2022/04/22 17:36:19 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>
#include <iomanip>

void	PhoneBook::add_contact()
{
	contacts[contact_len % 8].add_contact();
	contact_len++;
}

void	PhoneBook::show_list()
{
	int		i;
	int		index;
	int		start;

	start = (contact_len < 8 ? 0 : (contact_len % 8));
	index = 1;
	while (start < (contact_len < 8 ? contact_len : 8))
	{
		std::cout << "│";
		std::cout << std::setw(10) << index;
		std::cout << "│";
		contacts[start].print_contact_list();
		std::cout << std::endl;
		start++;
		index++;
	}
	if (contact_len > 8)
	{
		i = 0;
		while (i < (contact_len % 8))
		{
			std::cout << "│";
			std::cout << std::setw(10) << index;
			std::cout << "│";
			contacts[i++].print_contact_list();
			std::cout << std::endl;
			index++;
		}
	}
	std::cout << std::setw(45) << " ───────────────────────────────────────────" << std::endl;
}
void	PhoneBook::show_contact()
{
	int	input_index;
	int	i;

	std::cout << std::setw(45) << " ───────────────────────────────────────────" << std::endl;
	std::cout << "│";
	std::cout << std::setw(10) <<  "  index  ";
	std::cout << "│";
	std::cout << std::setw(10) << "first name";
	std::cout << "│";
	std::cout << std::setw(10) << "last name";
	std::cout << "│";
	std::cout << std::setw(10) << " nickname ";
	std::cout << "│" << std::endl;
	std::cout << std::setw(45) << " ───────────────────────────────────────────" << std::endl;
	show_list();
	std::cout << "PUT INDEX NUMBER FOR MORE INFORMATION : ";
	std::cin >> input_index;
	if (std::cin.eof())
		exit(0);
	while (!std::cin ||	input_index > (contact_len <= 8 ? contact_len : 8) \
			|| input_index == 0 || std::cin.get() != '\n')
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << RED "###  ERROR: WRONG INPUT  ###" NC << std::endl;
		std::cout << "PUT INDEX NUMBER FOR MORE INFORMATION : ";
		std::cin >> input_index;
		if (std::cin.eof())
			exit(0);
	}
	i = (contact_len <= 8 ? (input_index - 1) \
		: (((contact_len % 8 - 1) + input_index) % 8));
	contacts[i].print_contact();
}

void	PhoneBook::search_contact()
{
	if (contact_len != 0)
		show_contact();
	else
	{
		std::cout << RED "### ERROR : EMPTY CONTACT LIST  ###" << std::endl;
		std::cout << "###         ADD CONTACT FIRST   ###" NC << std::endl;
	}
}

PhoneBook::PhoneBook()
{
	this->contact_len = 0;
}
