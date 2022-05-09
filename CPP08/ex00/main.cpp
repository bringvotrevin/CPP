/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:49:38 by dim               #+#    #+#             */
/*   Updated: 2022/05/09 22:52:17 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <exception>
#include <list>
#include <vector>
#include <deque>

int main()
{
	std::list<int> l;
	std::vector<int> v;
	std::deque<int> d;

	for (int i = 0; i < 10; i++)
	{
		l.push_back(i);
		v.push_back(i);
		d.push_back(i);
	}
	std::cout << "find even num in l : \n";
	try
	{
		for (int i = 2; i < 10; i += 2)
		{
			std::cout << *easyfind(l, i) << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(l, 123);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(v, 456);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		easyfind(d, 10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
