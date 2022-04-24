/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:56:05 by dim               #+#    #+#             */
/*   Updated: 2022/04/24 14:47:52 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

# define NC "\e[0m"
# define RED "\e[0;31m"


class PhoneBook
{
	public:
		PhoneBook();
		
		void	add_contact();
		void	search_contact();
		
	private:
		Contact contacts[8];
		int		contact_len;
		void	show_contact();
		void	show_list();
};

#endif