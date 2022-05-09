/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:48:47 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 01:44:34 by dim              ###   ########seoul.kr  */
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

const std::multiset<int> &Span::getArray() const
{
	return (ms);
}

void	Span::addNumber(int i)
{
	if (ms.size() >= size)
		throw std::out_of_range("[No space] cannot add number");
	ms.insert(i);
}

unsigned int	Span::shortestSpan()
{
	if (ms.size() < 2)
		throw std::logic_error("Not enough element to get a span");
	std::multiset<int>::reverse_iterator cur = ms.rbegin();
	int before = *cur;
	++cur;
	int min = (before - *cur);
	before = *cur;
	cur++;
	while (cur != ms.rend())
	{
		if (min > (before - *cur))
			min = before - *cur;
		before = *cur;
		cur++;
	}
	return (min);
}

unsigned int	Span::longestSpan()
{
	if (ms.size() < 2)
		throw std::logic_error("Not enough element to get a span");
	std::multiset<int>::iterator last = ms.end();
	return (*(--last) - *(ms.begin()));
}
