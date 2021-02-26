/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 09:24:38 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(name, FragTrap::init_hitPoints, FragTrap::init_maxHitPoints, NinjaTrap::init_energyPoints, NinjaTrap::init_maxEnergyPoints,
	1, NinjaTrap::init_meleeAttackDamage, FragTrap::init_rangedAttackDamage, FragTrap::init_armorDamageReduction)
{
	std::cout << "SUPER-TP " << name << " initialisé. En attente d'instruction..." << std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const & src): ClapTrap(src) 
{
	*this = src;
	std::cout << "SUPER-TP " << this->_name << " cloné. En attente d'instruction..." << std::endl;
	return ;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SUPER-TP " << this->_name << " détruit. Adieu..." << std::endl;
	return ;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs){
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

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
	std::cout << "< C'était l'attaque à distance de FR4G-TP >" << std::endl;
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
	std::cout << "< C'était l'attaque au corps à corps de NINJ4-TP >" << std::endl;
}
