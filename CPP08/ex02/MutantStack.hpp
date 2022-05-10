/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 02:22:47 by dim               #+#    #+#             */
/*   Updated: 2022/05/10 21:19:02 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C>
{
	public:
		typedef typename
			std::stack<T, C>::container_type::iterator	iterator;
		typedef typename
			std::stack<T, C>::container_type::const_iterator const_iterator;
		typedef typename
			std::stack<T, C>::container_type::reverse_iterator	reverse_iterator;
		typedef typename
			std::stack<T, C>::container_type::const_reverse_iterator const_reverse_iterator;
		MutantStack() : std::stack<T, C>() {}
		MutantStack(const MutantStack& other) : std::stack<T, C>(other) {}
		MutantStack& operator=(const MutantStack& other)
		{
			if (this != &other)
				*this = other;
			return (*this);
		}
		~MutantStack() {}

		iterator begin() { return (this->c.begin());}
		iterator end() { return (this->c.end());}
		reverse_iterator	rbegin() { return (this->c.rbegin());}
		reverse_iterator	rend() { return (this->c.rend());}
};

#endif
