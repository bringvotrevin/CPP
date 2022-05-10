/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 06:29:26 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:54:29 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private :
		T*	data;
		unsigned int _size;

	public :
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

		T&	operator[](long index) const;
		unsigned int	size() const;
};

template<typename T>
Array<T>::Array()
: data(new T[0]), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n)
: data(new T[n]), _size(n) {}

template<typename T>
Array<T>::~Array()
{
	delete[] data;
}

template<typename T>
Array<T>::Array(const Array& other)
{
	data = new T[0];
	*this = other;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array& other)
{
	if (this == &other)
		return (*this);
	delete[] data;
	data = new T[other._size];
	_size = other._size;
	for (unsigned int i = 0; i < _size; i++)
		data[i] = other.data[i];
	return (*this);
}

template<typename T>
T& Array<T>::operator[](long index) const
{
	if (index < 0 || index >= _size)
		throw std::out_of_range("Out of Range");
	return data[index];
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}

#endif
