/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:01:39 by dim               #+#    #+#             */
/*   Updated: 2022/05/07 21:36:29 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>


struct Data
{
	char	character;
	int		integer;
	std::string		str;
};

uintptr_t	serialize(Data* ptr);
Data*	deserialize(uintptr_t raw);

#endif
