/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include <iostream>

#include "../includes/AMateria.hpp"

class Cure: public AMateria {

public:

	Cure(void);
	Cure(Cure const & src);
	~Cure(void);

	Cure &	operator=(Cure const & rhs);
	
	virtual Cure* clone(void) const;
	virtual void use(ICharacter& target);
};

#endif
