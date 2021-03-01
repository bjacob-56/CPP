/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template_class.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_CLASS_HPP
# define TEMPLATE_CLASS_HPP

# include <string>
# include <iostream>

class Template_class {

public:

	Template_class(void);
	Template_class(Template_class const & src);
	~Template_class(void);

	Template_class &	operator=(Template_class const & rhs);
	
	int	getValue(void) const;

private:
	int	_value;

};

#endif