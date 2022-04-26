/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:07:54 by dim               #+#    #+#             */
/*   Updated: 2022/04/27 04:15:02 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_H__
#define _CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private: 
	Brain *brain;
public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& rhs);
	~Cat();
	
	void	makeSound() const;
	void	changeIdea(const std::string& idea);
	void	sayIt() const;
};

#endif