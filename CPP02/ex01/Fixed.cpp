/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:22:30 by dim               #+#    #+#             */
/*   Updated: 2022/04/27 21:27:35 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	value = num << fractional_bit;
}

Fixed::Fixed(const float floating_num)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(floating_num * 256);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat() const
{
	float	fixed_to_float = value / 256.0f;
	return (fixed_to_float);
}

int		Fixed::toInt() const
{
	int		fixed_to_int = value >> fractional_bit;
	return (fixed_to_int);
}

Fixed &Fixed::operator=(const Fixed &another)
{
	std::cout << "Copy assignment operator called" << std::endl;
	value = another.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	return (value);
}

void	Fixed::setRawBits(int const value)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = value;
}