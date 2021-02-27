/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Pony.hpp"

Pony::Pony(std::string name): Victim(name)
{
	std::cout << "Zig zig." << std::endl;
	return ;
}

Pony::Pony(Pony const & src): Victim(src.getName())
{
	return ;
}

Pony::~Pony(void)
{
	std::cout << "Adios..." << std::endl;
	return ;
}

Pony & Pony::operator=(Pony const & rhs){
	this->_name = rhs.getName();
	return (*this);
}

void Pony::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a yellow cat!" << std::endl;
}
