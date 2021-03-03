/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/03 10:17:36 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <string>
# include <iostream>

template <typename T>
void	print_power(T a)
{
	// std::cout << "print_power template" << '\n';
	std::cout << a * a << '\n';
}

template <typename T, typename U>
void	iter(T * add, int len, U (*fct)(T))
{
	int i = -1;
	while (++i < len)
		fct(add[i]);
}


#endif
