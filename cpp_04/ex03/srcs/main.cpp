/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/27 17:50:41 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	Character* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	std::cout << std::endl;

	tmp = src->createMateria("ice");
	bob->equip(tmp);
	bob->use(0, *me);
	
	*bob = *me;
	bob->use(1, *me);

	std::cout << std::endl;

	tmp = src->createMateria("ice");
	bob->equip(tmp);
	me->equip(tmp);
	me->unequip(2);
	me->unequip(2);

	std::cout << "bob 2 xp = " << bob->getInventoryMateria(2)->getXP() << std::endl;
	bob->use(2, *me);
	std::cout << "bob 2 xp = " << bob->getInventoryMateria(2)->getXP() << std::endl;
	bob->use(2, *me);
	std::cout << "bob 2 xp = " << bob->getInventoryMateria(2)->getXP() << std::endl;
	bob->use(2, *me);
	std::cout << "bob 2 xp = " << bob->getInventoryMateria(2)->getXP() << std::endl;

	std::cout << std::endl;

	Character* john = new Character(*bob);
	john->use(2, *me);
	std::cout << "john 2 xp = " << john->getInventoryMateria(2)->getXP() << std::endl;

	delete john;
	delete bob;
	delete me;
	delete src;

	return 0;
}