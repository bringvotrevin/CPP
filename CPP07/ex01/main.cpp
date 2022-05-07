/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 05:36:03 by dim               #+#    #+#             */
/*   Updated: 2022/05/08 06:24:36 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main()
{
	int		i[3] = {1, 2, 3};
	double	d[3] = {1.1, 2.2, 3.3};
	std::string str[3] = {"str1", "str2", "str3"};

	iter(i, sizeof(i) / sizeof(i[0]), print);
	iter(d, sizeof(d) / sizeof(d[0]), print);
	iter(str, sizeof(str) / sizeof(str[0]), print);

	return (0);
}