/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/01 14:52:10 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main(void)
{
	Bureaucrat	bob("Bob", 50);
	std::cout << bob;

	std::cout << std::endl;

	try
	{
		Form form1("formula1", 0, 100);		
	}
	catch (std::exception & e)
	{
		std::cout << "Error formula1: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	Form form("formula1", 49, 100);
	std::cout << form;

	std::cout << std::endl;

	std::cout << form.getName() << " signature boolean = " << form.getSigned() << std::endl; 
	bob.signForm(form);
	std::cout << form.getName() << " signature boolean = " << form.getSigned() << std::endl; 

	std::cout << std::endl;

	bob.incGrade();
	std::cout << bob;

	std::cout << std::endl;

	bob.signForm(form);
	std::cout << form.getName() << " signature boolean = " << form.getSigned() << std::endl; 

	return (0);
}
