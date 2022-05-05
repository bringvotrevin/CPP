/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Detect.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:50:15 by dim               #+#    #+#             */
/*   Updated: 2022/05/05 21:13:39 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DETECT_HPP__
#define _DETECT_HPP__
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class Detect
{
public :
	// enum Type {
	// 	CHAR_,
	// 	INT_,
	// 	FLOAT_,
	// 	DOUBLE_
	// };
	
	Detect();
	Detect(const std::string input);
	Detect(const Detect& other);
	Detect& operator=(const Detect& other);
	~Detect();

	void	detectType();
	void	findAndReplace(std::string& newInput);

private :
	const std::string input;
	// Type	type;
	bool	fFlag;
	bool	dotFlag;
	bool	isNan;
	bool	isInf;


};


#endif