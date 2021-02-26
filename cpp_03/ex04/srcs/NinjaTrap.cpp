/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 09:24:38 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "NINJ4-TP " << name << " initialisé. En attente d'instruction..." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src): ClapTrap(src)
{
	*this = src;
	std::cout << "NINJ4-TP " << this->_name << " cloné. En attente d'instruction..." << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NINJ4-TP " << this->_name << " détruit. Adieu..." << std::endl;
	return ;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs){
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

void	NinjaTrap::ninjaShoebox(const ClapTrap & clap) const
{
	std::cout << "NINJ4-TP " << this->_name << " lance un shuriken à CL4P-TP " << clap.getName() << "." << std::endl;
}

void	NinjaTrap::ninjaShoebox(const FragTrap & frag) const
{
	std::cout << "NINJ4-TP " << this->_name << " lance une chaussure à FR4G-TP " << frag.getName() << "." << std::endl;
}

void	NinjaTrap::ninjaShoebox(const ScavTrap & scav) const
{
	std::cout << "NINJ4-TP " << this->_name << " lance une lance à SC4V-TP " << scav.getName() << "." << std::endl;
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap & ninja) const
{
	std::cout << "NINJ4-TP " << this->_name << " lance un freesbee à son collègue NINJ4-TP " << ninja.getName() << "." << std::endl;
}
