/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 10:59:44 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name): _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
		_maxEnergyPoints(100), _level(1), _name(name), _meleeAttackDamage(30), _rangedAttackDamage(30), _armorDamageReduction(5)
{
	std::cout << "FR4G-TP " << name << " initialisé. En attente d'instruction..." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "FR4G-TP " << this->_name << " cloné. En attente d'instruction..." << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G-TP " << this->_name << " détruit. Adieu..." << std::endl;
	return ;
}

std::string	FragTrap::getName(void) const
{
	return (this->_name);
}

int	FragTrap::getRangeAttackDamage(void) const
{
	return (this->_rangedAttackDamage);
}

int	FragTrap::getMeleeAttackDamage(void) const
{
	return (this->_meleeAttackDamage);
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attaque " << target << " à distance, causant " << this->_rangedAttackDamage << " points de dégâts !" << std::endl;
	return ;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attaque " << target << " au corps a corps, causant " << this->_meleeAttackDamage << " points de dégâts !" << std::endl;
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int damage = amount - this->_armorDamageReduction;
	if (damage < 0)
		damage = 0;
	
	if (this->_hitPoints <= damage)
	{
		std::cout << "FR4G-TP " << this->_name << " n'a plus de points de vie !" << std::endl;
		this->_hitPoints = 0;
	}
	else
	{
		this->_hitPoints -= damage;
		std::cout << "FR4G-TP " << this->_name << " a encore " << this->_hitPoints << " points de vie." << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_maxHitPoints - this->_hitPoints < (int)amount)
		this->_hitPoints = this->_maxHitPoints;
	else
	{
		this->_hitPoints += amount;
		std::cout << "FR4G-TP " << this->_name << " se répare et a maintenant " << this->_hitPoints << " points de vie." << std::endl;
	}
}

void	FragTrap::rest(unsigned int amount)
{
	if (this->_maxEnergyPoints - this->_energyPoints < (int)amount)
		this->_energyPoints = this->_maxEnergyPoints;
	else
	{
		this->_energyPoints += amount;
		std::cout << "FR4G-TP " << this->_name << " se repose et a maintenant " << this->_energyPoints << " points d'énergie." << std::endl;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energyPoints < 25)
	{
		std::cout << "FR4G-TP " << this->_name << " n'a plus assez d'énergie et doit se reposer." << std::endl;
		return ;
	}
	
	std::string	tab_attacks[5] = {" tir sur " , " lance une roquette sur ", " attaque avec véhémence ", " lance 'gros yeux' sur ", " frappe de toutes ses forces "};
	int	tab_damages[5] = {30, 50, 40, 2, 20};

	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	int	nb = (now->tm_sec + std::rand()) % 5;

	std::cout << "FR4G-TP " << this->_name << tab_attacks[nb] << target << ", causant " << tab_damages[nb] << " points de dégâts !" << std::endl;
	this->_energyPoints -= 25;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs){
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
