/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:48:47 by dim               #+#    #+#             */
/*   Updated: 2022/05/09 23:59:59 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : size(0) {}

Span::Span(unsigned int N)
: size(N) {}

Span::Span(const Span& other)
{
	*this = other;
}

Span& Span::operator=(const Span& other)
{
	size = other.size;
	ms = other.getArray();
	return (*this);
}

Span::~Span() {}

const std::multiset<unsigned int> &Span::getArray() const
{
	return (ms);
}

void	Span::addNumber(int i) {
	if (ms.size() >= size)
		throw std::out_of_range("[No space] cannot add number");
	ms.insert(i);
}

unsigned int	Span::shortestSpan() {
	if (ms.size() < 2)
		throw std::logic_error("Not enough element to get a span");
	std::multiset<unsigned int>::iterator cur;
	std::multiset<unsigned int>::iterator next;
	unsigned int min;
	for (it = ms.begin(); it != --ms.end(); it++)
	{
		next = cur++;
		if (min > (*--cur - *next)
			min = *(--cur - *next);
	}

}

unsigned int	Span::longestSpan() {}

