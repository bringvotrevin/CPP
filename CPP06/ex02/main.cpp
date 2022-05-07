/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 21:45:02 by dim               #+#    #+#             */
/*   Updated: 2022/05/08 04:36:07 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>

Base*	generate(void)
{
	Base *ret;
	std::srand(time(0));
	int i = (std::rand() % 3);
	switch (i)
	{
		case 0 :
			std::cout << "[ A ] is created\n";
			return (ret = new A);
		case 1 :
			std::cout << "[ B ] is created\n";
			return (ret = new B);
		case 2 :
			std::cout << "[ C ] is created\n";
			return (ret = new C);
		default :
			return (NULL);
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "The class is A\n";
	if (dynamic_cast<B*>(p))
		std::cout << "The class is B\n";
	if (dynamic_cast<C*>(p))
		std::cout << "The class is C\n";
}

void	identify(Base& p)
{
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "The class is A\n";
	} catch (const std::exception& e) {}
	try {
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "The class is B\n";
	} catch (const std::exception& e) {}
	try {
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "The class is C\n";
	} catch (const std::exception& e) {}
}

int	main()
{
	Base *base = generate();
	
	identify(base);
	identify(*base);
	
	delete (base);
	
	return (0);
}