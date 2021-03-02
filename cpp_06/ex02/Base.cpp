/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:00:44 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/02 16:37:33 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void identify_from_pointer(Base * p)
{	
	A *a = dynamic_cast<A *>(p);
	if (a)
		std::cout << "A" << std::endl;
	else
	{
		B *b = dynamic_cast<B *>(p);
		if (b)
			std::cout << "B" << std::endl;
		else
		{
			C *c = dynamic_cast<C *>(p);
			if (c)
				std::cout << "C" << std::endl;
			else
				std::cerr << "Pointer is not of A, B or C type" << '\n';
		}
	}
}

void identify_from_reference(Base & p)
{
	Base base;
	
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B b = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				C c = dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << "Pointer is not of A, B or C type" << '\n';
			}
		}	
	}	
}

// -----  Main  -----

int main(void)
{
	A a = A();
	B b = B();
	C c = C();

	identify_from_pointer(&a);
	identify_from_reference(a);

	std::cout << std::endl;

	identify_from_pointer(&b);
	identify_from_reference(b);

	std::cout << std::endl;

	identify_from_pointer(&c);
	identify_from_reference(c);

	return 0;
}
