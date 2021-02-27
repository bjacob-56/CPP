/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <string>
# include <iostream>

# include "../includes/AWeapon.hpp"

class PlasmaRifle: public AWeapon {

public:

	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & src);
	virtual ~PlasmaRifle(void);

	PlasmaRifle &	operator=(PlasmaRifle const & rhs);
	
	void	attack(void) const;

private:

};

#endif
