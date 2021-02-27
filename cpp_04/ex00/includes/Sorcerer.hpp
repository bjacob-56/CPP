/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/27 15:08:00 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>

# include "../includes/Victim.hpp"
# include "../includes/Peon.hpp"
# include "../includes/Pony.hpp"

class Sorcerer {

public:

	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & src);
	~Sorcerer(void);

	Sorcerer &	operator=(Sorcerer const & rhs);
	std::string	getName(void) const;
	std::string	getTitle(void) const;

	void polymorph(Victim const & v) const;
	void polymorph(Peon const & p) const;
	void polymorph(Pony const & p) const;

private:
	std::string	_name;
	std::string	_title;

	Sorcerer(void);

};

std::ostream & operator<<(std::ostream & o, Sorcerer const & s);

#endif
