/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 10:02:38 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <string>
# include <iostream>

// #include "../includes/FragTrap.hpp"
// #include "../includes/ScavTrap.hpp"
// #include "../includes/NinjaTrap.hpp"

class FragTrap;
class ScavTrap;
class NinjaTrap;

class ClapTrap {

public:

	ClapTrap(std::string name);
	ClapTrap(std::string name, int hi, int maxh, int en, int maxe, int le, int me, int ra, int ar);
	ClapTrap(ClapTrap const & src);
	~ClapTrap(void);

	ClapTrap &	operator=(ClapTrap const & rhs);
	std::string	getName(void) const;
	int	getRangeAttackDamage(void) const;
	int	getMeleeAttackDamage(void) const;

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	rest(unsigned int amount);

protected:

	int	_hitPoints;
	int	_maxHitPoints;
	int	_energyPoints;
	int	_maxEnergyPoints;
	int	_level;
	std::string	_name;
	int	_meleeAttackDamage;
	int	_rangedAttackDamage;
	int	_armorDamageReduction;

};

#endif
