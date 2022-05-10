/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 02:06:30 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:24:11 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP__
# define _FORM_HPP__
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
	class AlreadySignedFormException : public std::exception
	{
	public :
		AlreadySignedFormException();
		virtual const char *what() const throw();
	};
	class NotSignedException : public std::exception
	{
	public :
		NotSignedException();
		virtual const char *what() const throw();
	};
	class NoExecAuthorityException : public std::exception
	{
	public :
		NoExecAuthorityException();
		virtual const char *what() const throw();
	};

public:
	Form();
	Form(std::string formname, \
		int const signGrade, int const executeGrade);
	Form(const Form& other);
	Form& operator=(const Form& other);
	virtual ~Form();

	std::string const& getFormName() const;
	bool	getIsSigned() const;
	int getSignGrade() const;
	int getExecuteGrade() const;

	void	beSigned(const Bureaucrat &bureaucrat);

	virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream&	operator<<(std::ostream &os, const Form& form);

#endif
