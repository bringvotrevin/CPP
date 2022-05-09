/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 05:36:37 by dim               #+#    #+#             */
/*   Updated: 2022/05/09 12:48:49 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void	print(const T& t)
{
	std::cout << t << std::endl;
}

template<typename T>
void	iter(T* array, std::size_t len, void (*fPtr)(const T&))
{
	if (!array || len <= 0)
		return ;
	for (size_t i = 0; i < len; i++)
	{
		(*fPtr)(array[i]);
	}
}

#endif