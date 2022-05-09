/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:47:53 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 04:04:49 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>
#include <exception>

#define CAPACITY 10000
int main(void) {
  {
    std::cout << "=============== [ Custom Test ] =============\n\n";
    int *arr; 
    arr = new int[CAPACITY];
    for (int i = 0; i < 10; i++)
    {
    	arr[i] = i + i;
    }
    for (int i = 10; i < CAPACITY; i++) {
      arr[i] = 10;
    } 
    std::vector<int>           vect(arr, arr + CAPACITY);
    Span                                span(10000);
    try {
      span.addNumber(vect.begin(), vect.end());
      std::cout << span.shortestSpan() << std::endl;
      std::cout << span.longestSpan() << std::endl;
    } catch (const std::exception &e) {
      std::cout << e.what() << std::endl;
    }
    std::cout << "=============== [ exception Test ] =============\n\n";
    try {
      Span onespan(1);
      onespan.addNumber(32);
      onespan.shortestSpan();
    } catch (const std::exception &e) {
      std::cout << e.what() << std::endl;
    }
    std::cout << "=============== [   dup Test   ] =============\n\n";
    Span dupSpan = span;
    std::cout << dupSpan.shortestSpan() << std::endl;
    std::cout << dupSpan.longestSpan() << std::endl;
  }
  {
    std::cout << "=============== [ Subject Test ] =============\n\n";
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  }
  return (0);
}
