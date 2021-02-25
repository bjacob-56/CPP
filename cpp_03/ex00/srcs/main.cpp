/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/25 17:50:55 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

int main(void)
{
	FragTrap brian("Brian");
	FragTrap john("John");

	brian.rangedAttack(john.getName());
	john.takeDamage(brian.getRangeAttackDamage());
	brian.meleeAttack(john.getName());
	john.takeDamage(brian.getMeleeAttackDamage());
	brian.meleeAttack(john.getName());
	john.takeDamage(brian.getMeleeAttackDamage());
	brian.meleeAttack(john.getName());
	john.takeDamage(brian.getMeleeAttackDamage());
	brian.meleeAttack(john.getName());
	john.takeDamage(brian.getMeleeAttackDamage());

	john.beRepaired(30);
	john.beRepaired(30);

	john.vaulthunter_dot_exe(brian.getName());
	john.vaulthunter_dot_exe(brian.getName());
	john.vaulthunter_dot_exe(brian.getName());
	john.vaulthunter_dot_exe(brian.getName());
	john.vaulthunter_dot_exe(brian.getName());

	john.rest(30);
	john.vaulthunter_dot_exe(brian.getName());
	john.vaulthunter_dot_exe(brian.getName());

	return (0);
}
