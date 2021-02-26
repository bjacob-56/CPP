/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim {

public:

	Victim(std::string name);
	Victim(Victim const & src);
	~Victim(void);

	Victim &	operator=(Victim const & rhs);
	
	std::string	getName(void) const;

	virtual void getPolymorphed() const;

private:
	std::string	_name;

};

std::ostream & operator<<(std::ostream & o, Victim & v);

#endif
