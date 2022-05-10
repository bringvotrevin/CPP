/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 21:35:25 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:24:48 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm()
: Form("RobotomyRequest", 72, 45), target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("RobotomyRequest", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) 
: Form("RobotomyRequest", 72, 45), target(other.getTarget()) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	static_cast<void>(other);
	return (*this);
}

std::string	const &RobotomyRequestForm::getTarget() const
{
	return (target);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "\ndrilling@@@@@@@@@@@@@@@@@@@@......" << std::endl;
	std::srand(time(0));
	if (std::rand() % 2)
		std::cout << "=>  < " << target << " >" << " has been robotomized successfully" << std::endl;
	else
		std::cout << "=>  < " << target << " >" << " has failed to be robotomized" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &form)
{
	os	<< "# Form Name     : " << form.getFormName() << '\n' \
		<< "# Target        : " << form.getTarget() << '\n' \
		<< "# Status        : " << (form.getIsSigned() == true ? "Signed" : "Unsigned") << '\n' \
		<< "# Sign Grade    : " << form.getSignGrade() << '\n' \
		<< "# Execute Grade : " << form.getExecuteGrade() << std::endl;
	return (os);
}
