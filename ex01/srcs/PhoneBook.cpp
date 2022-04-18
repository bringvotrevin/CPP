/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:55:55 by dim               #+#    #+#             */
/*   Updated: 2022/04/19 02:48:05 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook Constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook Destructor called" << std::endl;
}