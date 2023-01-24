/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:02:15 by mal               #+#    #+#             */
/*   Updated: 2023/01/24 11:10:32 by malord           ###   ########.fr       */
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

std::string Contact::getPhoneNumber(void) const {
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