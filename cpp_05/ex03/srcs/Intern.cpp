/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const & src)
{
	*this = src;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

static Form	*makeShrubbery(std::string target)
{
	std::cout << "Intern creates shrubbery creation form" << std::endl;
	return (new ShrubberyCreationForm(target));
}

static Form	*makeRobotomy(std::string target)
{
	std::cout << "Intern creates robotomy request form" << std::endl;
	return (new RobotomyRequestForm(target));
}

static Form	*makePresidential(std::string target)
{
	std::cout << "Intern creates presidential pardon form" << std::endl;
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string formName, std::string target) const
{
	std::string	tab_name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form	*(*tab_functions[3])(std::string) = {makeShrubbery, makeRobotomy, makePresidential};

	int i = -1;
	while (++i < 3)
	{
		if (formName == tab_name[i])
			return (tab_functions[i](target));
	}
	Form	*ptr = NULL;
	std::cout << "The intern couldn't create the form: Unknown form name";
	return (ptr);
}

Intern & Intern::operator=(Intern const & rhs){
	(void)rhs;
	return (*this);
}
