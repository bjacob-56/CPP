/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Squad.hpp"

Squad::Squad(void): _count(0), _squad(NULL)
{
	return ;
}

// Squad::Squad(ISquad const &src)
// {

// }

Squad::Squad(Squad const & src)
{
	if (src.getCount())
	{
		this->_squad = new ISpaceMarine*[src.getCount()];
		int i = -1;
		while (++i < src.getCount())
			this->_squad[i] = src.getUnit(i)->clone();
		this->_count = src.getCount();
	}
	else
	{
		this->_count = 0;
		this->_squad = NULL;
	}
	return ;
}

Squad::~Squad(void)
{
	if (!this->_count)
		return ;
	int i = -1;
	while (++i < this->_count)
		delete this->_squad[i];
	delete [] this->_squad;
	return ;
}

int	Squad::getCount(void) const
{
	return (this->_count);
}

ISpaceMarine* Squad::getUnit(int n) const
{
	if (this->_count <= n)
		return (NULL);
	return (this->_squad[n]);
}

int Squad::push(ISpaceMarine* sm)
{
	if (!sm)
		return (-1);
	int i = -1;
	while (++i < this->_count)
		if (sm == this->_squad[i])
			return (-1);
	
	ISpaceMarine **newSquad = new ISpaceMarine*[this->_count + 1];

	i = -1;
	while (++i < this->_count)
		newSquad[i] = this->_squad[i];
	newSquad[i] = sm;

	delete [] this->_squad;
	this->_squad = newSquad;
	this->_count++;
	
	return (this->_count);
}

Squad & Squad::operator=(Squad const & rhs){
	int i = -1;
	if (this->_count)
	{
		while (++i < this->_count)
			delete this->_squad[i];
		delete this->_squad;
	}
	if (rhs.getCount())
	{
		this->_squad = new ISpaceMarine*[rhs.getCount()];
		i = -1;
		while (++i < rhs.getCount())
			this->_squad[i] = rhs.getUnit(i)->clone();
		this->_count = rhs.getCount();
	}
	else
	{
		this->_count = 0;
		this->_squad = NULL;
	}
	return (*this);
}
