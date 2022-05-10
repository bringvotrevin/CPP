/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 23:31:45 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 21:31:50 by dim              ###   ########seoul.kr  */
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
		std::multiset<int> ms;
	public :
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void	addNumber(int i);

		template <typename InputIt>
		void	addNumber(InputIt b, InputIt e);
		const std::multiset<int> &getArray() const; 

		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};


template <typename InputIt>
void	Span::addNumber(InputIt b, InputIt e)
{
	for (; b != e; b++)
	{
		if (ms.size() >= size)
			throw std::out_of_range("No space to add number");
		ms.insert(*b);
	}
}

#endif
