/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:20:47 by dim               #+#    #+#             */
/*   Updated: 2022/05/02 23:20:10 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// #include "Convert.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

static const std::string kInf = "390285790238590238590823908541564564684854843859082390854156456468485483859082390854156456468485483859082390854156456468485483859082390854156456468485483859082390854156456468485483859082390854156456468485483859082390854156456468485483859082390854156456468485488648648468436436489489486468489489489489489489489489489424905783489765890573489057348975348975984375934807529847923087492837492807429308742389742908374238974290384902374902874902874092874902874902874092874902374902874908272.";

int		main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "ERROR : EXECUTE WITH ONE ARGUMENT" << std::endl;
		return (0);
	}
	size_t found;
	std::string str("12424f");
	if ((found = str.find("inf")) != std::string::npos) {
		str.replace(found, 3, kInf);
	}
	found  = str.find('f');
	bool f_flag;
	if (found != std::string::npos) {
		if (found != str.size() - 1)
			throw;
		str.erase(found, 1);
		f_flag = true;
	}

	std::istringstream iss(str);
	iss.exceptions( std::ifstream::failbit | std::ifstream::badbit );
	double d;
	
	try {
		iss >> d;
	} catch (std::exception& e) {
		std::cout << std::showpos << d << '\n';
	}
	
	
	return (0);
}