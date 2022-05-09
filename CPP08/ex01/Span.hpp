/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 23:31:45 by dim               #+#    #+#             */
/*   Updated: 2022/05/09 23:40:01 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CPP
#define SPAN_CPP

#include <iostream>
#include <set>

class Span
{
	private :
		unsigned int size;
		std::multiset<unsigned int> ms;
	public :
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void	addNumber(int i);

		template <typename InputIt>
		void	addNumber(InputIt b, InputIt e);

		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		const std::multiset<unsigned int> &Span::getArray() const; 
};


template <typename InputIt>
void	Span::addNumber(InputIt b, InputIt e)
{
	for (; b != e; b++)
	{
		if (v.size() >= size)
			throw std::out_of_range("[No space] cannot add number");
		addNumber(*b);
	}
}

#endif