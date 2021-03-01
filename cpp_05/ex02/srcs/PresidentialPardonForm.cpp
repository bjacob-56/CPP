/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("PresidentialPardonForm", 25, 5)
{
	_target = target;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):
	Form("PresidentialPardonForm", 25, 5)
{
	_target = src.getTarget();
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

static void	execution(std::string target)
{
	std::cout << target << " has been forgiven by Zafod Beeblebrox" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
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

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs){
	Form::operator=(rhs);
	return (*this);
}

std::ostream & operator<<(std::ostream & o, PresidentialPardonForm const & f)
{
	if (f.getSigned())
		o << f.getName() << ", form signed, signature grade: " << f.getSignatureGrade() << ", execution grade: " << f.getExecutionGrade() << std::endl;
	else
		o << f.getName() << ", form not signed, signature grade: " << f.getSignatureGrade() << ", execution grade: " << f.getExecutionGrade() << std::endl;
	return (o);
}
