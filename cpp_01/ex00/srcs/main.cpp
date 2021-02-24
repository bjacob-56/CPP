/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:01:10 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 12:01:11 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Pony.hpp"

#include <iostream>

void	ponyOnTheStack(void)
{
	std::cout << "-----   START ponyOnTheStack   -----" << std::endl;

	Pony	pony_stack = Pony();

	std::cout << "Number of ponies = " << Pony::get_nb_ponies() << std::endl;

	pony_stack.set_name("pony_stack_name");
	pony_stack.set_color("blue");
	pony_stack.set_age(3);

	pony_stack.display_info();

	std::cout << "-----   END ponyOnTheStack   -----" << std::endl << std::endl;


	return ;
}

void	ponyOnTheHeap(void)
{
	std::cout << "-----   START ponyOnTheHeap   -----" << std::endl;

	Pony	*pony_heap = new Pony();

	std::cout << "Number of ponies = " << Pony::get_nb_ponies() << std::endl;

	pony_heap->set_name("pony_heap_name");
	pony_heap->set_color("blue");
	pony_heap->set_age(5);

	pony_heap->display_info();

	std::cout << "Number of ponies (before delete) = " << Pony::get_nb_ponies() << std::endl;

	delete pony_heap;

	std::cout << "Number of ponies (after delete) = " << Pony::get_nb_ponies() << std::endl;

	std::cout << "-----   END ponyOnTheHeap   -----" << std::endl << std::endl;

	return ;
}

int main(void)
{
	std::cout << "Number of ponies = " << Pony::get_nb_ponies() << std::endl << std::endl;
	ponyOnTheStack();
	std::cout << "Number of ponies = " << Pony::get_nb_ponies() << std::endl << std::endl;
	ponyOnTheHeap();
	std::cout << "Number of ponies = " << Pony::get_nb_ponies() << std::endl << std::endl;

	return (0);
}
