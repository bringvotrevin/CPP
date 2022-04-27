/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:22:46 by dim               #+#    #+#             */
/*   Updated: 2022/04/27 16:43:09 by dim              ###   ########seoul.kr  */
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
		~Fixed();

		Fixed &operator=(const Fixed &other);
		
		int		getRawBits() const;
		void	setRawBits(int const raw);

	private :
		int		value;
		static const int	fractional_bit = 8;
};

#endif
