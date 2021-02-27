/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/27 15:46:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ISquad.hpp"
#include "../includes/ISpaceMarine.hpp"
#include "../includes/Squad.hpp"
#include "../includes/TacticalMarine.hpp"
#include "../includes/AssaultTerminator.hpp"

void	display_squad(ISquad *s)
{
	for (int i = 0; i < s->getCount(); ++i)
	{
	    ISpaceMarine* cur = s->getUnit(i);
	    cur->battleCry();
		cur->rangedAttack();
	    cur->meleeAttack();
	}
}

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	Squad* vlc = new Squad;

	vlc->push(bob);
	vlc->push(jim);

	std::cout << " ---------- Testing vlc ----------"<< std::endl;
	std::cout << "Number of SpaceMarines in the Squad vlc = " << vlc->getCount() << std::endl;

	std::cout << std::endl;

	display_squad(vlc);

	std::cout << std::endl;

	std::cout << " ---------- Copying and assigning vlc ----------" << std::endl;

	ISquad* vlc2 = new Squad(*vlc);
	ISpaceMarine* temp = new AssaultTerminator;
	Squad* vlc3 = new Squad();
	vlc3->push(temp);
	std::cout << "Number of SpaceMarines in the Squad vlc3 = " << vlc3->getCount() << std::endl;
	*vlc3 = *vlc; 
	std::cout << "vlc copied in vlc3" << std::endl;
	delete vlc;

	std::cout << std::endl;

	std::cout << " ---------- Testing vlc2 ----------" << std::endl;
	std::cout << "Number of SpaceMarines in the Squad vlc2 = " << vlc2->getCount() << std::endl;
	ISpaceMarine* alan = new TacticalMarine;
	vlc2->push(alan);
	std::cout << "Number of SpaceMarines in the Squad vlc2 = " << vlc2->getCount() << std::endl;
	
	std::cout << std::endl;
	display_squad(vlc2);
	std::cout << std::endl;

	std::cout << " ---------- Testing vlc3 ----------" << std::endl;
	std::cout << "Number of SpaceMarines in the Squad vlc3 = " << vlc3->getCount() << std::endl;

	std::cout << std::endl;
	display_squad(vlc3);
	std::cout << std::endl;

	delete vlc2;
	delete vlc3;

	return 0;
}
