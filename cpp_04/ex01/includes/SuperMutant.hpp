/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <string>
# include <iostream>

#include "../includes/Enemy.hpp"

class SuperMutant: public Enemy {

public:

	SuperMutant(void);
	SuperMutant(SuperMutant const & src);
	virtual ~SuperMutant(void);

	SuperMutant &	operator=(SuperMutant const & rhs);

	virtual void	takeDamage(int damage);

private:

};

#endif
