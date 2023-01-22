/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:03:14 by malord            #+#    #+#             */
/*   Updated: 2023/01/22 16:12:55 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    return;
}

PhoneBook::~PhoneBook(void) {
    return;
}

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

void Contact::setFirstName(Contact instance) const {
    std::string input;
    std::cout << "Enter first name: ";
    std::cin >> instance._firstName;
    std::cout << "First name is : " << instance._firstName << std::endl;
}