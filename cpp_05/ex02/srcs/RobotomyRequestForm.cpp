/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("RobotomyRequestForm", 72, 45)
{
	_target = target;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):
	Form("RobotomyRequestForm", 72, 45)
{
	_target = src.getTarget();
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

static void	execution(std::string target)
{
	std::cout << "Ziiiiiiiiiiiiiiiiiii" << std::endl;
	std::cout << target <<  " has been successfully robotomized" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
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

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs){
	Form::operator=(rhs);
	return (*this);
}

std::ostream & operator<<(std::ostream & o, RobotomyRequestForm const & f)
{
	if (f.getSigned())
		o << f.getName() << ", form signed, signature grade: " << f.getSignatureGrade() << ", execution grade: " << f.getExecutionGrade() << std::endl;
	else
		o << f.getName() << ", form not signed, signature grade: " << f.getSignatureGrade() << ", execution grade: " << f.getExecutionGrade() << std::endl;
	return (o);
}
