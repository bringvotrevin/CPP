/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 02:06:30 by dim               #+#    #+#             */
/*   Updated: 2022/04/28 04:27:33 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_H__
# define _FORM_H__
#include <iostream>
#include <exception>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string formname;
	bool	isSigned;
	const int	signGrade;
	const int	executeGrade;

	class GradeTooHighException : public std::exception
	{
	public :
		GradeTooHighException();
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public :
		GradeTooLowException();
		virtual const char *what() const throw();
	};

public:
	Form();
	Form(std::string formname, \
		int const signGrade, int const executeGrade);
	Form(const Form& other);
	Form& operator=(const Form& other);
	~Form();

	std::string const& getFormName() const;
	bool	getIsSigned() const;
	int getSignGrade() const;
	int getExecuteGrade() const;

	void	setIsSigned(bool isSigned);
	void	beSigned(const Bureaucrat &bureaucrat);
};

std::ostream&	operator<<(std::ostream &os, const Form& form);

#endif