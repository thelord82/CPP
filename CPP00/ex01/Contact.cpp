/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:02:15 by mal               #+#    #+#             */
/*   Updated: 2023/02/07 15:49:18 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void) {
	return;
}

Contact::~Contact(void){
	return;
}

std::string Contact::getFirstName(void) const {
	return this->_firstName;
}

std::string Contact::getLastName(void) const {
	return this->_lastName;
}

std::string Contact::getNickname(void) const {
	return this->_nickname;
}

std::string Contact::getPhone(void) const {
	return this->_phoneNumber;
}

std::string Contact::getSecret(void) const {
	return this->_darkestSecret;
}

void Contact::setFirstName(void) {
	std::cout << "Enter first name: ";
	getline(std::cin, this->_firstName);
	if (std::cin.eof())
		exit(0);
	if (this->_firstName.length() == 0)
	{
		std::cout << "Error: first name field cannot be empty" << std::endl;
		setFirstName();
	}
}

void Contact::setLastName(void) {
	std::cout << "Enter last name: ";
	getline(std::cin, this->_lastName);
	if (std::cin.eof())
		exit(0);
	if (this->_lastName.length() == 0)
	{
		std::cout << "Error: last name field cannot be empty" << std::endl;
		setLastName();
	}
}

void Contact::setNickname(void) {
	std::cout << "Enter nickname: ";
	getline(std::cin, this->_nickname);
	if (std::cin.eof())
		exit(0);
	if (this->_nickname.length() == 0)
	{
		std::cout << "Error: nickname field cannot be empty" << std::endl;
		setNickname();
	}
}

void Contact::setPhone(void) {
	std::cout << "Enter phone number: ";
	getline(std::cin, this->_phoneNumber);
	if (std::cin.eof())
		exit(0);
	if (this->_phoneNumber.length() == 0)
	{
		std::cout << "Error: phone number field cannot be empty" << std::endl;
		setPhone();
	}
	for (int i = 0; i < (int)this->_phoneNumber.length(); i++)
	{
		if (this->_phoneNumber[i] < 48 || this->_phoneNumber[i] > 57)
		{
			std::cout << "Error: you must only use digits for the phone number." << std::endl;
			setPhone();
		}
	}
}

void Contact::setSecret(void) {
	std::cout << "Enter darkest secret: ";
	getline(std::cin, this->_darkestSecret);
	if (std::cin.eof())
		exit(0);
	if (this->_darkestSecret.length() == 0)
	{
		std::cout << "Error: darkest secret field cannot be empty" << std::endl;
		setSecret();
	}
}

void Contact::setNewContact(void) {
	this->setFirstName();
	this->setLastName();
	this->setNickname();
	this->setPhone();
	this->setSecret();
}

void Contact::dispContact(int index) const {
	if (getFirstName().length() == 0)
	{
		std::cout << "Error: Contact is empty" << std::endl;
		run_phonebook();
	}
	std::cout << std::setw(10) << index + 1 << " | ";
	if (getFirstName().length() > 10)
		std::cout << std::setw(10) << getFirstName().substr(0, 9) << "." << " | ";
	else
		std::cout << std::setw(10) << getFirstName() << " | ";
	if (getLastName().length() > 10)
		std::cout << std::setw(10) << getLastName().substr(0, 9) << "." << " | ";
	else
		std::cout << std::setw(10) << getLastName() << " | ";
	if (getNickname().length() > 10)
		std::cout << std::setw(10) << getNickname().substr(0, 9) << "." << std::endl;
	else
		std::cout << std::setw(10) << getNickname() << std::endl;
}

void Contact::dispFullContact(Contact* contact) const {
	if (contact->getFirstName().empty())
		std::cout << "Error: this contact doesn't exist." << std::endl;
	else
	{
		std::cout << "First name : " << contact->getFirstName() << std::endl;
		std::cout << "Last name : " << contact->getLastName() << std::endl;
		std::cout << "Nickname : " << contact->getNickname() << std::endl;
		std::cout << "Phone number : " << contact->getPhone() << std::endl;
		std::cout << "Darkest secret : " << contact->getSecret() << std::endl;
	}
}

void Contact::run_phonebook() const {
	std::string option;
	std::string index;
	PhoneBook 	directory;
	int i = 0;

	while (1)
	{
		std::cout << "Choose an option (ADD, SEARCH, EXIT) : ";
		getline(std::cin, option);
		if (!option.compare("ADD"))
		{
			directory.getContact(i)->setNewContact();
			i++;
			if (i == 8)
				i = 0;
		}
		else if (!option.compare("SEARCH"))
		{
			int j = 0;
			if (directory.getContact(j)->getFirstName().empty())
			{
				std::cout << "Phonebook is empty." << std::endl;
				run_phonebook();
			}
			while (!(directory.getContact(j)->getFirstName().empty()) && j < 8)
			{
				directory.getContact(j)->dispContact(j);
				j++;
			}
			std::cout << "Enter the index of contact (1-8) : ";
			getline(std::cin, index);
			if (std::cin.eof())
				exit(0);
			if (index.length() > 1 || index[0] < 49 || index[0] > 56)
				std::cout << "Error: index must be between 1 and 8" << std::endl;
			else
			{
				int num_index = stoi(index) - 1;
				dispFullContact(directory.getContact(num_index));
			}
		}
		else if (!option.compare("EXIT") || std::cin.eof())
			exit(0);
		option.clear();
	}
}