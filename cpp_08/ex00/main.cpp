/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/03 16:31:51 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	std::list<int>	lst;

	int res;

	try
	{
		res = easyfind(lst, 42);
		std::cout << "results: " << res << '\n';
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << '\n';
	}

	lst.push_back(0);
	lst.push_back(42);
	lst.push_back(-9);
	lst.push_back(142);
	lst.push_back(1);

	try
	{
		res = easyfind(lst, 42);
		std::cout << "results: " << res << '\n';
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << '\n';
	}

	try
	{
		res = easyfind(lst, -42);
		std::cout << "results: " << res << '\n';
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << '\n';
	}

	try
	{
		res = easyfind(lst, 1);
		std::cout << "results: " << res << '\n';
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << '\n';
	}
	
	return 0;
}
