/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <string>
# include <iostream>

#include "../includes/Enemy.hpp"

class RadScorpion: public Enemy {

public:

	RadScorpion(void);
	RadScorpion(RadScorpion const & src);
	~RadScorpion(void);

	RadScorpion &	operator=(RadScorpion const & rhs);

	virtual void	takeDamage(int damage);

private:

};

#endif
