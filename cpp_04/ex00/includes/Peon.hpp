/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>

# include "../includes/Victim.hpp"

class Peon : public Victim {

public:

	Peon(std::string name);
	Peon(Peon const & src);
	virtual ~Peon(void);

	Peon &	operator=(Peon const & rhs);

	virtual void getPolymorphed() const;

private:
	Peon(void);

};

#endif
