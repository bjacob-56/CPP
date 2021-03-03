/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/03 09:43:58 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>

template <typename T>
void	swap(T & x, T & y)
{
	// std::cout << "swap template" << '\n';
	T z;
	z = x;
	x = y;
	y = z;
}

template <typename T>
T const & min(T const & x, T const & y)
{
	// std::cout << "min template" << '\n';
	if (x < y)
		return (x);
	return (y);
}

template <typename T>
T const & max(T const & x, T const & y)
{
	// std::cout << "max template" << '\n';
	if (x > y)
		return (x);
	return (y);
}

#endif
