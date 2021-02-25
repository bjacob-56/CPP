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

// =====  Constructor and destructor =====

Fixed::Fixed(void): _rawBits(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int i)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_rawBits = i * pow(2, Fixed::_nbBits);
	return ;
}

Fixed::Fixed(const float f)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(pow(2, Fixed::_nbBits) * f);
	return ;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}


// =====  Functions =====

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
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


// =====  Operator overload =====

Fixed & Fixed::operator=(Fixed const & rhs){
	// std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	Fixed	res;
	res.setRawBits(this->_rawBits + rhs._rawBits);
	return (res);
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	Fixed	res;
	res.setRawBits(this->_rawBits - rhs._rawBits);
	return (res);
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	Fixed	res;
	res.setRawBits((long)this->_rawBits * (long)rhs._rawBits / pow(2, Fixed::_nbBits));
	return (res);
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	Fixed	res;
	res.setRawBits((long)this->_rawBits * (long)pow(2, Fixed::_nbBits) / rhs._rawBits);
	return (res);
}

int	Fixed::operator>(Fixed const & rhs) const
{
	return (this->_rawBits > rhs._rawBits);
}

int	Fixed::operator<(Fixed const & rhs) const
{
	return (this->_rawBits < rhs._rawBits);
}

int	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_rawBits >= rhs._rawBits);
}

int	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_rawBits <= rhs._rawBits);
}

int	Fixed::operator==(Fixed const & rhs) const
{
	return (this->_rawBits == rhs._rawBits);
}

int	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_rawBits != rhs._rawBits);
}


// =====  Increment / Decrement =====

Fixed &	Fixed::operator++(void)
{
	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++*this;
	return(temp);
}

Fixed &	Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	--*this;
	return (temp);
}


// =====  Min / Max  =====

// static Fixed & min(Fixed & nb1, Fixed & nb2)
Fixed const & Fixed::min(Fixed const & nb1, Fixed const & nb2)
{
	if (nb1 < nb2)
		return (nb1);
	return (nb2);
}

// static Fixed & max(Fixed & nb1, Fixed & nb2)
Fixed const & Fixed::max(Fixed const & nb1, Fixed const & nb2)
{
	if (nb1 >= nb2)
		return (nb1);
	return (nb2);
}

Fixed const &	max(Fixed const &nb1, Fixed const &nb2)
{
	return (Fixed::max(nb1, nb2));
}

Fixed const &	min(Fixed const &nb1, Fixed const &nb2)
{
	return (Fixed::min(nb1, nb2));
}

// =====  Stream overload  =====

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
