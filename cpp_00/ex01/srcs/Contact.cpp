/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjacob <bjacob@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:00:40 by bjacob            #+#    #+#             */
/*   Updated: 2021/02/23 12:00:41 by bjacob           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(void) {
	Contact::_nbInst++;
	return ;
}

Contact::~Contact(void) {
	Contact::_nbInst--;
	return ;
}

void	Contact::set_contact_info(int index, std::string fi, std::string la, std::string ni, std::string lo, std::string po, 
				std::string em, std::string ph, std::string bi, std::string fa, std::string un, 
				std::string da) {
	this->_index = index;
	this->_firstName = fi;
	this->_lastName = la;
	this->_nickname = ni;
	this->_login = lo;
	this->_postalAddress = po;
	this->_emailAddress = em;
	this->_phoneNumber = ph;
	this->_birthdayDate = bi;
	this->_favoriteMeal = fa;
	this->_underwearColor = un;
	this->_darkestSecret = da;
	return ;
}

std::string	get_tronc_str(std::string str){
	int	len;
	std::string	str_tronc;

	len = str.length();
	str_tronc = str;
	if (len >= 10)
	{
		str_tronc[9] = '.';
		str_tronc.erase(10, len - 10);
	}
	while (len++ < 10)
		str_tronc.insert(0, " ");
	return (str_tronc);
}

void	Contact::display_name_info(void){
	std::string	firstName;
	std::string	lastName;
	std::string	login;

	firstName = get_tronc_str(this->_firstName);
	lastName = get_tronc_str(this->_lastName);
	login = get_tronc_str(this->_login);

	std::cout << "|         " << this->_index << "|" << firstName << "|" << lastName << "|" << login << "|" << std::endl;
}

void	Contact::display_full_info(void){
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Postal address: " << this->_postalAddress << std::endl;
	std::cout << "Email address: " << this->_emailAddress << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Birthday date: " << this->_birthdayDate << std::endl;
	std::cout << "Favorite meal: " << this->_favoriteMeal << std::endl;
	std::cout << "Underwear color: " << this->_underwearColor << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}

int	Contact::_nbInst = 0;
