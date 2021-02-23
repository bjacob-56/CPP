#ifndef PONY_HPP
# define PONY_HPP

#include <string>
#include <iostream>

class Pony {

public:

	Pony(void);
	~Pony(void);

	std::string get_name(void);
	std::string get_color(void);
	int 		get_age(void);
	void		set_name(std::string name);
	void		set_color(std::string color);
	void		set_age(int	age);
	void		display_info(void);
	static int	get_nb_ponies(void);

private:

	std::string	_name;
	std::string	_color;
	int			_age;
	static int	_nbInst;
};

#endif