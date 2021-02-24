/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void): _weight(1500)
{
	return ;
}

Brain::~Brain(void)
{
	return ;
}

std::string Brain::identify(void) const
{
	long	add;
	std::stringstream	ss;

	add = (long)this;
	ss << "0x" << std::uppercase << std::hex << add;
	return(ss.str());
}

int	Brain::get_weight(void) const
{
	return(this->_weight);
}
