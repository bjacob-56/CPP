/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:01:20 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 12:05:17 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak() {
	std::string*        panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;

	delete panthere;
}

int main(void)
{
	memoryLeak();
	
	return (0);
}