/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:22:46 by dim               #+#    #+#             */
/*   Updated: 2022/04/28 14:59:03 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class Fixed
{
	public :
		Fixed();
		Fixed(const int num);
		Fixed(const float floating_num);
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed &operator=(const Fixed &another);
	
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
