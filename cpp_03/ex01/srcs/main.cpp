/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 11:09:54 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"

#include <iostream>

int main(void)
{
	FragTrap	frag1("frag1");
	FragTrap	frag2("frag2");

	frag1.rangedAttack(frag2.getName());
	frag2.takeDamage(frag1.getRangeAttackDamage());
	frag1.meleeAttack(frag2.getName());
	frag2.takeDamage(frag1.getMeleeAttackDamage());
	// frag1.meleeAttack(frag2.getName());
	// frag2.takeDamage(frag1.getMeleeAttackDamage());
	// frag1.meleeAttack(frag2.getName());
	// frag2.takeDamage(frag1.getMeleeAttackDamage());
	// frag1.meleeAttack(frag2.getName());
	// frag2.takeDamage(frag1.getMeleeAttackDamage());

	// frag2.beRepaired(30);
	frag2.beRepaired(30);

	frag2.vaulthunter_dot_exe(frag1.getName());
	// frag2.vaulthunter_dot_exe(frag1.getName());
	// frag2.vaulthunter_dot_exe(frag1.getName());
	// frag2.vaulthunter_dot_exe(frag1.getName());
	// frag2.vaulthunter_dot_exe(frag1.getName());

	// frag2.rest(30);
	// frag2.vaulthunter_dot_exe(frag1.getName());
	// frag2.vaulthunter_dot_exe(frag1.getName());

	std::cout << std::endl;

	ScavTrap	scav1("scav1");
	ScavTrap	scav2("scav2");

	scav1.rangedAttack(scav2.getName());
	scav2.takeDamage(scav1.getRangeAttackDamage());
	scav1.meleeAttack(scav2.getName());
	scav2.takeDamage(scav1.getMeleeAttackDamage());
	scav1.meleeAttack(scav2.getName());
	scav2.takeDamage(scav1.getMeleeAttackDamage());
	scav1.meleeAttack(scav2.getName());
	scav2.takeDamage(scav1.getMeleeAttackDamage());
	scav1.meleeAttack(scav2.getName());
	scav2.takeDamage(scav1.getMeleeAttackDamage());

	scav2.beRepaired(20);

	scav2.challengeNewcomer();
	scav2.challengeNewcomer();
	scav2.challengeNewcomer();
	scav2.challengeNewcomer();

	scav2.rest(10);
	scav2.challengeNewcomer();
	
	return (0);
}
