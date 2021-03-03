/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:07 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/03 11:33:50 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <exception>

template <typename T>
class Array
{
public:
	Array(void): _size(0), _array(NULL)
	{
		// std::cout << "Default constructor called" << '\n';
	}

	Array(unsigned int n): _size(n)
	{
		_array = new T[n]();
	}
	
	Array(Array const & src): _size(0), _array(NULL)
	{
		*this = src;
		return ;
	}

	~Array(void)
	{
		// std::cout << "Destructor called" << '\n';
		if (_array)
			delete [] _array;
	}

	unsigned int	size(void) const
	{
		return (_size);
	}

	T * getArray(void) const
	{
		return _array;
	}
	
	Array & operator=(Array const & src)
	{
		if (_array)
			delete [] _array;
		_size = src.size();
		
		_array = new T[_size];

		T *srcArray = src.getArray();
		unsigned int i = 0;
		while (i < _size)
		{
			_array[i] = srcArray[i];
			i++;
		}
		return (*this);
	}

	class OutOfLimitsException: public std::exception
	{
		public:
			virtual const char* what(void) const throw()
			{
				return ("Index is out of limits");
			}
	};

	T & operator[](const int i) const
	{
		if (i < 0 || static_cast<unsigned int>(i) >= _size)
			throw OutOfLimitsException();
		else
			return _array[i];
	}

private:
	unsigned int	_size;
	T				*_array;

};

// ********************************************************** //

template <typename T>
void	print_tab(Array<T> & a)
{
	unsigned int i;
	T *aArray = a.getArray();

	if (!aArray)
	{
		std::cout << "Array is empty" << '\n';
		return ;
	}
	i = 0;
	while (i < a.size())
	{
		std::cout << aArray[i] << '\n';
		i++;
	}
}

#endif
