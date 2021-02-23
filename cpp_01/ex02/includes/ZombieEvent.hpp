/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:07:58 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 14:15:03 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include "../includes/Zombie.hpp"

# include <cstdlib>
# include <ctime>

class ZombieEvent{

public:

	ZombieEvent(void);
	~ZombieEvent(void);
	Zombie	*newZombie(std::string name);
	void	randomChump(void);
	void	setZombieType(std::string type);

private:
	std::string	_type;

};

#endif