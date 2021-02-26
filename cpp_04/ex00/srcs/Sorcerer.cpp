/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 16:16:37 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}

std::string	Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string	Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void Sorcerer::polymorph(Victim const & v) const
{
	std::cout << v.getName() << " has been turned into a cute little sheep!" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs){
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & s)
{
	o << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!";
	return (o);
}
