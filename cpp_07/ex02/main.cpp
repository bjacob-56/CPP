/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/03 11:34:53 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


// *********************************************** //

int main( void )
{
	std::cout << "*************  INT array  *************" << "\n\n";
	
	Array<int> tabI1;
	Array<int> tabI2(5);

	std::cout << "Size of tabI1 is " << tabI1.size() << '\n';
	std::cout << "Size of tabI2 is " << tabI2.size() << '\n';

	std::cout << '\n';
	std::cout << "-----  tabI1  -----" << '\n';
	print_tab(tabI1);
	std::cout << '\n';
	std::cout << "-----  tabI2  -----" << '\n';
	print_tab(tabI2);
	
	int i = 0;
	while (i < static_cast<int>(tabI2.size()))
	{
		tabI2.getArray()[i] = i;
		i++;
	}
	
	std::cout << '\n';
	std::cout << "-----  tabI2  -----" << '\n';
	print_tab(tabI2);

	Array<int> tabI3 = Array<int>(tabI2);

	i = 0;
	while (i < static_cast<int>(tabI2.size()))
	{
		tabI2.getArray()[i] *= -1;
		i++;
	}	

	std::cout << '\n';
	std::cout << "-----  tabI2  -----" << '\n';
	print_tab(tabI2);

	std::cout << '\n';
	std::cout << "-----  tabI3  -----" << '\n';
	print_tab(tabI3);

	std::cout << "______  Exceptions  ______" << '\n';
	int nb;
	i = -5;
	while (i < static_cast<int>(tabI3.size()) + 5)
	{
		try
		{
			nb = tabI3[i];
			std::cout << "tabI3[" << i << "] = " << nb << '\n';
		}
		catch (std::exception & e)
		{
			std::cout << "Exception for index " << i << ": " << e.what() << '\n';
		}
		i++;
	}

	// ********************************************************************* //

	std::cout << "\n\n";
	std::cout << "*************  STRING array  *************" << '\n';

	Array<std::string> tabS1;
	Array<std::string> tabS2(4);

	std::cout << "Size of tabS1 is " << tabS1.size() << '\n';
	std::cout << "Size of tabS2 is " << tabS2.size() << '\n';

	std::cout << '\n';
	std::cout << "-----  tabS1  -----" << '\n';
	print_tab(tabS1);
	std::cout << '\n';
	std::cout << "-----  tabS2  -----" << '\n';
	print_tab(tabS2);

	tabS2.getArray()[0] = "Ceci est le ";
	tabS2.getArray()[1] = "2eme ";
	tabS2.getArray()[2] = "test ";
	tabS2.getArray()[3] = "!";

	std::cout << '\n';
	std::cout << "-----  tabS2  -----" << '\n';
	print_tab(tabS2);

	Array<std::string> tabS3(2);

	tabS3 = tabS2;

	tabS2 = tabS1;
	
	std::cout << '\n';
	std::cout << "-----  tabS2  -----" << '\n';
	print_tab(tabS2);

	std::cout << '\n';
	std::cout << "-----  tabS3  -----" << '\n';
	print_tab(tabS3);


	std::cout << "______  Exceptions  ______" << '\n';
	i = -5;
	std::string str;
	while (i < static_cast<int>(tabS3.size()) + 5)
	{
		try
		{
			str = tabS3[i];
			std::cout << "tabS3[" << i << "] = " << str << '\n';
		}
		catch (std::exception & e)
		{
			std::cout << "Exception for index " << i << ": " << e.what() << '\n';
		}
		i++;
	}

	return 0;
}
