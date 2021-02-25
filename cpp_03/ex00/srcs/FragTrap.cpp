/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/25 15:18:19 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name): _name(name)
{
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	return ;
}

FragTrap::~FragTrap(void)
{
	return ;
}

int	FragTrap::getValue(void) const
{
	return (this->_value);
}

FragTrap & FragTrap::operator=(FragTrap const & rhs){
	this->_value = rhs.getValue();
	return (*this);
}
