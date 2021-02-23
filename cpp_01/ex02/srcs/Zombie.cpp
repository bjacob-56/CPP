/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 13:33:45 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " died." << std::endl;
	return ;
}

void	Zombie::advert(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")>  Braiiiiiiinnnssss ..." << std::endl;
	return ;
}
