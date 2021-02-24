/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:08:05 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/24 11:24:22 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	
	std::string	fileName = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	
	if (!fileName.compare("") || !s1.compare("") || !s2.compare(""))
	{
		std::cout << "Wrong arguments" << std::endl;
		return (0);
	}
	
	std::string	fileNameReplace = fileName;
	fileNameReplace.append(".replace");

	std::fstream	fd;
	std::fstream	fdReplace;

	fd.open(fileName, std::fstream::in);
	if (!fd)
	{
		std::cout << "\"" << fileName << "\" file does not exist" << std::endl;
		return (0);
	}
	
	fdReplace.open(fileNameReplace, std::fstream::out);

	std::stringstream	ss;
	ss	<< fd.rdbuf();
	std::string	str = ss.str();

	int	pos = 0;
	while ((pos = str.find(s1, 0)) != -1)
	{
		str.erase(pos, s1.length());
		str.insert(pos, s2);
	}

	fdReplace << str;

	fd.close();
	fdReplace.close();

	return (0);
}
