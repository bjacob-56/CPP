/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/04 10:45:33 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/span.hpp"

int main()
{
	// ********************************* //

	std::cout << "\n\n**********  Span 1 **********\n";
	
	Span sp = Span(5);

	sp.displayContainer();

	sp.addNumber(5);

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << '\n';
	}

	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	sp.displayContainer();

	try
	{
		sp.addNumber(42);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << "\nshortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp.longestSpan() << std::endl;

	// ********************************* //

	std::cout << "\n\n**********  Span 2 **********\n";
	
	Span sp2 = Span(100001);

	try
	{
		sp2.addNumber(-50000, 500001);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		sp2.addNumber(-50000, 50000);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << '\n';
	}

	sp2.displayContainer();

	std::cout << "\nshortest span: " << sp2.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp2.longestSpan() << std::endl;

	// ********************************* //

	std::cout << "\n\n**********  Span 3 **********\n";

	Span sp3 = Span(3);

	sp3.addNumber(0);
	sp3.addNumber(std::numeric_limits<int>::max());
	sp3.addNumber(std::numeric_limits<int>::min());

	sp3.displayContainer();

	std::cout << "\nshortest span: " << sp3.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp3.longestSpan() << std::endl;

	return (0);
}
