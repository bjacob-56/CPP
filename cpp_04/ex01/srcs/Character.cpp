/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(std::string const & name): _name(name), _ap(40), _weapon(0)
{
	return ;
}

Character::Character(Character const & src)
{
	*this = src;
	return ;
}

Character::~Character(void)
{
	return ;
}

std::string	Character::getName(void) const
{
	return (this->_name);
}

int	Character::getAP(void) const
{
	return (this->_ap);
}

AWeapon	*Character::getWeapon(void) const
{
	return (this->_weapon);
}

void Character::recoverAP(void)
{
	if (this->_ap + 10 >= 40)
		this->_ap = 40;
	else
		this->_ap += 10;
}

void Character::equip(AWeapon* weapon)
{
	this->_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (!this->_weapon)
		return ;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
	
	this->_weapon->attack();

	this->_ap -= this->_weapon->getAPCost();
	if (this->_ap < 0)
		this->_ap = 0;
		
	enemy->takeDamage(this->_weapon->getDamage());
	if (!enemy->getHP())
		delete enemy;
}

Character & Character::operator=(Character const & rhs){
	this->_name = rhs.getName();
	this->_ap = rhs.getAP();
	this->_weapon = rhs.getWeapon();
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Character const & c)
{
	if (c.getWeapon())
		o << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
	else
		o << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl;
	return (o);
}
