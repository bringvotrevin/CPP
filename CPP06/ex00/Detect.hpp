/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Detect.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:50:15 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:50:36 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DETECT_HPP__
#define _DETECT_HPP__
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cfloat>
#include <cmath>

class Detect
{
public :
	enum Type {
		INIT_,
		CHAR_,
		INT_,
		FLOAT_,
		DOUBLE_
	};
	
	Detect();
	Detect(const std::string input);
	Detect(const Detect& other);
	Detect& operator=(const Detect& other);
	~Detect();

	void	detectType();

private :
	const std::string input;
	Type	type;
	bool	fFlag;
	bool	dotFlag;
	bool	isNan;
	bool	isInf;
	bool	minus;

	void	findAndReplace(std::string& newInput);
	void	isOnlyNum(std::string input);
	void	toType(std::istringstream& iss);
	void	typeChar(std::istringstream& iss);
	void	typeInt(std::istringstream& iss);
	void	typeFloat(std::istringstream& iss);
	void	typeDouble(std::istringstream& iss);

	void	printChar();
	void	printInt();
	void	printFloat();
	void	printDouble();

	char	c_;
	int		i_;
	float	f_;
	double	d_;

};


#endif
