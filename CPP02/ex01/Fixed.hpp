/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:22:46 by dim               #+#    #+#             */
/*   Updated: 2022/04/25 23:32:45 by dim              ###   ########.fr       */
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
	
		float	toFloat() const;
		int		toInt() const;
		int		getRawBits() const;
		void	setRawBits(int const raw);

	private :
		int		value;
		static const int	fractional_bit = 8;
};

#endif
