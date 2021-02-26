/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Peon.hpp"

Peon::Peon(void)
{
	return ;
}

Peon::Peon(Peon const & src)
{
	*this = src;
	return ;
}

Peon::~Peon(void)
{
	return ;
}

int	Peon::getValue(void) const
{
	return (this->_value);
}

Peon & Peon::operator=(Peon const & rhs){
	this->_value = rhs.getValue();
	return (*this);
}
