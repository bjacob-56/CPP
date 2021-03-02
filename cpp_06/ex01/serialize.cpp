/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:00:44 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/02 16:18:01 by bjacob           ###   ########lyon.fr   */
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
	str[8] = 0;
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

	char str[9];
	std::string &ptr1 = reinterpret_cast<std::string &>(*data);
	std::string &ptr2 = reinterpret_cast<std::string &>(*(data + 28));

	fill_random_str(str);
	ptr1.assign(str, 9);

	fill_random_int(reinterpret_cast<int *>(data + 24));

	fill_random_str(str);
	ptr2.assign(str, 9);

	return (reinterpret_cast<void*>(data));
}


// -----  Deserialize  -----

Data * deserialize(void * raw)
{
	Data *data = new Data();
	char *str = reinterpret_cast<char *>(raw);

	data->s1.assign(str, 9);
	data->n = *(reinterpret_cast<int *>(str + 24));
	data->s2.assign(str + 28, 9);

	return (data);
}

// -----  Main  -----

int main(void)
{
	std::cout << "----------  SERIALIZE  ----------" << std::endl;
	void *raw = serialize();

	std::cout << std::endl;
	std::cout << "----------  DESERIALIZE  ----------" << std::endl;
	Data *data = deserialize(raw);

	std::cout << "str = " << data->s1 << std::endl << "nb = " << data->n << std::endl << "str = " << data->s2 << std::endl;
	
	return 0;
}
