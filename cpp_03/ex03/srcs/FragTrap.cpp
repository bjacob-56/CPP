/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 09:24:21 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "FR4G-TP " << name << " initialisé. En attente d'instruction..." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src)
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

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energyPoints < 25)
	{
		std::cout << "FR4G-TP " << this->_name << " n'a plus assez d'énergie et doit se reposer." << std::endl;
		return ;
	}
	
	std::string	tab_attacks[5] = {" tir sur" , " lance une roquette sur ", " attaque avec véhémence ", " lance 'gros yeux' sur ", " frappe de toutes ses forces "};
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
