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

Character::Character(std::string const name): _name(name)
{
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
	return ;
}

Character::Character(Character const & src)
{
	int i = -1;
	while (++i < 4)
	{
		if (src.getInventoryMateria(i))
			_inventory[i] = src.getInventoryMateria(i)->clone();
		else
			_inventory[i] = NULL;
	}
	_name = src.getName();
}

Character::~Character(void)
{
	int i = -1;
	while (++i < 4)
		if (_inventory[i])
			delete _inventory[i];
	return ;
}

Character & Character::operator=(Character const & rhs)
{
	int i = -1;
	while (++i < 4)
		if (_inventory[i])
			delete _inventory[i];
	i = -1;
	while (++i < 4)
	{
		if (rhs.getInventoryMateria(i))
			_inventory[i] = rhs.getInventoryMateria(i)->clone();
		else
			_inventory[i] = NULL;
	}
	_name = rhs.getName();
	return (*this);
}


std::string const & Character::getName() const
{
	return (_name);
}

AMateria*	Character::getInventoryMateria(int n) const
{
	if (n < 0 || n > 3)
		return (NULL);
	return (_inventory[n]);
}

void Character::equip(AMateria* m)
{
	int i = -1;
	while (++i < 4)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (_inventory[idx])
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return;
	if (!_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}
