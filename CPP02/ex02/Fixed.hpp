/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:22:46 by dim               #+#    #+#             */
/*   Updated: 2022/04/28 15:26:34 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class Fixed
{
	public :
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int num);
		Fixed(const float floating_num);
		~Fixed();

		Fixed &operator=(const Fixed &another);
		const Fixed operator+(Fixed const &another) const;
		const Fixed operator-(Fixed const &another) const;
		const Fixed operator*(Fixed const &another) const;
		const Fixed operator/(Fixed const &another) const;
		bool	operator>(Fixed const &another) const;
		bool	operator<(Fixed const &another) const;
		bool	operator>=(Fixed const &another) const;
		bool	operator<=(Fixed const &another) const;
		bool	operator==(Fixed const &another) const;
		bool	operator!=(Fixed const &another) const;
		Fixed &operator++();
		Fixed &operator--();
		const Fixed operator++(int);
		const Fixed operator--(int);
		static Fixed &min(Fixed& a1, Fixed& a2);
		static const Fixed& min(const Fixed& a1, const Fixed& a2);
		static Fixed &max(Fixed& a1, Fixed& a2);
		static const Fixed& max(const Fixed& a1, const Fixed& a2);

		float	toFloat() const;
		int		toInt() const;
		int		getRawBits() const;
		void	setRawBits(int const raw);

	private :
		int		value;
		static const int	fractional_bit = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
