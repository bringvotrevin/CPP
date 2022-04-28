/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 22:54:22 by dim               #+#    #+#             */
/*   Updated: 2022/04/29 03:20:19 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_H__
#define _BUREAUCRAT_H__
#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat 
{
private: 
	std::string name;
	int grade;

	class GradeTooHighException : public std::exception
	{
	private:
		int grade;

	public :
		GradeTooHighException(int grade);
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	private :
		int grade;

	public :
		GradeTooLowException(int grade);
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