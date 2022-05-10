/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:22:30 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:12:20 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int num)
{
	// std::cout << "Int constructor called" << std::endl;
	value = num << fractional_bit;
}

Fixed::Fixed(const float floating_num)
{
	// std::cout << "Float constructor called" << std::endl;
	value = roundf(floating_num * 256);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat() const
{
	float	fixed_to_float = value / 256.0f;
	return (fixed_to_float);
}

int		Fixed::toInt() const
{
	int		fixed_to_int = value >> 8;
	return (fixed_to_int);
}

int		Fixed::getRawBits() const
{
	return (value);
}

void	Fixed::setRawBits(int const value)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->value = value;
}

Fixed &Fixed::operator=(const Fixed &another)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	value = another.getRawBits();
	return (*this);
}

// 사칙연산자

const Fixed Fixed::operator+(Fixed const &another) const {
	return (Fixed((this->value / 256.0f) + (another.value / 256.0f)));
}

const Fixed Fixed::operator-(Fixed const &another) const 
{
	return (Fixed((this->value / 256.0f) - (another.value / 256.0f)));
}
const Fixed Fixed::operator*(Fixed const &another) const
{
	return (Fixed((this->value / 256.0f) * (another.value / 256.0f)));
}
const Fixed Fixed::operator/(Fixed const &another) const
{
	return (Fixed((this->value / 256.0f) / (another.value / 256.0f)));
}

// 비교연산자

bool	Fixed::operator>(Fixed const &another) const 
{
	return (value > another.value);
}
bool	Fixed::operator<(Fixed const &another) const
{
	return (value < another.value);
}
bool	Fixed::operator>=(Fixed const &another) const
{
	return (value >= another.value);
}
bool	Fixed::operator<=(Fixed const &another) const
{
	return (value <= another.value);
}
bool	Fixed::operator==(Fixed const &another) const
{
	return (value == another.value);
}
bool	Fixed::operator!=(Fixed const &another) const
{
	return (value != another.value);
}

// 증감연산자

Fixed &Fixed::operator++() 
{
	++value;
	return (*this);
}
Fixed &Fixed::operator--()
{
	--value;
	return (*this);
}
const Fixed Fixed::operator++(int) 
{
	Fixed tmp = *this;
	value++;
	return (tmp);
}
const Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	value--;
	return (tmp);
}

// 최대최소

Fixed &Fixed::min(Fixed& a1, Fixed& a2)
{
	return (a1 < a2 ? a1 : a2);
}
const Fixed &Fixed::min(const Fixed& a1, const Fixed& a2)
{
	return (a1 < a2 ? a1 : a2);
}
Fixed &Fixed::max(Fixed& a1, Fixed& a2)
{
	return (a1 > a2 ? a1 : a2);
}
const Fixed &Fixed::max(const Fixed& a1, const Fixed& a2)
{
	return (a1 > a2 ? a1 : a2);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
