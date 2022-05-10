/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 01:10:31 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:23:01 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
   try {
    std::cout << "\n==============[ Constructor Error Test ]==============\n\n";
    Form a("a", 0, 0);
    Form b("b", 160, 0);

    std::cout << a << '\n' << b << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << '\n';
  }
  std::cout << "\n===================[ Main Test ]====================\n\n";

  std::cout << "----[ Before Test ]----\n";
  Bureaucrat albert("Albert", 3);
  Form       paper("paper", 1, 1);
  Form       taxform("taxform", 4, 4);

  std::cout << albert << '\n';
  std::cout << paper << '\n';
  std::cout << taxform << '\n';

  std::cout << "\n----[ Start Test ]----\n";
  try {
    albert.signForm(taxform);
  } catch (const std::exception &e) {
    std::cout << e.what() << '\n';
  }
  std::cout << taxform << '\n';

  try {
    albert.signForm(paper);
  } catch (const std::exception &e) {
    std::cout << e.what() << '\n';
  }
  std::cout << paper << '\n';

  albert.increaseGrade();
  std::cout << albert << "\n\n";
  
  try {
    albert.signForm(paper);
  } catch (const std::exception &e) {
    std::cout << e.what() << '\n';
  }
  std::cout << paper << '\n';

  albert.increaseGrade();
  std::cout << albert << "\n\n";

  try {
    albert.signForm(paper);
  } catch (const std::exception &e) {
    std::cout << e.what() << '\n';
  }
  std::cout << paper << std::endl;

  return 0;
}
