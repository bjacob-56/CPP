/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:00:44 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/02 16:38:50 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <exception>
#include <iostream>

class Base
{
public:
	virtual ~Base(void){}
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

#endif