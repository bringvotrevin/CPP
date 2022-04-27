/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 01:10:31 by dim               #+#    #+#             */
/*   Updated: 2022/04/28 01:58:23 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
  std::cout << "\n==============[ Constructor Exception Test "
               "]============="
            << std::endl;
  try {
    std::cout << "< Too High Case >\n";
    Bureaucrat c("dd", 0);
    std::cout << c << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << '\n';
  }
  try {
    std::cout << "< Too Low Case >\n";
    Bureaucrat d("ddd", 151);
    std::cout << d << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << '\n';
  }

  std::cout
      << "============================================================\n"
      << std::endl;
  std::cout << "\n==============[ increament, decrement Test ]============="
            << std::endl;
  Bureaucrat c("ddd", 1);
  Bureaucrat d("ddd", 150);

  std::cout << c << std::endl;
  std::cout << d << std::endl;
  try {
    std::cout << "< Too High Case >\n";
    c.increaseGrade();
    std::cout << c << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << '\n';
  }
  try {
    std::cout << "< Too Low Case >\n";
    d.decreaseGrade();
    std::cout << d << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << '\n';
  }

  std::cout << "========================================================\n"
            << std::endl;

  std::cout << "[ Normal Test ]\n";
  try {
    Bureaucrat a("Aa", 3);

    std::cout << a << std::endl;
    a.increaseGrade();
    std::cout << a << std::endl;
    a.increaseGrade();
    std::cout << a << std::endl;
    a.increaseGrade();
    std::cout << a << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << '\n';
  }
  try {
    Bureaucrat b("b", 148);

    std::cout << b << std::endl;
    b.decreaseGrade();
    std::cout << b << std::endl;
    b.decreaseGrade();
    std::cout << b << std::endl;
    b.decreaseGrade();
    std::cout << b << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << '\n';
  }

  return 0;
}