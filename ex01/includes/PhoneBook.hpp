/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:56:05 by dim               #+#    #+#             */
/*   Updated: 2022/04/19 23:54:22 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {

	public:
		PhoneBook();
		~PhoneBook();
		void	add_contact();
		void	search_contact();
	private:
		Contact contacts[8];
		int		contact_len;
		void	show_contact();
		void	show_list();
};

#endif