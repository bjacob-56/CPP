/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type)
{
	return ;
}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

int	Enemy::getHP(void) const
{
	return (this->_hp);
}

std::string	Enemy::getType(void) const
{
	return (this->_type);
}

void Enemy::takeDamage(int damage)
{
	if (damage <= 0)
		return;
	if (damage > this->_hp)
		damage = this->_hp;
	this->_hp -= damage;
}

Enemy & Enemy::operator=(Enemy const & rhs){
	this->_hp = rhs.getHP();
	this->_type = rhs.getType();
	return (*this);
}
