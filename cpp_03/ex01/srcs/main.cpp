/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 08:49:45 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(void)
{
	FragTrap	brian("Brian");
	FragTrap	john("John");

	brian.rangedAttack(john.getName());
	john.takeDamage(brian.getRangeAttackDamage());
	brian.meleeAttack(john.getName());
	john.takeDamage(brian.getMeleeAttackDamage());
	// brian.meleeAttack(john.getName());
	// john.takeDamage(brian.getMeleeAttackDamage());
	// brian.meleeAttack(john.getName());
	// john.takeDamage(brian.getMeleeAttackDamage());
	// brian.meleeAttack(john.getName());
	// john.takeDamage(brian.getMeleeAttackDamage());

	// john.beRepaired(30);
	john.beRepaired(30);

	john.vaulthunter_dot_exe(brian.getName());
	// john.vaulthunter_dot_exe(brian.getName());
	// john.vaulthunter_dot_exe(brian.getName());
	// john.vaulthunter_dot_exe(brian.getName());
	// john.vaulthunter_dot_exe(brian.getName());

	// john.rest(30);
	// john.vaulthunter_dot_exe(brian.getName());
	// john.vaulthunter_dot_exe(brian.getName());

	std::cout << std::endl;

	ScavTrap	steven("Steven");
	ScavTrap	aimy("Aimy");

	steven.rangedAttack(aimy.getName());
	aimy.takeDamage(steven.getRangeAttackDamage());
	steven.meleeAttack(aimy.getName());
	aimy.takeDamage(steven.getMeleeAttackDamage());
	steven.meleeAttack(aimy.getName());
	aimy.takeDamage(steven.getMeleeAttackDamage());
	steven.meleeAttack(aimy.getName());
	aimy.takeDamage(steven.getMeleeAttackDamage());
	steven.meleeAttack(aimy.getName());
	aimy.takeDamage(steven.getMeleeAttackDamage());

	aimy.beRepaired(20);

	aimy.challengeNewcomer();
	aimy.challengeNewcomer();
	aimy.challengeNewcomer();
	aimy.challengeNewcomer();

	aimy.rest(10);
	aimy.challengeNewcomer();
	
	return (0);
}
