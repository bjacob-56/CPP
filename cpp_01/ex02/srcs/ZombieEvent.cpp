/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:03 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 14:19:59 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->_type = "default_type";
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie();
	zombie->setName(name);
	zombie->setType(this->_type);
	zombie->advert();
	return (zombie);
}

void	ZombieEvent::randomChump(void)
{
	std::string	tab_name[10] = {"Jean0", "Jean1", "Jean2", "Jean3", "Jean4", "Jean5", "Jean6", "Jean7", "Jean8", "Jean9"};

	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);

	int	nb = (now->tm_sec + std::rand()) % 10;

	std::string name = tab_name[nb];

	Zombie zombie = Zombie();
	zombie.setName(name);
	zombie.setType(this->_type);

	zombie.advert();
}
