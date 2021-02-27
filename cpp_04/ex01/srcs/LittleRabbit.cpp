/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LittleRabbit.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/LittleRabbit.hpp"

LittleRabbit::LittleRabbit(void): Enemy(10, "LittleRabbit")
{
	std::cout << "* squick squick *" << std::endl;
	return ;
}

LittleRabbit::LittleRabbit(LittleRabbit const & src):
	Enemy(src.getHP(), src.getType())
{
	return ;
}

LittleRabbit::~LittleRabbit(void)
{
	std::cout << "* Oooooooh *" << std::endl;
	return ;
}

LittleRabbit & LittleRabbit::operator=(LittleRabbit const & rhs){
	Enemy::operator=(rhs);
	return (*this);
}
