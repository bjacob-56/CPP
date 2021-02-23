/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:12:38 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include "../includes/ZombieHorde.hpp"

int main(void)
{
	ZombieHorde	zombieHorde = ZombieHorde(10);

	std::cout << "The Horde is living..." << std::endl;

	zombieHorde.announce();

	std::cout << "The Horde is still living..." << std::endl;

	return (0);
}