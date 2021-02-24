/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template_class.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Template_class.hpp"

Template_class::Template_class(void)
{
	return ;
}

Template_class::Template_class(Template_class const & src)
{
	*this = src;
	return ;
}

Template_class::~Template_class(void)
{
	return ;
}

int	Template_class::getValue(void) const
{
	return (this->_value);
}

Template_class & Template_class::operator=(Template_class const & rhs){
	this->_value = rhs.getValue();
	return (*this);
}
