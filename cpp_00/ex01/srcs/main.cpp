#include "../includes/Phonebook.class.hpp"

int main(void)
{
	Phonebook instance;
	std::string	buff;

	while (1)
	{
		std::cout << "Please enter a command (ADD, SEARCH or EXIT)" << std::endl;
		std::cin >> buff;
		if (!buff.compare("ADD"))
			instance.ft_add();
		else if (!buff.compare("SEARCH"))
			instance.ft_search();
		else if (!buff.compare("EXIT"))
		{
			std::cout << "Phonebook closed" << std::endl;
			return 0;
		}
		else
			std::cout << "Command not valid" << std::endl;
	}
	return 0;
}