/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:04 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:35 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incGrade(void)
{
	if (_grade > 1)
		_grade--;
}

void	Bureaucrat::decGrade(void)
{
	if (_grade < 150)
		_grade++;
}

void	Bureaucrat::signForm(Form & f)
{
	try
	{
		f.beSigned(*this);
		std::cout << _name << " signs " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " can't sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return("the grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return("the grade is too low");
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs){
	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (o);
}
