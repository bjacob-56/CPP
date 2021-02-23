/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:06:56 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(void)
{
	this->_type = "hordier";
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " died." << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")>  Braiiiiiiinnnssss ..." << std::endl;
	return ;
}

void	Zombie::randomName(void)
{
	std::string	tab_name[10] = {"Jean0", "Jean1", "Jean2", "Jean3", "Jean4", "Jean5", "Jean6", "Jean7", "Jean8", "Jean9"};

	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);

	int	nb = (now->tm_sec + std::rand()) % 10;

	std::string name = tab_name[nb];

	this->setName(name);

}