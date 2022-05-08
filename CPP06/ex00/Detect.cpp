/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Detect.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:50:11 by dim               #+#    #+#             */
/*   Updated: 2022/05/08 21:50:04 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Detect.hpp"

Detect::Detect()
: input(""), fFlag(false), dotFlag(false), isNan(false), isInf(false) {
	type = INIT_;
}
Detect::Detect(const std::string input) 
: input(input), fFlag(false), dotFlag(false), isNan(false), isInf(false) {
	type = INIT_;
}
Detect::Detect(const Detect& other) : input(other.input) {}
Detect& Detect::operator=(const Detect& other) {
	static_cast<void>(other);
	return (*this);
}
Detect::~Detect() {}

void	Detect::printChar()
{
	if (type == FLOAT_)
	{
		if (isNan || isInf) {
			std::cout << "char: impossible\n";
		} else if (f_ >= -128 && f_ <= 127) {
			if (f_ >= 32 && f_ <= 126)
				std::cout << "char: '" << static_cast<char>(f_) << "'\n";
			else
				std::cout << "char: Non displayable\n";
		} else {
			std::cout << "char: impossible\n";
		}
	} else
	{
		if (isNan || isInf) {
			std::cout << "char: impossible\n";
		} else if (d_ >= -128 && d_ <= 127) {
			if (d_ >= 32 && d_ <= 126)
				std::cout << "char: '" << static_cast<char>(d_) << "'\n";
			else
				std::cout << "char: Non displayable\n";
		} else {
			std::cout << "char: impossible\n";
		}
	}
}

void Detect::printInt()
{
	if (isNan == true || isInf == true)
	{
		std::cout << "int: impossible\n";
		return ;
	}
	if (type == FLOAT_)
	{
		if (f_ > std::numeric_limits<int>::max() \
			|| f_ < std::numeric_limits<int>::min())
			std::cout << "int: impossible\n";
		else
		{
			std::cout << "int: " << static_cast<int>(f_) << '\n';
			return ;
		}
	}
	if (type == DOUBLE_)
	{
		if (d_ > std::numeric_limits<int>::max() \
			|| d_ < std::numeric_limits<int>::min())
			std::cout << "int: impossible\n";
		else
		{
			std::cout << "int: " << static_cast<int>(d_) << '\n';
			return ;
		}
	}
}

void	Detect::printFloat()
{
	if (isNan == true)
	{
		std::cout << "float: ";
		if (minus == true)
			std::cout << '-';
		std::cout << "nanf\n";
		return ;
	}
	else if (isInf == true)
	{
		std::cout << "float: ";
		if (minus == true)
			std::cout << '-';
		std::cout << "inff\n";
		return ;
	}
	if (type == FLOAT_)
	{
		if (f_ == floor(f_) || (abs(f_) >= 100000 && abs(f_) < 1000000))
			std::cout << std::fixed << std::setprecision(1) << "float: " << f_ << "f\n";
		else
			std::cout << "float: " << f_ << "f\n";
	}
	if (type == DOUBLE_)
	{
		if (d_ > std::numeric_limits<float>::max() \
		|| d_ < (-1) * FLT_MAX)
			std::cout << "float: impossible\n";
		else
		{
			if (d_ == floor(d_)|| (abs(d_) >= 100000 && abs(d_) < 1000000))
				std::cout << std::fixed << std::setprecision(1) << "float: " << d_ << "f\n";
			else
				std::cout << "float: " << d_ << "f\n";
		}
	}
}

void	Detect::printDouble()
{
	if (isNan == true)
	{
		std::cout << "double: ";
		if (minus == true)
			std::cout << '-';
		std::cout << "nan\n";
		return ;
	}
	else if (isInf == true)
	{
		std::cout << "double: ";
		if (minus == true)
			std::cout << '-';
		std::cout << "inf\n";
		return ;
	}
	if (type == FLOAT_)
	{
		if (f_ == floor(f_) || (abs(f_) >= 100000 && abs(f_) < 1000000))
				std::cout << std::fixed << std::setprecision(1) << "double: " << f_ << "\n";
			else
				std::cout << "double: " << f_ << "\n";
	}
	else
	{
		if (d_ == floor(d_) || (abs(d_) >= 100000 && abs(d_) < 1000000))
				std::cout << std::fixed << std::setprecision(1) << "double: " << d_ << "\n";
		else
			std::cout << "double: " << d_ << "\n";
	}
}

void	Detect::typeChar(std::istringstream& iss)
{
	iss >> c_;
	if (iss.fail())
		throw std::invalid_argument("invalid argument");
	std::cout << "char: '" << c_ << "'\n";
	std::cout << "int: " << static_cast<int>(c_) << '\n';
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c_) << "f\n";
	std::cout << "double: " << static_cast<double>(c_) << "\n";
}

void	Detect::typeInt(std::istringstream& iss)
{
	iss >> i_;
	if (!iss.eof())
		throw std::invalid_argument("invalid argument");
	if (iss.fail())
		throw std::range_error("the type conversion is impossible <integer range>");
	if (i_ >= -128 && i_ <= 127)
	{
		if (i_ >= 32 && i_ <= 126)
			std::cout << "char: '" << static_cast<char>(i_) << "'\n";
		else
			std::cout << "char: Non displayable\n";
	} else {
		std::cout << "char: impossible\n";
	}
	std::cout << "int: " << i_ << '\n';
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i_) << "f\n";
	std::cout << "double: " << static_cast<double>(i_) << "\n";
}

void	Detect::typeFloat(std::istringstream& iss)
{
	iss >> f_;
	if (!iss.eof())
		throw std::invalid_argument("invalid argument");
	if (iss.fail())
		throw std::range_error("the type conversion is impossible <float range>");
	printChar();
	printInt();
	printFloat();
	printDouble();
}

void	Detect::typeDouble(std::istringstream& iss)
{
	iss >> d_;
	if (!iss.eof())
		throw std::invalid_argument("invalid argument");
	if (iss.fail())
		throw std::range_error("the type conversion is impossible <double range>");
	printChar();
	printInt();
	printFloat();
	printDouble();
}

void	Detect::toType(std::istringstream& iss)
{
	if (type == CHAR_)
	{
		typeChar(iss);
		return ;
	}
	switch (type) {
		case INT_ :
			typeInt(iss);
			break;
		case FLOAT_ :
			typeFloat(iss);
			break;
		case DOUBLE_ :
			typeDouble(iss);
			break;
		default :
			break;
	}
}

void	Detect::findAndReplace(std::string& newInput)
{
	size_t i = 0;
	if (newInput[0] == '-')
		minus = true;
	if ((i = newInput.find("nan")) != std::string::npos)
	{
		isNan = true;
		newInput.replace(i, 3, "0.0");
		i = newInput.find_first_not_of("+-0.0f");
		if (i != std::string::npos)
			throw std::invalid_argument("invalid argument");
	}
	else if ((i = newInput.find("inf")) != std::string::npos)
	{
		isInf = true;
		newInput.replace(i, 3, "0.0");
		i = newInput.find_first_not_of("+-0.0f");
		if (i != std::string::npos)
			throw std::invalid_argument("invalid argument");
	}
	if (newInput.find(".") != std::string::npos)
		dotFlag = true;
	if ((i = newInput.find("f")) != std::string::npos)
	{
		if (dotFlag == true && i == (newInput.length() - 1))
		{
			fFlag = true;
			newInput.replace(i, 1, "");
		}
		else
			throw std::invalid_argument("invalid argument");
	}
}

void	Detect::isOnlyNum(std::string input)
{
	if (type != CHAR_)
	{
		std::istringstream iss(input);
		double check;
		iss >> check;
		if (!iss.eof() || (iss.fail() && type == FLOAT_))
			throw std::invalid_argument("invalid argument");
		if (iss.fail())
		{
			if (check == std::numeric_limits<double>::max() \
				|| check == (-1) * DBL_MAX)
				throw std::range_error("the type conversion is impossible <double range>");
			else
				throw std::invalid_argument("invalid argument");
		}
	}
}

void	Detect::detectType()
{
	std::string newInput(input);
	if ((newInput.length() == 1 && !isdigit(newInput[0])) \
		|| (newInput.length() == 3 && newInput[0] == '\'' && newInput[2] == '\''))
	{
		if (newInput.length() == 3 && newInput[0] == '\'' && newInput[2] == '\'')
			newInput = newInput.substr(1, 1);
		type = CHAR_;
	}
	else
		findAndReplace(newInput);
	if (dotFlag == true || fFlag == true)
	{
		if (fFlag == false)
			type = DOUBLE_;
		else if (dotFlag == true && fFlag == true)
			type = FLOAT_;
	}
	else if (type != CHAR_)
		type = INT_;
	isOnlyNum(newInput);
	std::istringstream iss(newInput);
	toType(iss);
}