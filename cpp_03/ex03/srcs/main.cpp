/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 10:04:03 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/ClapTrap.hpp"
#include "../includes/NinjaTrap.hpp"

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
	// scav1.meleeAttack(scav2.getName());
	// scav2.takeDamage(scav1.getMeleeAttackDamage());
	// scav1.meleeAttack(scav2.getName());
	// scav2.takeDamage(scav1.getMeleeAttackDamage());
	// scav1.meleeAttack(scav2.getName());
	// scav2.takeDamage(scav1.getMeleeAttackDamage());

	scav2.beRepaired(20);

	scav2.challengeNewcomer();
	// scav2.challengeNewcomer();
	// scav2.challengeNewcomer();
	// scav2.challengeNewcomer();

	// scav2.rest(10);
	// scav2.challengeNewcomer();
	
	std::cout << std::endl;

	NinjaTrap	ninja1("ninja1");
	NinjaTrap	ninja2("ninja2");

	ninja1.rangedAttack(ninja2.getName());
	ninja2.takeDamage(ninja1.getRangeAttackDamage());
	ninja1.meleeAttack(ninja2.getName());
	ninja2.takeDamage(ninja1.getMeleeAttackDamage());

	ninja2.beRepaired(20);

	ClapTrap clap1("clap1");

	ninja2.ninjaShoebox(clap1);
	ninja2.ninjaShoebox(frag1);
	ninja2.ninjaShoebox(scav1);
	ninja2.ninjaShoebox(ninja1);

	return (0);
}
