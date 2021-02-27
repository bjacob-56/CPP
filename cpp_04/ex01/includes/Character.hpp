/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>

# include "../includes/AWeapon.hpp"
# include "../includes/Enemy.hpp"

class Character {

public:

	Character(std::string const & name);
	Character(Character const & src);
	~Character(void);

	Character &	operator=(Character const & rhs);
	
	std::string	getName(void) const; // a ajouter ?
	int	getAP(void) const;
	AWeapon	*getWeapon(void) const;

	void recoverAP(void);
    void equip(AWeapon* weapon);
    void attack(Enemy* enemy);

private:
	std::string	_name;
	int	_ap;
	AWeapon *_weapon;

	Character(void);

};

std::ostream &	operator<<(std::ostream & o, Character const & c);

#endif
