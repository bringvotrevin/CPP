/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 01:10:31 by dim               #+#    #+#             */
/*   Updated: 2022/04/30 04:59:12 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  Bureaucrat bu("bu", 150);
  Bureaucrat re("re", 140);
  Bureaucrat au("au", 100);
  Bureaucrat cr("cr", 50);
  Bureaucrat at("at", 5);
  Intern     someRandomIntern;

  Form *forms[3] = {
      someRandomIntern.makeForm("shrubbery creation", "ShrubberyTarget"),
      someRandomIntern.makeForm("robotomy request", "robotoTarget"),
      someRandomIntern.makeForm("presidential pardon", "presidentialTarget")};

  someRandomIntern.makeForm("shrubberry creation", "SR");

  std::cout << "[ No Sign Error Test ]\n\n";
  for (int i = 0; i < 3; i++) {
    bu.executeForm(*forms[i]);
    re.executeForm(*forms[i]);
    au.executeForm(*forms[i]);
    cr.executeForm(*forms[i]);
    at.executeForm(*forms[i]);
    std::cout << '\n';
  }

  std::cout << "\n[ Can you Sign Test ]\n\n";
  for (int i = 0; i < 3; i++) {
    bu.signForm(*forms[i]);
    re.signForm(*forms[i]);
    au.signForm(*forms[i]);
    cr.signForm(*forms[i]);
    at.signForm(*forms[i]);
    std::cout << '\n';
  }

  std::cout << "\n[ Can you Exec Test ]\n\n";
  for (int i = 0; i < 3; i++) {
    bu.executeForm(*forms[i]);
    re.executeForm(*forms[i]);
    au.executeForm(*forms[i]);
    cr.executeForm(*forms[i]);
    at.executeForm(*forms[i]);
    std::cout << '\n';
  }
  for (int i = 0; i < 3; i++) {
    delete forms[i];
  }
  return (0);
}