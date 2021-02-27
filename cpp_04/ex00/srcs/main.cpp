/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/27 15:08:31 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Sorcerer.hpp"
#include "../includes/Victim.hpp"
#include "../includes/Peon.hpp"
#include "../includes/Pony.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	Victim *pierre = new Pony("Pierre");
	
	std::cout << std::endl;

	std::cout << robert << jim << joe << *pierre;
	
	std::cout << std::endl;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(*pierre);

	std::cout << std::endl;

	jim.getPolymorphed();
	joe.getPolymorphed();
	pierre->getPolymorphed();

	std::cout << std::endl;

	delete pierre;

	return 0;
}
