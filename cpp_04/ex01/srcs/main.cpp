/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/27 11:38:02 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AWeapon.hpp"
#include "../includes/PlasmaRifle.hpp"
#include "../includes/PowerFist.hpp"
#include "../includes/Enemy.hpp"
#include "../includes/SuperMutant.hpp"
#include "../includes/RadScorpion.hpp"
#include "../includes/Character.hpp"
#include "../includes/Stick.hpp"
#include "../includes/LittleRabbit.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();
	Enemy* sm = new SuperMutant();
	Enemy* lr = new LittleRabbit();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* st = new Stick();

	pr->attack();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << std::endl;
	
	std::cout << "sm has " << sm->getHP() << std::endl;
	std::cout << "Plasma Rifle damage is " << pr->getDamage() << std::endl;
	me->attack(sm);
	std::cout << "sm has " << sm->getHP() << std::endl;

	std::cout << std::endl;

	me->equip(pf);
	std::cout << *me;
	me->attack(sm);
	me->attack(sm);
	std::cout << *me;
	me->attack(sm);
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	me->attack(sm);

	std::cout << std::endl;

	me->attack(lr);

	std::cout << std::endl;

	me->equip(st);
	me->attack(sm);

	delete me;
	delete sm;
	delete pr;
	delete pf;
	delete st;
	
	return 0;
}
