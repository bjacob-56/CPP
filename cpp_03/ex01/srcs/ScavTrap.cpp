/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 08:49:11 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
		_maxEnergyPoints(50), _level(1), _name(name), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << "SC4V-TP " << name << " initialisé. En attente d'instruction..." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << "SC4V-TP " << this->_name << " cloné. En attente d'instruction..." << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SC4V-TP " << this->_name << " détruit. Adieu..." << std::endl;
	return ;
}

std::string	ScavTrap::getName(void) const
{
	return (this->_name);
}

int	ScavTrap::getRangeAttackDamage(void) const
{
	return (this->_rangedAttackDamage);
}

int	ScavTrap::getMeleeAttackDamage(void) const
{
	return (this->_meleeAttackDamage);
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " attaque " << target << " de loin, causant " << this->_rangedAttackDamage << " points de dégâts !" << std::endl;
	return ;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->_name << " attaque " << target << " à bout portant, causant " << this->_meleeAttackDamage << " points de dégâts !" << std::endl;
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int damage = amount - this->_armorDamageReduction;
	if (damage < 0)
		damage = 0;
	
	if (this->_hitPoints <= damage)
	{
		std::cout << "SC4V-TP " << this->_name << " n'a plus de points de vie !" << std::endl;
		this->_hitPoints = 0;
	}
	else
	{
		this->_hitPoints -= damage;
		std::cout << "SC4V-TP " << this->_name << " a encore " << this->_hitPoints << " points de vie." << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_maxHitPoints - this->_hitPoints < (int)amount)
		this->_hitPoints = this->_maxHitPoints;
	else
	{
		this->_hitPoints += amount;
		std::cout << "SC4V-TP " << this->_name << " se répare et a maintenant " << this->_hitPoints << " points de vie." << std::endl;
	}
}

void	ScavTrap::rest(unsigned int amount)
{
	if (this->_maxEnergyPoints - this->_energyPoints < (int)amount)
		this->_energyPoints = this->_maxEnergyPoints;
	else
	{
		this->_energyPoints += amount;
		std::cout << "SC4V-TP " << this->_name << " se repose et a maintenant " << this->_energyPoints << " points d'énergie." << std::endl;
	}
}

void	ScavTrap::challengeNewcomer(void)
{
	if (this->_energyPoints < 15)
	{
		std::cout << "SC4V-TP " << this->_name << " n'a plus assez d'énergie et doit se reposer." << std::endl;
		return ;
	}
	
	std::string	tab_challenges[5];
	tab_challenges[0] = "peux-tu réciter l'alphabet à l'envers ?";
	tab_challenges[1] = "dis moi ton plus grand secret.";
	tab_challenges[2] = "peux-tu faire un double flip reset double tap backboard ?";
	tab_challenges[3] = "peux-tu courir un 100m en moins de 10s ?";
	tab_challenges[4] = "devine son prénom.";

	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	int	nb = (now->tm_sec + std::rand()) % 5;

	std::cout << "SC4V-TP " << this->_name << " te propose un défi : " << tab_challenges[nb] << std::endl;
	this->_energyPoints -= 15;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs){
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
