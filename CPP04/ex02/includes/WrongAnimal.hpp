/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 22:01:18 by dim               #+#    #+#             */
/*   Updated: 2022/04/29 16:50:52 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_HPP__
# define _WRONGANIMAL_HPP__
#include <iostream>
#include <string>

class WrongAnimal {
protected: 
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(const std::string type);
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);
	~WrongAnimal();

	std::string	const&getType() const;
	void	makeSound() const;
};

#endif