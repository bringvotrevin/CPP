/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:22:41 by dim               #+#    #+#             */
/*   Updated: 2022/05/02 23:08:26 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
: input(""), isNum(ture)
{}

Convert::Convert(const std::string& input) {
	
}

Convert::Convert(const Convert& other) {}

Convert& Convert::operator=(const Convert& rhs) {}

Convert::~Convert() {}
