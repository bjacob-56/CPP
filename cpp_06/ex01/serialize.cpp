/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:00:44 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/02 15:15:01 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

// -----  Serialize  -----

void fill_random_str(char *str)
{
	char tab_str[] = "01234456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	std::cout << "str = ";

	int i = -1;
	while (++i < 8)
	{
		std::time_t t = std::time(0);
		std::tm* now = std::localtime(&t);
		int	nb = (now->tm_sec + std::rand()) % 62;
		str[i] = tab_str[nb];
		std::cout << str[i];
	}
	std::cout << std::endl;
}

void fill_random_int(int *nb)
{
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);
	*nb = (now->tm_sec * 111 + std::rand());

	std::cout << "nb = " << *nb << std::endl;
}

void	*serialize(void)
{
	char *data = new char[52];
	char str[8];
	std::string *ptr;
	
	ptr = reinterpret_cast<std::string *>(data);
	fill_random_str(str);
	(*ptr).assign(str);
std::cout << "p0" << std::endl;

	fill_random_int(reinterpret_cast<int *>(data + 8));

std::cout << "p1" << std::endl;

	ptr = reinterpret_cast<std::string *>(data + 28);
	fill_random_str(str);
	(*ptr).assign(str);

std::cout << "p2" << std::endl;

	return (reinterpret_cast<void*>(data));
}


// -----  Deserialize  -----

// Data * deserialize(void * raw)
// {
// 	Data *data = new Data();

// 	char *str = reinterpret_cast<char *>(raw);
// 	int	*nb = reinterpret_cast<int *>(reinterpret_cast<char *>(raw) + 8);

// 	data->s1 = std::string(str, 8);
// 	data->s2 = std::string(str + 12, 8);
// 	data->n = *(nb);
// 	return (data);
// }

Data * deserialize(void * raw)
{

	Data *data = new Data();

	std::string *str = reinterpret_cast<std::string *>(raw);
	int	*nb = reinterpret_cast<int *>(reinterpret_cast<char *>(raw) + 24);

	data->s1 = std::string(*str, 0, 8);
	data->s2 = std::string(*(str + 12), 8);
	data->n = *(nb);
	return (data);
}

// -----  Main  -----

int main(void)
{
	void *raw = serialize();

	Data *data = deserialize(raw);

	std::cout << std::endl << "str = " << data->s1 << std::endl << "nb = " << data->n << std::endl << "str = " << data->s2 << std::endl;
	
	return 0;
}
