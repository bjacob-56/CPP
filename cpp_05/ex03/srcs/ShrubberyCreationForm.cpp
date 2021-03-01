/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("ShrubberyCreationForm", 145, 137)
{
	_target = target;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):
	Form("ShrubberyCreationForm", 145, 137)
{
	_target = src.getTarget();
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

static void	execution(std::string target)
{
	std::fstream	fd;
	std::fstream	src;

	fd.open(target.append("_shrubbery"), std::fstream::out);
	src.open("trees", std::fstream::in);

	std::stringstream	ss;
	ss	<< src.rdbuf();
	std::string	str = ss.str();

	fd << str;

	fd.close();
	src.close();
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!_signed)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > _executionGrade)
	{
		throw Form::GradeTooLowException();
	}
	else
		execution(_target);	
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs){
	Form::operator=(rhs);
	return (*this);
}

std::ostream & operator<<(std::ostream & o, ShrubberyCreationForm const & f)
{
	if (f.getSigned())
		o << f.getName() << ", form signed, signature grade: " << f.getSignatureGrade() << ", execution grade: " << f.getExecutionGrade() << std::endl;
	else
		o << f.getName() << ", form not signed, signature grade: " << f.getSignatureGrade() << ", execution grade: " << f.getExecutionGrade() << std::endl;
	return (o);
}
