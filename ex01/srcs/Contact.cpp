/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:52:37 by dim               #+#    #+#             */
/*   Updated: 2022/04/19 03:30:57 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

void	Contact::add_contact()
{
	std::cout << "========PLEASE FILL OUT THIS FORM=========" << std::endl;
	std::cout << "First Name     : ";
	std::cin >> this->first_name;
	std::cout << "Last Name      : ";
	std::cin >> this->last_name;
	std::cout << "Nick Name      : ";
	std::cin >> this->nick_name;
	std::cout << "Phone Number   : ";
	std::cin >> this->phone_number;
	std::cout << "Darkest Secert : ";
	std::cin >> this->darkest_secret;
	std::cout << "==================THANKS==================" << std::endl;
}

Contact::Contact()
{
	std::cout << "Contact Constructor called" << std::endl;
}
Contact::~Contact()
{
	std::cout << "Contact Desstructor called" << std::endl;
}
