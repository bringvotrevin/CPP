/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Detect.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:50:15 by dim               #+#    #+#             */
/*   Updated: 2022/05/06 07:03:15 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DETECT_HPP__
#define _DETECT_HPP__
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>

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
	void	findAndReplace(std::string& newInput);

private :
	const std::string input;
	Type	type;
	bool	fFlag;
	bool	dotFlag;
	bool	isNan;
	bool	isInf;
	bool	minus;

	void	isOnlyNum(std::string input);
	void	toType(std::istringstream& iss);
	void	typeChar(std::istringstream& iss);
	void	typeInt(std::istringstream& iss);
	void	typeFloat(std::istringstream& iss);
	void	typeDouble(std::istringstream& iss);

	void	printInt();
	void	printFloat();
	void	printDouble();

	char	c_;
	int		i_;
	float	f_;
	double	d_;

};


#endif