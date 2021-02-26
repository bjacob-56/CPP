/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 10:03:31 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _hitPoints(50), _maxHitPoints(50), _energyPoints(50),
		_maxEnergyPoints(50), _level(1), _name(name), _meleeAttackDamage(10), _rangedAttackDamage(10), _armorDamageReduction(0)
{
	std::cout << "CL4P-TP " << name << " initialisé. En attente d'instruction..." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name, int hi, int maxh, int en, int maxe, int le, int me, int ra, int ar): _hitPoints(hi), _maxHitPoints(maxh), _energyPoints(en),
		_maxEnergyPoints(maxe), _level(le), _name(name), _meleeAttackDamage(me), _rangedAttackDamage(ra), _armorDamageReduction(ar)
{
	std::cout << "CL4P-TP " << name << " initialisé. En attente d'instruction..." << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << "CL4P-TP " << this->_name << " cloné. En attente d'instruction..." << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "CL4P-TP " << this->_name << " détruit. Adieu..." << std::endl;
	return ;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getRangeAttackDamage(void) const
{
	return (this->_rangedAttackDamage);
}

int	ClapTrap::getMeleeAttackDamage(void) const
{
	return (this->_meleeAttackDamage);
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << this->_name << " attaque " << target << " à distance, causant " << this->_rangedAttackDamage << " points de dégâts !" << std::endl;
	return ;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CL4P-TP " << this->_name << " attaque " << target << " au corps a corps, causant " << this->_meleeAttackDamage << " points de dégâts !" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int damage = amount - this->_armorDamageReduction;
	if (damage < 0)
		damage = 0;
	
	if (this->_hitPoints <= damage)
	{
		std::cout << "CL4P-TP " << this->_name << " n'a plus de points de vie !" << std::endl;
		this->_hitPoints = 0;
	}
	else
	{
		this->_hitPoints -= damage;
		std::cout << "CL4P-TP " << this->_name << " a encore " << this->_hitPoints << " points de vie." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_maxHitPoints - this->_hitPoints < (int)amount)
		this->_hitPoints = this->_maxHitPoints;
	else
	{
		this->_hitPoints += amount;
		std::cout << "CL4P-TP " << this->_name << " se répare et a maintenant " << this->_hitPoints << " points de vie." << std::endl;
	}
}

void	ClapTrap::rest(unsigned int amount)
{
	if (this->_maxEnergyPoints - this->_energyPoints < (int)amount)
		this->_energyPoints = this->_maxEnergyPoints;
	else
	{
		this->_energyPoints += amount;
		std::cout << "CL4P-TP " << this->_name << " se repose et a maintenant " << this->_energyPoints << " points d'énergie." << std::endl;
	}
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs){
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_name = rhs._name;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	return (*this);
}
