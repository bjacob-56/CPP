/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 09:20:09 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include <iostream>

#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {

public:

	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap(void);

	NinjaTrap &	operator=(NinjaTrap const & rhs);

	void	ninjaShoebox(const ClapTrap & clap) const;
	void	ninjaShoebox(const FragTrap & frag) const;
	void	ninjaShoebox(const ScavTrap & scav) const;
	void	ninjaShoebox(const NinjaTrap & ninja) const;

protected:
	static const int	init_hitPoints = 60;
	static const int	init_maxHitPoints = 60;
	static const int	init_energyPoints = 120;
	static const int	init_maxEnergyPoints = 120;
	static const int	init_level = 1;
	static const int	init_meleeAttackDamage = 60;
	static const int	init_rangedAttackDamage = 5;
	static const int	init_armorDamageReduction = 0;

};

#endif
