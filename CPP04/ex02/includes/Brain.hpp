/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 23:59:16 by dim               #+#    #+#             */
/*   Updated: 2022/04/27 03:40:51 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_H__
#define _BRAIN_H__

#include <iostream>
#include <string>

class Brain
{
private: 
	std::string ideas[100];
public:
	Brain();
	Brain(std::string idea);
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	~Brain();

	void	setIdeas(const std::string& idea);
	void	openIdeas();
};

#endif