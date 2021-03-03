/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/03 10:17:55 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

std::string print_string(std::string str)
{
	std::cout << str << ' ';
	return (str);
}

// *********************************************** //

int main( void )
{
	int tab[5] = {0, 1, 2, 3, 4};

	iter<int, void>(tab, 5, &print_power);
	// iter(tab, 5, &print_power<int>);


	std::cout << '\n';


	std::cout << std::fixed;
	std::cout.precision(2);
	
	float tabf[4] = {0.5f, 1.5f, 2.5f, 3.5f};
	iter(tabf, 4, &print_power<float>);


	std::cout << '\n';


	std::string tabs[5] = {"Ceci", "est", "un", "test", "!"};
	iter(tabs, 5, print_string);

	std::cout << '\n';

	return 0;
}
