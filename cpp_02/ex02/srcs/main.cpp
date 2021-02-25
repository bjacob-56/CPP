/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/25 14:12:53 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

#include <iostream>

int main(void)
{
	Fixed a(3);
	Fixed const b(Fixed(4.05f) * Fixed(2));
	
	std::cout << "=====  Comparison  =====" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << std::endl;

	std::cout << a << " < " << b << " : " << (a < b) << std::endl;
	std::cout << a << " <= " << b << " : " << (a <= b) << std::endl;
	std::cout << a << " > " << b << " : " << (a > b) << std::endl;
	std::cout << a << " >= " << b << " : " << (a >= b) << std::endl;
	std::cout << a << " == " << b << " : " << (a == b) << std::endl;
	std::cout << a << " != " << b << " : " << (a != b) << std::endl;

	std::cout << std::endl;

	std::cout << a << " < " << a << " : " << (a < a) << std::endl;
	std::cout << a << " <= " << a << " : " << (a <= a) << std::endl;
	std::cout << a << " > " << a << " : " << (a > a) << std::endl;
	std::cout << a << " >= " << a << " : " << (a >= a) << std::endl;
	std::cout << a << " == " << a << " : " << (a == a) << std::endl;
	std::cout << a << " != " << a << " : " << (a != a) << std::endl;

	std::cout << std::endl << std::endl;


	std::cout << "=====  Operations  =====" << std::endl;
	
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "b - a = " << (b - a) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;
	std::cout << "b / a = " << (b / a) << std::endl;

	std::cout << "(a + a + a - b) = " << (a + a + a - b) << std::endl;
	std::cout << "(a + b) * a = " << ((a + b) * a) << std::endl;

	std::cout << std::endl << std::endl;


	std::cout << "=====  Increment / Decrement  =====" << std::endl;
	a = Fixed(0);
	std::cout << "a = " << a << std::endl;

	std::cout << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << " (++a)" << std::endl;
	std::cout << a++ << " (a++)" << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << " (--a)" << std::endl;
	std::cout << a-- << " (a--)" << std::endl;
	std::cout << a << std::endl;
	
	std::cout << std::endl << std::endl;


	std::cout << "=====  Min / Max  =====" << std::endl;
	a = Fixed(4.36f);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << std::endl;

	std::cout << "Max = " << Fixed::max(a, b) << std::endl;
	std::cout << "Max = " << max(b, a) << std::endl;
	std::cout << "Min = " << Fixed::min(a, b) << std::endl;
	std::cout << "Min = " << min(b, a) << std::endl;
	
	return 0;
}

