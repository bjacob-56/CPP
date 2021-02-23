#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

# define CAPACITY 8

class Contact {

public:
	static int	_nbInst;

	Contact(void);
	~Contact(void);

	void	set_contact_info(int index, std::string fi, std::string la, std::string ni, std::string lo, std::string po, 
			std::string em, std::string ph, std::string bi, std::string fa, std::string un, 
			std::string da);
	void	display_name_info(void);
	void	display_full_info(void);

private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string	_postalAddress;
	std::string	_emailAddress;
	std::string	_phoneNumber;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
	int			_index;
};

#endif