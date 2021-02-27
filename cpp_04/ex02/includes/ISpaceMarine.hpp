/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <string>
# include <iostream>

class ISpaceMarine {

public:

	virtual ~ISpaceMarine(void) {};

	virtual ISpaceMarine* clone(void) const = 0;
	virtual void battleCry(void) const = 0;
	virtual void rangedAttack(void) const = 0;
	virtual void meleeAttack(void) const = 0;

};

#endif
