/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 14:15:47 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"
#include "../includes/ZombieEvent.hpp"

int main(void)
{
	ZombieEvent	event = ZombieEvent();

	event.setZombieType("nice zombie");

	Zombie *zombie = event.newZombie("Pierre");

	event.randomChump();

	event.setZombieType("bad zombie");
	
	event.randomChump();
	
	event.setZombieType("neutral zombie");
	
	event.randomChump();

	delete zombie;
}