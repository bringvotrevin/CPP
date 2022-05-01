/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:06:46 by dim               #+#    #+#             */
/*   Updated: 2022/04/30 20:33:26 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

void ll()
{
	std::cout << "\n============[ Subject Test ]============" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	
	std::cout << "\n============[ Change Test ]============" << std::endl;
	Dog dd;
	Dog dodo;

	dd.changeIdea("omg");
	Dog og(dd);
	dd.sayIt();

	dd.changeIdea("dd");
	dodo.changeIdea("dodo");
	og.sayIt();
	dd.sayIt();
	og.sayIt();
	dodo.sayIt();
	dd = dodo;
	dd.sayIt();

	std::cout << "\n============[ Array Test ]============" << std::endl;
	const Animal *array[10];	
	std::cout << "\n-----------( 5 Dogs Constructed )---------" << std::endl;
	int index = 0;
	while (index < 5) {
	  array[index++] = new Dog();
	}
	std::cout << "------------------------------------------" << std::endl;	
	std::cout << "\n-----------( 5 Cats Constructed )---------" << std::endl;
	while (index < 10) {
	  array[index++] = new Cat();
	}
	std::cout << "------------------------------------------" << std::endl;	
	std::cout << std::endl;
	index = 0;
	while (index < 10) {
	  array[index++]->makeSound();
	}
	std::cout << "\n";
	index = 0;
	while (index < 10) {
		array[index]->sayIt();
		delete array[index++];
		std::cout << "\n";
	}
}

int main()
{
	ll();
	// system("leaks animal");
	return (0);
}
