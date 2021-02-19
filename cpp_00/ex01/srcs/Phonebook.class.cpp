#include "../includes/Phonebook.class.hpp"

Phonebook::Phonebook(void) {
	this->_nbContacts = 0;
	return ;
}

Phonebook::~Phonebook(void) {
	return ;
}

void	Phonebook::ft_add(void) {
	if (Phonebook::_nbContacts == 8)
	{
		std::cout << "The phonebook is already full (8 contacts)" << std::endl;
		return ;
	}
	std::cout << "Please enter the contact name" << std::endl;
	std::cin >> this->_phonebook[this->_nbContacts];
	this->_nbContacts++;
	std::cout << "The contact has been added to the phonebook" << std::endl;
}

void	Phonebook::ft_search(void) {
	std::string	name;
	int 		i;

	if (Phonebook::_nbContacts == 0)
	{
		std::cout << "The phonebook is empty" << std::endl;
		return ;
	}
	std::cout << "Please enter the contact name you're looking for" << std::endl;
	std::cin >> name;
	i = -1;
	while (++i < this->_nbContacts)
		if (!name.compare(this->_phonebook[i]))
		{
			std::cout << "The contact has been found in the phonebook" << std::endl;
			return ;
		}
	std::cout << "The contact is not registered in the phonebook" << std::endl;
}
