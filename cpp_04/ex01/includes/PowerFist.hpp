/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <string>
# include <iostream>

# include "../includes/AWeapon.hpp"

class PowerFist: public AWeapon {

public:

	PowerFist(void);
	PowerFist(PowerFist const & src);
	virtual ~PowerFist(void);

	PowerFist &	operator=(PowerFist const & rhs);
	
	void	attack(void) const;

private:

};

#endif
