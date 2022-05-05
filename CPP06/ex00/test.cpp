/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:20:47 by dim               #+#    #+#             */
/*   Updated: 2022/05/05 20:45:21 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

// #include "Convert.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <stdio.h>

static const std::string kInf = "390285790238590238590823908541564564684854843859082390854156456468485483859082390854156456468485483859082390854156456468485483859082390854156456468485483859082390854156456468485483859082390854156456468485483859082390854156456468485483859082390854156456468485488648648468436436489489486468489489489489489489489489489424905783489765890573489057348975348975984375934807529847923087492837492807429308742389742908374238974290384902374902874902874092874902874902874092874902374902874908272.";

int		main(int argc, char *argv[])
{
	// size_t found;
	// std::string str("inf");
	// if ((found = str.find("inf")) != std::string::npos) {
	// 	str.replace(found, 3, kInf);
	// }
	// found  = str.find('f');
	// bool f_flag;
	// if (found != std::string::npos) {
	// 	if (found != str.size() - 1)
	// 		throw;
	// 	str.erase(found, 1);
	// 	f_flag = true;
	// }
	
	// std::string str = "214748.9111";
	// std::istringstream iss(str);
	// iss.exceptions( std::ifstream::failbit | std::ifstream::badbit );
	// float d;
	// int i;
	// try {
	// 	// iss >> i;
	// 	iss >> d;
	// 	printf("d : %lf\n", d);
	// 	std::cout << "d : " << d << std::endl;
	// } catch (std::exception& e) {
	// 	std::cout << "!!!!!\n";
	// 	// std::cout << std::showpos << i << '\n';
	// 	std::cout << std::showpos << d << '\n';
	// }
	std::istringstream iss(argv[1]);
	float f;
	iss >> f;
	std::cout << f << std::endl;
	float t = 42.f;
	std::cout << std::fixed;
	std::cout << t << std::endl;

	
	return (0);
}