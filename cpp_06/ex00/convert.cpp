/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:00:44 by bjacob            #+#    #+#             */
/*   Updated: 2021/03/02 13:56:08 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

// -----  Matching  -----

int	ft_is_char(std::string arg)
{
	if (std::regex_match(arg,std::regex(CHAR)))
		return (1);
	return (0);
}

int	ft_is_int(std::string arg)
{
	if (std::regex_match(arg,std::regex(NUMERIC)))
		return (1);
	return (0);
}

int	ft_is_float(std::string arg)
{
	if (std::regex_match(arg,std::regex(FLOAT)))
		return (1);
	return (0);
}

int	ft_is_double(std::string arg)
{
	if (std::regex_match(arg,std::regex(DOUBLE)))
		return (1);
	return (0);
}

// -----  Print  -----

void	print_char(long double ld)
{
	if (ld >= 32 && ld <= 126)
		std::cout << "char: '" << static_cast<char>(ld) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void	print_int(long double ld)
{
	if (ld >= std::numeric_limits<int>::min() && ld <= std::numeric_limits<int>::max())
		std::cout << "int: " << static_cast<int>(ld) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void	print_float(long double ld)
{
	float f = static_cast<float>(ld);
	if (f != static_cast<float>(std::numeric_limits<long>::max()) + 1)
		std::cout << "float: " << f << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;
}

void	print_double(long double ld)
{
	double d = static_cast<double>(ld);
	if (d != static_cast<double>(std::numeric_limits<long>::max()) + 1)
		std::cout << "double: " << d << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}

void	print_values(long double ld)
{
	print_char(ld);
	print_int(ld);
	std::cout << std::fixed;
	std::cout.precision(1);
	print_float(ld);
	print_double(ld);
}

void	print_nan(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void	print_inf(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: +inff" << std::endl;
	std::cout << "double: +inf" << std::endl;
}

void	print_minus_inf(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: -inff" << std::endl;
	std::cout << "double: -inf" << std::endl;
}


// -----  Casting  -----

void	cast_to_char(const char *str)
{
	long double temp = *str;
	print_values(temp);
}

void	cast_to_int(const char *str)
{
	long double temp = strtol(str, NULL, 10);
	print_values(temp);
}

void	cast_to_float(const char *str)
{
	long double temp = strtof(str, NULL);
	print_values(temp);
}

void	cast_to_double(const char *str)
{
	long double temp = strtod(str, NULL);
	print_values(temp);
}

void	convert_value(std::string arg)
{
	const char *str = arg.c_str();

	if (arg == "nan" || arg == "nanf")
		print_nan();
	else if (arg == "+inf" || arg == "+inff")
		print_inf();
	else if (arg == "-inf" || arg == "-inff")
		print_minus_inf();
	else if (ft_is_int(arg))
		cast_to_int(str);
	else if (ft_is_float(arg))
		cast_to_float(str);
	else if (ft_is_double(arg))
		cast_to_double(str);
	else if (ft_is_char(arg))
		cast_to_char(str);
}


// -----  Main  -----

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 0;
	}
	convert_value(argv[1]);
	return 0;
}
