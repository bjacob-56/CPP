/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantStack.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 15:24:13 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <string>
# include <iostream>
# include <stack>
# include <list>
# include <vector>
# include <algorithm>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T>{

public:

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	MutantStack(void): std::stack<T>() {}
	MutantStack(MutantStack const & src): std::stack<T>(src) {}
	virtual ~MutantStack(void) {}

	MutantStack &	operator=(MutantStack const & rhs)
	{
		this->std::stack<T>::operator=(rhs);
		return (*this);
	}

    iterator begin()
	{
		return (std::begin(std::stack<T>::c));
	}
    iterator end()
	{
		return (std::end(std::stack<T>::c));
	}

	const_iterator begin() const
	{
		return (std::begin(std::stack<T>::c));
	}
	const_iterator end() const
	{
		return (std::end(std::stack<T>::c));
	}

	reverse_iterator rbegin()
	{
		return (std::stack<T>::c.rbegin());
	}
    reverse_iterator rend()
	{
		return (std::stack<T>::c.rend());
	}

	const_reverse_iterator rbegin() const
	{
		return (std::stack<T>::c.rbegin());
	}
    const_reverse_iterator rend() const
	{
		return (std::stack<T>::c.rend());
	}

};

#endif
