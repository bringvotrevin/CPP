/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 02:22:32 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 04:10:36 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "mstack Top  : " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "mstack size : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	for (int i = 10; i > 0; i--)
		mstack.push(i);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	std::cout << "ms begin    : " << *it << std::endl;
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	std::cout << "++it        : " << *it << std::endl;
	--it;
	std::cout << "--it        : " << *it << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "stack Top  : " << s.top() << std::endl;




	std::cout << "======list test======\n";
	std::list<int> li;

	li.push_back(5);
	li.push_back(17);

	std::cout << "li Top       : " << li.back() << std::endl;

	li.pop_back();

	std::cout << "li size      : " << li.size() << std::endl;

	li.push_back(3);
	li.push_back(5);
	li.push_back(737);
	for (int i = 10; i > 0; i--)
		li.push_back(i);
	li.push_back(0);
	std::list<int>::iterator l_it = li.begin();
	std::cout << "li begin     : " << *l_it << std::endl;
	std::list<int>::iterator l_ite = li.end();
	++l_it;
	std::cout << "++l_it       : " << *l_it << std::endl;
	--l_it;
	std::cout << "--l_it       : " << *l_it << std::endl;
	while (l_it != l_ite)
	{
		std::cout << *l_it << std::endl;
		++l_it;
	}
	return (0);
}
