/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:42:59 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:13:07 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): _nbZombies(n)
{
	int i = -1;
	
	this->_horde = new Zombie[n];
	
	while (++i < n)
		this->_horde[i].randomName();
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_horde;
	return ;
}

void	ZombieHorde::announce(void)
{
	int i = -1;
	while (++i < this->_nbZombies)
		this->_horde[i].announce();
		return ;
}
