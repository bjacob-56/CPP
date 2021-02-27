/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Victim.hpp"

Victim::Victim(std::string name): _name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
	return ;
}

Victim::Victim(Victim const & src)
{
	*this = src;
	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
	return ;
}

std::string	Victim::getName(void) const
{
	return (this->_name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

Victim & Victim::operator=(Victim const & rhs){
	this->_name = rhs.getName();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Victim & v)
{
	o << "I'm " << v.getName() << " and I like otters!" << std::endl;
	return (o);
}
