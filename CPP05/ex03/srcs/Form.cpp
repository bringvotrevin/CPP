/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 02:37:10 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:24:53 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
: formname("defaultForm"), signGrade(150), executeGrade(150)
{
	isSigned = false;
}

Form::Form(std::string formname, \
			int const signGrade, int const executeGrade)
: formname(formname), signGrade(signGrade), executeGrade(executeGrade)
{
	if (signGrade < 1 || signGrade > 150)
	{
		std::cout << "< " << formname << " >" << " FORM'S SIGN ";
		signGrade < 1 ? \
			throw GradeTooHighException() : throw GradeTooLowException();
	}
	if (executeGrade < 1 || executeGrade > 150)
	{
		std::cout << "< " << formname << " >"  << " FORM'S EXECUTE ";
		executeGrade < 1 ? \
			throw GradeTooHighException() : throw GradeTooLowException();
	}
	isSigned = false;
}

Form::Form(const Form& other) 
: formname(other.formname), signGrade(other.signGrade), executeGrade(other.executeGrade)
{
	*this = other;
}

Form& Form::operator=(const Form& other) {
	isSigned = other.getIsSigned();
	return (*this);
}

Form::~Form() {}


Form::GradeTooHighException::GradeTooHighException() {}
Form::GradeTooLowException::GradeTooLowException() {}
Form::AlreadySignedFormException::AlreadySignedFormException() {}
Form::NotSignedException::NotSignedException() {}
Form::NoExecAuthorityException::NoExecAuthorityException() {}

const char *Form::GradeTooHighException::what() const throw() {
	return ("GRADE IS TOO HIGH");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("GRADE IS TOO LOW");
}

const char *Form::AlreadySignedFormException::what() const throw() {
	return ("THE FORM IS ALREADY SIGNED");
}

const char *Form::NotSignedException::what() const throw() {
	return ("THE FORM IS NOT SIGNED YET. MAKE THE FORM SIGNED FIRST");
}

const char *Form::NoExecAuthorityException::what() const throw() {
	return ("TOO LOW GRADE TO EXECUTE THE FORM");
}

std::string const& Form::getFormName() const {
	return (formname);
}

bool Form::getIsSigned() const {
	return (isSigned);
}

int Form::getSignGrade() const {
	return (signGrade);
}

int Form::getExecuteGrade() const {
	return (executeGrade);
}

void Form::beSigned(const Bureaucrat &bureaucrat) {

	if (signGrade < bureaucrat.getGrade() || isSigned == true)
	{
		std::cout << "< " << bureaucrat.getName() << " >" << " couldn't sign " \
					<< getFormName() << " because ";
		if (isSigned == true)
			throw AlreadySignedFormException();
		else
			throw GradeTooLowException();
	}
	isSigned = true;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (isSigned == false)
	{
		throw NotSignedException();
	}
	if (executeGrade < executor.getGrade())
	{
		std::cout << "< " << executor.getName() << " >" << " couldn't execute " \
					<< this->getFormName() << " because ";
		throw NoExecAuthorityException();
	}
}

std::ostream& operator<<(std::ostream &os, const Form& form) {
	os	<< "# Form          : " << form.getFormName() << '\n' \
		<< "# Status        : " << (form.getIsSigned() == true ? "Signed" : "Unsigned") << '\n' \
		<< "# Sign Grade    : " << form.getSignGrade() << '\n' \
		<< "# Execute Grade : " << form.getExecuteGrade() << std::endl;
	return (os);
}
