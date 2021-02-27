/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/27 17:48:00 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type), _xp(0)
{
	return ;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

std::string const & AMateria::getType() const
{
	return (_type);
}


unsigned int AMateria::getXP() const
{
	return (_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}

void	AMateria::setXP(unsigned int xp)
{
	this->_xp = xp;
}

AMateria & AMateria::operator=(AMateria const & rhs){
	_xp = rhs.getXP();
	return (*this);
}
