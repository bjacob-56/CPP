/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/04 13:42:43 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/mutantStack.hpp"

void	displayMutant(MutantStack<int> const & mstack)
{
	std::cout << '\n';
	MutantStack<int>::const_iterator it = mstack.begin();
	MutantStack<int>::const_iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	    std::cout << *it << std::endl;
		++it;
	}
}

void	reverse_displayMutant(MutantStack<int> const & mstack)
{
	std::cout << '\n';
	MutantStack<int>::const_reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::const_reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
	    std::cout << *rit << std::endl;
		++rit;
	}
}

void	downMutant(MutantStack<int> & mstack)
{
	std::cout << '\n';
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
	    (*it)--;
		++it;
	}
}

void	displayList(std::list<int> const & lst)
{
	std::cout << '\n';
	std::list<int>::const_iterator it = lst.begin();
	std::list<int>::const_iterator ite = lst.end();
	++it;
	--it;
	while (it != ite)
	{
	    std::cout << *it << std::endl;
		++it;
	}
}

void	reverse_displayList(std::list<int> const & lst)
{
	std::cout << '\n';
	std::list<int>::const_reverse_iterator rit = lst.rbegin();
	std::list<int>::const_reverse_iterator rite = lst.rend();
	while (rit != rite)
	{
	    std::cout << *rit << std::endl;
		++rit;
	}
}

void	downList(std::list<int> & lst)
{
	std::cout << '\n';
	std::list<int>::iterator it = lst.begin();
	std::list<int>::iterator ite = lst.end();
	while (it != ite)
	{
	    (*it)--;
		++it;
	}
}

int main()
{
	std::cout << "\n*********** MutantStack ***********\n\n";

	MutantStack<int> mstack;

	mstack.push(42);
	mstack.push(16);
	mstack.push(51);
	
	std::cout << "size of mstack is " << mstack.size() << std::endl;
	std::cout << "top of mstack is " << mstack.top() << std::endl;

	std::cout << "* pop *\n";
	mstack.pop();

	std::cout << "size of mstack is " << mstack.size() << std::endl;
	std::cout << "top of mstack is " << mstack.top() << std::endl << std::endl;
	
	mstack.push(-9);
	mstack.push(12);
	mstack.push(1993);
	mstack.push(-32);
	mstack.push(37);

	displayMutant(mstack);
	downMutant(mstack);
	displayMutant(mstack);

	reverse_displayMutant(mstack);

	std::stack<int> s(mstack);
	
	// ******************************************************************************** //

	std::cout << "\n\n*********** List ***********\n\n";

	std::list<int> lst;

	lst.push_back(42);
	lst.push_back(16);
	lst.push_back(51);
	
	std::cout << "size of lst is " << lst.size() << std::endl;
	std::cout << "top of lst is " << lst.back() << std::endl;

	std::cout << "* pop *\n";
	lst.pop_back();

	std::cout << "size of lst is " << lst.size() << std::endl;
	std::cout << "top of lst is " << lst.back() << std::endl << std::endl;
	
	lst.push_back(-9);
	lst.push_back(12);
	lst.push_back(1993);
	lst.push_back(-32);
	lst.push_back(37);

	displayList(lst);
	downList(lst);
	displayList(lst);

	reverse_displayList(lst);

	std::list<int> l(lst);

	return 0;
}
