/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

class Bureaucrat;

class Form {

public:

	Form(std::string, int, int);
	Form(Form const & src);
	~Form(void);

	Form &	operator=(Form const & rhs);
	
	std::string	getName(void) const;
	int	getSigned(void) const;
	int	getSignatureGrade(void) const;
	int	getExecutionGrade(void) const;

	void	beSigned(Bureaucrat & b);

	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char* what(void) const throw();
	};

	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char* what(void) const throw();
	};

private:
	const std::string	_name;
	int	_signed;
	const int	_signatureGrade;
	const int	_executionGrade;

	Form(void);

};

std::ostream & operator<<(std::ostream & o, Form const & b);

#endif
