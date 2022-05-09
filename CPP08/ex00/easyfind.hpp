/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:49:55 by dim               #+#    #+#             */
/*   Updated: 2022/05/09 21:41:13 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T container, int value)
{
	typename T::iterator ret = std::find(container.begin(), container.end(), value);
	if (ret == container.end())
		throw std::runtime_error("Cannot find value");
	return (ret);
}

#endif
