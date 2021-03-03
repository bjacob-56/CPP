/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/03 16:29:14 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <exception>
# include <algorithm>
# include <list>

class NotFoundException: public std::exception
{
	virtual const char* what(void) const throw()
	{
		return ("argument not found");
	}
};

template <typename T>
int &easyfind(T lst, int i)
{
	typename T::iterator it;

	if (lst.empty())
		throw NotFoundException();
	it = std::find(lst.begin(), lst.end(), i);
	if (it == lst.end())
		throw NotFoundException();
	else
		return (*it);
}

#endif
