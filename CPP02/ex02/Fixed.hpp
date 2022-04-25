/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:22:46 by dim               #+#    #+#             */
/*   Updated: 2022/04/25 22:48:38 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public :
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int num);
		Fixed(const float floating_num);
		~Fixed();


		

		Fixed &operator=(const Fixed &another);
		
		const Fixed operator+(Fixed const &another) const {
			Fixed tmp = *this;
			tmp.value += another.value;
			return tmp;
		}

		Fixed &operator-(Fixed const &another) const;

		Fixed &operator*(Fixed const &another) const;

		Fixed &operator/(Fixed const &another) const;

		/**
		 * int a = 1;
		 * int b = 2;
		 * 
		 * a < b => boolean
		 * 
		 * 
		 */ 
		bool	operator>(Fixed const &another) const {
			return value > another.value;
		}
		bool	&operator<(Fixed const &another) const;
		bool	&operator>=(Fixed const &another) const;
		bool	&operator<=(Fixed const &another) const;
		bool	&operator==(Fixed const &another) const;
		bool	&operator!=(Fixed const &another) const;


		/**
		 * int a = 1;
		 * ++a = 1;
		 * a++ = 1;
		 * 
		 * 
		 */ 
		Fixed &operator++() {
			
		}
		Fixed &operator--();

		const Fixed operator++(int);
		const Fixed operator--(int);


		float	toFloat() const;
		int		toInt() const;
		int		getRawBits() const;
		void	setRawBits(int const raw);

	private :
		int		value;
		static const int	fractional_bit = 8;
};

#endif
