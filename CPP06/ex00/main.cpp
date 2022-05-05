/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:52:56 by dim               #+#    #+#             */
/*   Updated: 2022/05/05 20:58:31 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Detect.hpp"

int		main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "ERROR : EXECUTE WITH ONE ARGUMENT" << std::endl;
		return (0);
	}
	std::string input(argv[1]);
	Detect detect(input);
	return (0);
}