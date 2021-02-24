/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:00:44 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 12:00:45 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_print_toupper(char *str)
{
	int i;

	i = -1;
	if (!str)
		return ;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			std::cout << char(str[i] + 'A' - 'a');
		else
			std::cout << char(str[i]);
	}
}

int main(int argc, char **argv)
{
	int i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	i = 0;
	while (++i < argc)
		ft_print_toupper(argv[i]);
	std::cout << std::endl;
	return 0;
}
