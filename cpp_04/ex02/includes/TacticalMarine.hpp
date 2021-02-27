/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <string>
# include <iostream>

# include "../includes/ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {

public:

	TacticalMarine(void);
	TacticalMarine(TacticalMarine const & src);
	virtual ~TacticalMarine(void);

	TacticalMarine &	operator=(TacticalMarine const & rhs);
	
	virtual ISpaceMarine* clone(void) const;
	virtual void battleCry(void) const;
	virtual void rangedAttack(void) const;
	virtual void meleeAttack(void) const;

};

#endif
