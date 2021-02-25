/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void): _rawBits(0), _nbBits(8) 
{
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
	this->_nbBits = 8;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs){
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}