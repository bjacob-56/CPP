/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/26 09:20:09 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <string>
# include <iostream>

#include "../includes/FragTrap.hpp"
#include "../includes/NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:

	SuperTrap(std::string name);
	SuperTrap(SuperTrap const & src);
	~SuperTrap(void);

	SuperTrap &	operator=(SuperTrap const & rhs);

};

#endif
