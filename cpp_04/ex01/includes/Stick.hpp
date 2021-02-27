/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stick.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef STICK_HPP
# define STICK_HPP

# include <string>
# include <iostream>

# include "../includes/AWeapon.hpp"

class Stick: public AWeapon {

public:

	Stick(void);
	Stick(Stick const & src);
	virtual ~Stick(void);

	Stick &	operator=(Stick const & rhs);
	
	void	attack(void) const;

private:

};

#endif
