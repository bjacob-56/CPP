/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 09:20:09 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>

#include "../includes/ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	ScavTrap &	operator=(ScavTrap const & rhs);

	void	challengeNewcomer(void);

};

#endif
