/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 15:14:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:16:16 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*ptr;
	std::string	&ref = str;
	
	ptr = &str;

	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);
}