/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:01:11 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 12:01:12 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Pony.hpp"

Pony::Pony(void){
	this->_name = "Little Pony";
	this->_color = "black";
	this->_age = 0;
	Pony::_nbInst++;
	std::cout << "A pony is born!" << std::endl;
	return ;
}

Pony::~Pony(void){
	Pony::_nbInst--;
	std::cout << this->_name << " died." << std::endl;
	return ;
}

std::string	Pony::get_name(void){
	return (this->_name);
}

std::string	Pony::get_color(void){
	return (this->_color);
}

int	Pony::get_age(void)
{
	return (this->_age);
}

void	Pony::set_name(std::string name)
{
	this->_name = name;
	return ;
}

void	Pony::set_color(std::string color)
{
	this->_color = color;
	return ;
}

void	Pony::set_age(int	age)
{
	if (age >= 0 && age <= 100)
		this->_age = age;
	else
		std::cout << "This is not a correct age for a pony..." << std::endl;
	return ;
}

void	Pony::display_info(void)
{
	std::cout << "Hey " << this->get_name() << "!" << std::endl;
	std::cout << "Your color is " << this->get_color() << "." << std::endl;
	std::cout << "You're " << this->get_age() << " years old" << std::endl;
	return ;
}

int	Pony::get_nb_ponies(void)
{
	return (Pony::_nbInst);
}

int	Pony::_nbInst = 0;