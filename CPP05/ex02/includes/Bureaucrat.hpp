/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 22:54:22 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:24:13 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP__
#define _BUREAUCRAT_HPP__
#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat 
{
private: 
	const std::string name;
	int grade;

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
		virtual const char *what() const throw(); //이 함수 내에서는 thorow하지 않음
	};
	
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~Bureaucrat();

	std::string const &getName() const;
	int getGrade() const;
	void	increaseGrade();
	void	decreaseGrade();

	void	signForm(Form &form);

	void	executeForm(Form const &form);
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat& bureaucrat);

#endif
