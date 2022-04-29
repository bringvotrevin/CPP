/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 23:59:16 by dim               #+#    #+#             */
/*   Updated: 2022/04/29 16:49:36 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP__
#define _BRAIN_HPP__

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