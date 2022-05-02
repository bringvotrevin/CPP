/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:19:53 by dim               #+#    #+#             */
/*   Updated: 2022/05/02 15:50:35 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */


#ifndef _CONVERT_HPP__
#define _CONVERT_HPP__
#include <iostream>
#include <string>

class Convert
{
private:
	std::string	input;
	bool	isNum;
public:
	Convert();
	Convert(const std::string& input);
	Convert(const Convert& other);
	Convert& operator=(const Convert& other);
	~Convert();
};

#endif