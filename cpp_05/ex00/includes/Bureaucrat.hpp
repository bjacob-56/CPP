/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include  <exception>

class Bureaucrat {

public:

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat(void);

	Bureaucrat &	operator=(Bureaucrat const & rhs);
	
	std::string	getName(void) const;
	int	getGrade(void) const;
	void	incGrade(void);
	void	decGrade(void);

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
	int	_grade;

	Bureaucrat(void);

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & b);

#endif
