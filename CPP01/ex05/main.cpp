/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:40:36 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:09:36 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		main()
{
	Harl harl;

	harl.complain("debug");
	// harl.complain("Debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	// harl.complain("sss");
	return (0);
}
