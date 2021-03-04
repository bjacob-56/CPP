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

Span::Span(unsigned int N): _n(N), _v(0)
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
		throw FullContainerException();
	else
		_v.push_back(i);
	std::sort(_v.begin(), _v.end());
}

void	Span::addNumber(int i, int j)
{
	if (i > j)
	{
		int k = i;
		i = j;
		j = k;
	}

	if (static_cast<unsigned int>(_v.size() + j - i + 1) > _n)
		throw FullContainerException();

	while (i <= j)
		_v.push_back(i++);

	std::sort(_v.begin(), _v.end());
}

long	Span::shortestSpan(void) const
{
	if (_v.size() <= 1)
		throw LessThanTwoElementsException();

	unsigned int i = 0;
	long res = static_cast<long>(_v[1]) - static_cast<long>(_v[0]);
	while (++i < _v.size() - 1)
		res = std::min(res, static_cast<long>(_v[i + 1]) - static_cast<long>((_v[i])));
	return (res);
}

long	Span::longestSpan(void) const
{
	if (_v.size() <= 1)
		throw LessThanTwoElementsException();
	long min = static_cast<long>(*std::min_element(_v.begin(), _v.end()));
	long max = static_cast<long>(*std::max_element(_v.begin(), _v.end()));
	return(max - min);
}

void		Span::displayContainer(void) const
{
	unsigned long i = -1;
	while (++i < _v.size())
		std::cout << _v[i] << '\n';
}

Span & Span::operator=(Span const & rhs){
	_n = rhs.getN();
	_v = rhs.getV();

	return (*this);
}

const char* Span::FullContainerException::what(void) const throw()
{
	return ("Container is full");
}

const char* Span::LessThanTwoElementsException::what(void) const throw()
{
	return ("Container has less than two elements");
}
