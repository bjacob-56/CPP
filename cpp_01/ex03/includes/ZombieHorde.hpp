/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:42:51 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:12:36 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include "../includes/Zombie.hpp"

class ZombieHorde {

public:

	ZombieHorde(int n);
	~ZombieHorde(void);
	void	announce(void);

private:

	int	_nbZombies;
	Zombie	*_horde;
	
	Zombie *randomZombie(void);
	
};

#endif