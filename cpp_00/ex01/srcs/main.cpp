#include "../includes/Contact.class.hpp"

void	ft_add(Contact phonebook[8], int *nb_contacts) {
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	login;
	std::string	postalAddress;
	std::string	emailAddress;
	std::string	phoneNumber;
	std::string	birthdayDate;
	std::string	favoriteMeal;
	std::string	underwearColor;
	std::string	darkestSecret;

	if (*nb_contacts == 8)
	{
		std::cout << "The phonebook is already full (8 contacts)" << std::endl;
		return ;
	}
	std::cout << "First name:" << std::endl;
	std::cin >> firstName;
	std::cout << "Last name:" << std::endl;
	std::cin >> lastName;
	std::cout << "Nickname:" << std::endl;
	std::cin >> nickname;
	std::cout << "Login:" << std::endl;
	std::cin >> login;
	std::cout << "Postal address:" << std::endl;
	std::cin >> postalAddress;
	std::cout << "Email address:" << std::endl;
	std::cin >> emailAddress;
	std::cout << "Phone number:" << std::endl;
	std::cin >> phoneNumber;
	std::cout << "Birthday date:" << std::endl;
	std::cin >> birthdayDate;
	std::cout << "Favorite meal:" << std::endl;
	std::cin >> favoriteMeal;
	std::cout << "Underwear color:" << std::endl;
	std::cin >> underwearColor;
	std::cout << "Darkest secret:" << std::endl;
	std::cin >> darkestSecret;

	Contact	contact;
	
	phonebook[*nb_contacts]
	.set_contact_info(*nb_contacts + 1, firstName, lastName, nickname, login, postalAddress, emailAddress, phoneNumber,
					birthdayDate, favoriteMeal, underwearColor, darkestSecret);
	(*nb_contacts)++;

	std::cout << "The contact has been added to the phonebook" << std::endl;
}

void	ft_search(Contact phonebook[8], int nb_contacts) {
	int 		i;

	std::cout << "   Index  |First name| Last name|   Login  " << std::endl;
	i = -1;
	while (++i < nb_contacts)
		phonebook[i].display_name_info();
	std::cout << "Which index do you want to fully display?" << std::endl;
	std::cin >> i;

	if (i >= 1 && i <= nb_contacts)
		phonebook[i - 1].display_full_info();
	else
		std::cout << "Wrong index" << std::endl;
}

int main(void)
{
	Contact phonebook[8];
	std::string	buff;
	int			nb_contacts;

	nb_contacts = 0;
	while (1)
	{
		std::cout << "Please enter a command (ADD, SEARCH or EXIT)" << std::endl;
		std::cin >> buff;
		if (!buff.compare("ADD"))
			ft_add(phonebook, &nb_contacts);
		else if (!buff.compare("SEARCH"))
			ft_search(phonebook, nb_contacts);
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