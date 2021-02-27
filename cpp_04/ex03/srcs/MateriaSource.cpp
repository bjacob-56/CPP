/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	_source[0] = NULL;
	_source[1] = NULL;
	_source[2] = NULL;
	_source[3] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	int i = -1;
	while (++i < 4)
	{
		if (src.getSourceMateria(i))
			_source[i] = src.getSourceMateria(i)->clone();
		else
			_source[i] = NULL;
	}
	return ;
}

MateriaSource::~MateriaSource(void)
{
	int i = -1;
	while (++i < 4)
		if (_source[i])
			delete _source[i];
	return ;
	return ;
}

AMateria*	MateriaSource::getSourceMateria(int n) const
{
	if (n < 0 || n > 3)
		return (NULL);
	return (_source[n]);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	int i = -1;
	while (++i < 4)
		if (!_source[i])
		{
			_source[i] = m;
			return ;
		}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = -1;
	while (++i < 4)
	{
		if (_source[i] && type == _source[i]->getType())
			return (_source[i]->clone());
	}
	return (NULL);
}


MateriaSource & MateriaSource::operator=(MateriaSource const & rhs){
	int i = -1;
	while (++i < 4)
		if (_source[i])
			delete _source[i];
	i = -1;
	while (++i < 4)
	{
		if (rhs.getSourceMateria(i))
			_source[i] = rhs.getSourceMateria(i)->clone();
		else
			_source[i] = NULL;
	}
	return (*this);
}
