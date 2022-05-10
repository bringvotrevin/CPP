/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:59:27 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 19:51:00 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Data.hpp"

int		main()
{
	Data data = {'D', 123456, "CPP06/ex01"};
	uintptr_t raw = serialize(&data);
	Data *dataPtr = deserialize(raw);

	std::cout << std::setw(20) << std::left << "data address" << ": " << &data << '\n';
	std::cout << std::setw(20) << std::left << "data.character" << ": " << data.character << '\n';
	std::cout << std::setw(20) << std::left << "data.integer" << ": " << data.integer << '\n';
	std::cout << std::setw(20) << std::left << "data.str" << ": " << data.str << "\n\n";

	std::cout << std::setw(20) << std::left << "uintptr_t address" << ": " << std::hex << raw << std::dec << "\n\n";

	std::cout << std::setw(20) << std::left << "dataPtr address" << ": " << dataPtr << '\n';
	std::cout << std::setw(20) << std::left << "dataPtr character" << ": " << dataPtr->character << '\n';
	std::cout << std::setw(20) << std::left << "dataPtr integer" << ": " << dataPtr->integer << '\n';
	std::cout << std::setw(20) << std::left << "dataPtr str" << ": " << dataPtr->str << '\n';

	return (0);
}
