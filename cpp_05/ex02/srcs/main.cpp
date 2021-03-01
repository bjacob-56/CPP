/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/01 16:26:57 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << " -------- init --------" << std::endl;

	Bureaucrat	boss("Boss", 1);
	std::cout << boss;
	Bureaucrat	intern("Intern", 130);
	std::cout << intern;
	Bureaucrat	manager("Manager", 40);
	std::cout << manager;
	
	std::cout << std::endl;

//	FORMS CREATION --------

	Form *formS = new ShrubberyCreationForm("Brian");
	std::cout << *formS;

	Form *formR = new RobotomyRequestForm("Aimy");
	std::cout << *formR;

	Form *formP = new PresidentialPardonForm("Alan");
	std::cout << *formP;

	std::cout << std::endl;

// ------------------------

	std::cout << " -------- test Shrubbery --------" << std::endl;
	
	intern.executeForm(*formS);
	boss.signForm(*formS);
	intern.executeForm(*formS);
	
	std::cout << std::endl;
	std::cout << " -------- test Robotomy --------" << std::endl;
	
	manager.executeForm(*formR);
	manager.signForm(*formR);
	intern.executeForm(*formR);
	manager.executeForm(*formR);

	std::cout << std::endl;
	std::cout << " -------- test Presidential --------" << std::endl;

	manager.signForm(*formP);
	boss.signForm(*formP);
	boss.executeForm(*formP);

	std::cout << std::endl;

	delete formS;
	delete formR;
	delete formP;
	
	return (0);
}
