/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/span.hpp"

Span::Span(void): _n(0), _v(0)
{
	return ;
}

Span::Span(unsigned int N): _n(N), _v(0) // a ajuster
{
	return ;
}

Span::Span(Span const & src)
{
	*this = src;
	return ;
}

Span::~Span(void)
{
	return ;
}

unsigned int	Span::getN(void) const
{
	return (_n);
}

std::vector<int>	Span::getV(void) const
{
	return (_v);
}

void	Span::addNumber(int i)
{
	if (_v.size() == _n)
		throw std::exception();
	else
		_v.push_back(i);
}

int	Span::shortestSpan(void) const
{
	std::vector<int> temp = _v;

	std::sort(temp.begin(), temp.end());
	return (*(--temp.end()) - *(temp.begin())); // end - 1 ???
}

int	Span::longestSpan(void) const
{
	std::vector<int> temp = _v;

	std::sort(temp.begin(), temp.end());
	return (*(--temp.end()) - *(temp.begin())); // end - 1 ???
}

Span & Span::operator=(Span const & rhs){
	_n = rhs.getN();
	// a completer ///////////////////////////////////

	return (*this);
}
