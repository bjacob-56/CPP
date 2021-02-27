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

# include "../includes/ICharacter.hpp"
# include "../includes/AMateria.hpp"

class Character: public ICharacter {

public:

	Character(std::string const name);
	Character(Character const & src);
	virtual ~Character(void);

	Character & operator=(Character const & rhs);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	AMateria*	getInventoryMateria(int n) const;

private:
	std::string	_name;
	AMateria*	_inventory[4];

	Character(void);

};

#endif
