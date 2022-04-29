/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:50:43 by dim               #+#    #+#             */
/*   Updated: 2022/04/30 03:31:14 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCreation", 145, 137), target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreation", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) 
: Form("ShrubberyCreation", 145, 137), target(other.getTarget()) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	static_cast<void>(other);
	return (*this);
}

std::string	const &ShrubberyCreationForm::getTarget() const
{
	return (target);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream	W_file(target + "_shrubbery");
	W_file << "                                                         . " << std::endl;
	W_file << "                                               .         ;   " << std::endl;
	W_file << "                  .              .              ;%     ;;    " << std::endl;
	W_file << "                    ,           ,                :;%  %;    " << std::endl;
	W_file << "                     :         ;                   :;%;'     .,    " << std::endl;
	W_file << "            ,.        %;     %;            ;        %;'    ,; " << std::endl;
	W_file << "              ;       ;%;  %%;        ,     %;    ;%;    ,%' " << std::endl;
	W_file << "               %;       %;%;      ,  ;       %;  ;%;   ,%;'  " << std::endl;
	W_file << "                ;%;      %;        ;%;        % ;%;  ,%;' " << std::endl;
	W_file << "                 `%;.     ;%;     %;'         `;%%;.%;' " << std::endl;
	W_file << "                  `:;%.    ;%%. %@;        %; ;@%;%' " << std::endl;
	W_file << "                     `:%;.  :;bd%;          %;@%;' " << std::endl;
	W_file << "                       `@%:.  :;%.         ;@@%;'    " << std::endl;
	W_file << "                         `@%.  `;@%.      ;@@%;          " << std::endl;
	W_file << "                           `@%%. `@%%    ;@@%;         " << std::endl;
	W_file << "                             ;@%. :@%%  %@@%;        " << std::endl;
	W_file << "                               %@bd%%%bd%%:;      " << std::endl;
	W_file << "                                 #@%%%%%:;; " << std::endl;
	W_file << "                                 %@@%%%::; " << std::endl;
	W_file << "                                 %@@@%(o);  . '          " << std::endl;
	W_file << "                                 %@@@o%;:(.,'          " << std::endl;
	W_file << "                             `.. %@@@o%::;          " << std::endl;
	W_file << "                                `)@@@o%::;          " << std::endl;
	W_file << "                                 %@@(o)::;         " << std::endl;
	W_file << "                                .%@@@@%::;          " << std::endl;
	W_file << "                                ;%@@@@%::;.           " << std::endl;
	W_file << "                               ;%@@@@%%:;;;.  " << std::endl;
	W_file << "                           ...;%@@@@@%%:;;;;,..    Gilo97 " << std::endl;
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &form)
{
	os	<< "# Form Name     : " << form.getFormName() << '\n' \
		<< "# Target        : " << form.getTarget() << '\n' \
		<< "# Status        : " << (form.getIsSigned() == true ? "Signed" : "Unsigned") << '\n' \
		<< "# Sign Grade    : " << form.getSignGrade() << '\n' \
		<< "# Execute Grade : " << form.getExecuteGrade() << std::endl;
	return (os);
}