/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 11:03:42 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>

#include "../includes/ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	FragTrap &	operator=(FragTrap const & rhs);

	void	vaulthunter_dot_exe(std::string const & target);

protected:
	static const int	init_hitPoints = 100;
	static const int	init_maxHitPoints = 100;
	static const int	init_energyPoints = 100;
	static const int	init_maxEnergyPoints = 100;
	static const int	init_level = 1;
	static const int	init_meleeAttackDamage = 30;
	static const int	init_rangedAttackDamage = 20;
	static const int	init_armorDamageReduction = 5;

};

#endif
