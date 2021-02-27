/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LittleRabbit.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LITTLERABBIT_HPP
# define LITTLERABBIT_HPP

# include <string>
# include <iostream>

#include "../includes/Enemy.hpp"

class LittleRabbit: public Enemy {

public:

	LittleRabbit(void);
	LittleRabbit(LittleRabbit const & src);
	virtual ~LittleRabbit(void);

	LittleRabbit &	operator=(LittleRabbit const & rhs);

private:

};

#endif
