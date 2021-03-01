/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/01 13:36:05 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main(void)
{
	int i = -5;

	while (i++ < 155)
	{	
		try
		{
			Bureaucrat	bob("Bob", i);
			std::cout << bob;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << std::endl;

	Bureaucrat	bob("Bob", 1);
	
	std::cout << bob;
	bob.incGrade();
	std::cout << bob;
	bob.decGrade();
	std::cout << bob;
	bob.decGrade();
	std::cout << bob;
	bob.decGrade();
	std::cout << bob;

	return (0);
}
