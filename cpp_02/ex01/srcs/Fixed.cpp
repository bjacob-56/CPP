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

Fixed::Fixed(void): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	long lo;

	lo = (long)i * pow(2, Fixed::_nbBits);
	if (lo > INT_MAX || lo < INT_MIN)
	{
		std::cout << "Int " << i << " is to big" << std::endl;
		this->_rawBits = 0;
		return ;
	}
	this->_rawBits = pow(2, Fixed::_nbBits) * i;
	return ;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	long lo;

	lo = (long)f * pow(2, Fixed::_nbBits);
	if (lo > INT_MAX || lo < INT_MIN)
	{
		std::cout << "Float " << f << " is to big" << std::endl;
		this->_rawBits = 0;
		return ;
	}
	this->_rawBits = roundf(pow(2, Fixed::_nbBits) * f);
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs){
	std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

int	Fixed::toInt(void) const
{
	return (this->_rawBits / pow(2, Fixed::_nbBits));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (float)pow(2, Fixed::_nbBits));
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
