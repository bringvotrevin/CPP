/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 04:34:58 by dim               #+#    #+#             */
/*   Updated: 2022/05/09 12:57:08 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template<typename T>
void	swap(T& a, T& b)
{
	T t;
	t = a;
	a = b;
	b = t;
}

template<typename T>
T	max(T& a, T& b)
{
	return (a > b ? a : b);
}

template<typename T>
T	min(T& a, T& b)
{
	return (a >= b ? b : a);
}

#endif