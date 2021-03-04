/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/03 17:28:17 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <exception>
# include <algorithm>
# include <list>

template <typename T>
int &easyfind(T lst, int i)
{
	typename T::iterator it;

	if (lst.empty())
		throw std::exception();
	it = std::find(lst.begin(), lst.end(), i);
	if (it == lst.end())
		throw std::exception();
	else
		return (*it);
}

#endif
