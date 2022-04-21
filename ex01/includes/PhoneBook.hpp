/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:56:05 by dim               #+#    #+#             */
/*   Updated: 2022/04/20 16:47:40 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

# define NC "\e[0m"
# define RED "\e[0;31m"


class PhoneBook {

	public:
		void	add_contact();
		void	search_contact();
		PhoneBook();
	private:
		Contact contacts[8];
		int		contact_len;
		void	show_contact();
		void	show_list();
};

#endif