/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

class Fixed {

public:

	Fixed(void);
	Fixed(const int i);
	Fixed(const float f);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &	operator=(Fixed const & rhs);
	
	Fixed	operator+(Fixed const & rhs) const;
	Fixed	operator-(Fixed const & rhs) const;
	Fixed	operator*(Fixed const & rhs) const;
	Fixed	operator/(Fixed const & rhs) const;

	int	operator>(Fixed const & rhs) const;
	int	operator<(Fixed const & rhs) const;
	int	operator>=(Fixed const & rhs) const;
	int	operator<=(Fixed const & rhs) const;
	int	operator==(Fixed const & rhs) const;
	int	operator!=(Fixed const & rhs) const;

	Fixed &	operator++(void);	// pre increment
	Fixed	operator++(int i);	// post increment
	Fixed &	operator--(void);
	Fixed	operator--(int i);

	static Fixed const & min(Fixed const & nb1, Fixed const & nb2);
	static Fixed const & max(Fixed const & nb1, Fixed const & nb2);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	int toInt(void) const;
	float toFloat(void) const;

private:
	int			_rawBits;
	static const int	_nbBits = 8;

};

Fixed const & max(Fixed const & nb1, Fixed const & nb2);
Fixed const & min(Fixed const & nb1, Fixed const & nb2);
std::ostream &	operator<<(std::ostream & o, Fixed const & rhs); 

#endif