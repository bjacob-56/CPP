/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <iostream>
# include <vector>
# include <exception>
# include <limits>

class Span {

public:

	Span(void);
	Span(unsigned int N);
	Span(Span const & src);
	~Span(void);

	Span &	operator=(Span const & rhs);
	
	unsigned int	getN(void) const;
	std::vector<int>	getV(void) const;

	void	addNumber(int);
	void	addNumber(int, int);

	long		shortestSpan(void) const;
	long		longestSpan(void) const;

	void		displayContainer(void) const;

	class FullContainerException: public std::exception
	{
		virtual const char* what(void) const throw();
	};

	class LessThanTwoElementsException: public std::exception
	{
		virtual const char* what(void) const throw();
	};

private:
	unsigned int	_n;
	std::vector<int>	_v;

};

#endif
