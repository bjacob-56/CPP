/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include <iostream>

#include "../includes/IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

public:

	MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	virtual ~MateriaSource(void);

	MateriaSource &	operator=(MateriaSource const & rhs);
	
	virtual void learnMateria(AMateria* m);
	virtual AMateria* createMateria(std::string const & type);
	AMateria*	getSourceMateria(int n) const;

private:
	AMateria* _source[4];

};

#endif
