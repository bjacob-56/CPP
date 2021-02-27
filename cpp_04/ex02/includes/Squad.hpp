/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <string>
# include <iostream>

# include "../includes/ISquad.hpp"
# include "../includes/ISpaceMarine.hpp"

class Squad: public ISquad {

public:

	Squad(void);
	Squad(Squad const & src);
	virtual ~Squad(void);

	virtual Squad &	operator=(Squad const & rhs);

	virtual int	getCount(void) const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine*);

private:
	int	_count;
	ISpaceMarine **_squad;
};

#endif
