/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Detect.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:50:11 by dim               #+#    #+#             */
/*   Updated: 2022/05/05 23:51:25 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Detect.hpp"

Detect::Detect()
: input(""), fFlag(false), dotFlag(false), isNan(false), isInf(false) {}
Detect::Detect(const std::string input) 
: input(input), fFlag(false), dotFlag(false), isNan(false), isInf(false) {}
Detect::Detect(const Detect& other) : input(other.input) {}
Detect& Detect::operator=(const Detect& other) {
	static_cast<void>(other);
	return (*this);
}
Detect::~Detect() {}

void	Detect::findAndReplace(std::string& newInput)
{
	size_t i = 0;
	if ((i = newInput.find("nan")) != std::string::npos)
	{
		isNan = true;
		newInput.replace(i, 3, "0.0");
	}
	else if ((i = newInput.find("inf")) != std::string::npos)
	{
		isInf = true;
		newInput.replace(i, 3, "0.0");
	}
	if (newInput.find(".") != std::string::npos)
		dotFlag = true;
	if ((i = newInput.find("f")) != std::string::npos)
	{
		fFlag = true;
		newInput.replace(i, 1, "");
	}
}

void	Detect::detectType()
{
	size_t	i = 0;
	std::string newInput(input);
	findAndReplace(newInput);
	std::cout << "newInput : " << newInput << std::endl;
	if (dotFlag == true || fFlag == true)
	{
		if (fFlag == false)
			type = DOUBLE_;
		else if (dotFlag == true && fFlag == true)
		{
			type = FLOAT_;
			i = newInput.find("f");
			newInput.replace(i, 1, "");
		}
	}
	
}