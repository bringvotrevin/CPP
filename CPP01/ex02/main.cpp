/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:38:51 by dim               #+#    #+#             */
/*   Updated: 2022/04/21 18:47:34 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "The memory address of " << "str       : " << &str << std::endl;
	std::cout << "The memory address of " << "stringPTR : " << stringPTR << std::endl;
	std::cout << "The memory address of " << "stringREF : " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "The value of " << "str       : " << str << std::endl;
	std::cout << "The value of " << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value of " << "stringREF : " << stringREF << std::endl;
	return (0);
}
