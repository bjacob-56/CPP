#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>

class Phonebook {

public:

	Phonebook(void);
	~Phonebook(void);

	void	ft_add(void);
	void	ft_search(void);

private:

	std::string	_phonebook[8];
	int			_nbContacts;
};

#endif