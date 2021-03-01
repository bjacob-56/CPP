/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

Form::Form(std::string name, int signatureGrade, int executionGrade):
	_name(name), _signed(0), _signatureGrade(signatureGrade), _executionGrade(executionGrade)
{
	if (signatureGrade < 1 || executionGrade < 1)
		throw Form::GradeTooHighException();
	else if (signatureGrade > 150 || executionGrade > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & src):
	_name(src.getName()), _signatureGrade(src.getSignatureGrade()), _executionGrade(src.getExecutionGrade())
{
	if (_signatureGrade < 1 || _executionGrade < 1)
		throw Form::GradeTooHighException();
	else if (_signatureGrade > 150 || _executionGrade > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::~Form(void)
{
	return ;
}

std::string	Form::getName(void) const
{
	return (_name);
}

int	Form::getSigned(void) const
{
	return (_signed);
}

int	Form::getSignatureGrade(void) const
{
	return (_signatureGrade);
}

int	Form::getExecutionGrade(void) const
{
	return (_executionGrade);
}

std::string	Form::getTarget(void) const
{
	return (_target);
}

void	Form::beSigned(Bureaucrat & b)
{
	if (b.getGrade() <= _signatureGrade)
		_signed = 1;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what(void) const throw()
{
	return("the grade is too high");
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return("the grade is too low");
}

const char* Form::FormNotSignedException::what(void) const throw()
{
	return("the form is not signed");
}

Form & Form::operator=(Form const & rhs){
	_signed = rhs.getSigned();
	_target = rhs.getTarget();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Form const & f)
{
	if (f.getSigned())
		o << f.getName() << ", form signed, signature grade: " << f.getSignatureGrade() << ", execution grade: " << f.getExecutionGrade() << std::endl;
	else
		o << f.getName() << ", form not signed, signature grade: " << f.getSignatureGrade() << ", execution grade: " << f.getExecutionGrade() << std::endl;
	return (o);
}
