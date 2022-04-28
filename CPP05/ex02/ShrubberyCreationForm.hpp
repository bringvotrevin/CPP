/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:09:21 by dim               #+#    #+#             */
/*   Updated: 2022/04/29 03:11:44 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_H__
# define _SHRUBBERYCREATIONFORM_H__
#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"

class ShrubberyCreationForm
{
private: 

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
	~ShrubberyCreationForm();

};

#endif