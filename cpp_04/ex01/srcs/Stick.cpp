/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stick.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Stick.hpp"

Stick::Stick(void): AWeapon("Stick", 2, 10)
{
	return ;
}

Stick::Stick(Stick const & src):
	AWeapon(src.getName(), src.getAPCost(), src.getDamage())
{
	return ;
}

Stick::~Stick(void)
{
	return ;
}

Stick & Stick::operator=(Stick const & rhs){
	AWeapon::operator=(rhs);
	return (*this);
}

void	Stick::attack(void) const
{
	std::cout << "* tic tic *" << std::endl;
}
