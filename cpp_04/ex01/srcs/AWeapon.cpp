/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
	_name(name), _damage(damage), _apcost(apcost)
{
	return ;
}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
	return ;
}

AWeapon::~AWeapon(void)
{
	return ;
}

std::string	AWeapon::getName(void) const
{
	return (this->_name);
}

int	AWeapon::getDamage(void) const
{
	return (this->_damage);
}

int	AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

AWeapon & AWeapon::operator=(AWeapon const & rhs){
	this->_name = rhs.getName();
	this->_damage = rhs.getDamage();
	this->_apcost = rhs.getAPCost();
	return (*this);
}
