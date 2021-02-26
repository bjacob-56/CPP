/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 09:24:38 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "SC4V-TP " << name << " initialisé. En attente d'instruction..." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(src)
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
