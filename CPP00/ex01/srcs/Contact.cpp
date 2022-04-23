/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:52:37 by dim               #+#    #+#             */
/*   Updated: 2022/04/23 17:03:16 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

void	Contact::add_contact()
{
	std::cout << "========PLEASE FILL OUT THIS FORM=========" << std::endl;
	std::cout << "First Name     : ";
	std::getline(std::cin, this->first_name);
	if (std::cin.eof()) exit(0);
	std::cout << "Last Name      : ";
	std::getline(std::cin, this->last_name);
	if (std::cin.eof()) exit(0);
	std::cout << "Nickname       : ";
	std::getline(std::cin, this->nickname);
	if (std::cin.eof()) exit(0);
	std::cout << "Phone Number   : ";
	std::getline(std::cin, this->phone_number);
	if (std::cin.eof()) exit(0);
	std::cout << "Darkest Secert : ";
	std::getline(std::cin, this->darkest_secret);
	if (std::cin.eof()) exit(0);
	std::cout << "==================THANKS==================" << std::endl;
}

std::string	Contact::cut_str(std::string str)
{
	std::string ret;
	if (str.length() > 10)
	{
		ret = str.substr(0, 9);
		ret += ".";
	}
	else
		ret = str.substr(0, str.length());
	return (ret);
}

void	Contact::print_contact_list()
{
	std::cout << std::setw(10) << cut_str(first_name);
	std::cout << "│";
	std::cout << std::setw(10) << cut_str(last_name);
	std::cout << "│";
	std::cout << std::setw(10) << cut_str(nickname);
	std::cout << "│";
}

void	Contact::print_contact()
{
	std::cout << "First Name     : " << first_name << std::endl;
	std::cout << "Last Name      : " << last_name << std::endl;
	std::cout << "Nickname       : " << nickname << std::endl;
	std::cout << "Phone Number   : " << phone_number << std::endl;
	std::cout << "Darkest Secert : " << darkest_secret << std::endl;
}
