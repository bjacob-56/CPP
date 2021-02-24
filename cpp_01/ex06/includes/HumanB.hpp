/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "../includes/Weapon.hpp"

#include <string>
#include <iostream>

class HumanB {

public:

	HumanB(std::string name);
	~HumanB(void);
	void	attack(void) const;
	void	setWeapon(Weapon& weapon);

private:
	std::string	_name;
	Weapon*		_weapon;

};

#endif
