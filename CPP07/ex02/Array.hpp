/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 06:29:26 by dim               #+#    #+#             */
/*   Updated: 2022/05/08 22:37:44 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private :
		unsigned int n;
		T*	data;

	public :
		Array();
		Array(unsigend int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

		T&	operator[](long index) const;
		unsigned int	size() const;
};

template<typename T>
Array<T>::Array()
: data(new T[0]), n(0) {}

template<typename T>
Array<T>::Array(unsigned int n)
{
	data = new T[0];
	
}



#endif