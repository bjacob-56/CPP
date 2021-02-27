/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include <iostream>

#include "../includes/AMateria.hpp"

class Ice: public AMateria {

public:

	Ice(void);
	Ice(Ice const & src);
	~Ice(void);

	Ice &	operator=(Ice const & rhs);
	
	virtual Ice* clone(void) const;
	virtual void use(ICharacter& target);
};

#endif
