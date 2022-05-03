/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 00:59:29 by dim               #+#    #+#             */
/*   Updated: 2022/05/04 00:23:10 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern& other) { static_cast<void>(other); }

Intern& Intern::operator=(const Intern& other)
{
	static_cast<void>(other);
	return (*this);
}

Intern::~Intern() {}

Intern::NoMatchingFormName::NoMatchingFormName() {}

const char *Intern::NoMatchingFormName::what() const throw()
{
	return ("cannot find matching form");
}

Form	*Intern::makeForm(std::string const &formName, std::string const &target) 
{
	std::string formList[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	try
	{
		for (int i = 0; i < 3; i++)
		{
			if (formName == formList[i])
			{
				Form *form;
				switch (i)
				{
					case 0 :
						form = new ShrubberyCreationForm(target);
						std::cout << "Intern creates " << form->getFormName() << std::endl;
						break;
					case 1 :
						form = new RobotomyRequestForm(target);
						std::cout << "Intern creates " << form->getFormName() << std::endl;
						break;
					case 2 :
						form = new PresidentialPardonForm(target);
						std::cout << "Intern creates " << form->getFormName() << std::endl;
						break;
				}
				return (form);
			}
		}
		throw (NoMatchingFormName());
	}
	catch(const std::exception& e)
	{
		std::cout << "[ Intern ] " << e.what() << std::endl;
	}
	return (NULL);
}
