/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 00:58:45 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:25:01 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include <iostream>

class Intern
{
private:
	class NoMatchingFormName : public std::exception
	{
	public :
		NoMatchingFormName();
		virtual const char *what() const throw();
	};
public:
	Intern();
	Intern(const Intern& other);
	Intern& operator=(const Intern& other);
	~Intern();

	Form	*makeForm(std::string const &formName, std::string const &target);
};

#endif
