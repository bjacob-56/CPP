/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 16:16:29 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Sorcerer.hpp"

int main(void)
{
	Sorcerer jean("Jean", "The Boss");

	std::cout << jean << std::endl;


	Victim vick("Vick");

	std::cout << vick << std::endl;
	vick.getPolymorphed();

	jean.polymorph(vick);

	return (0);
}
