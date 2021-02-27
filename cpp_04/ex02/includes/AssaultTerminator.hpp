/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <string>
# include <iostream>

# include "../includes/ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {

public:

	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const & src);
	virtual ~AssaultTerminator(void);

	AssaultTerminator &	operator=(AssaultTerminator const & rhs);
	
	virtual ISpaceMarine* clone(void) const;
	virtual void battleCry(void) const;
	virtual void rangedAttack(void) const;
	virtual void meleeAttack(void) const;

};

#endif
