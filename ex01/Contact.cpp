/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:02:15 by mal               #+#    #+#             */
/*   Updated: 2023/01/22 15:35:35 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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

void Contact::setFirstName(void) const {
    std::string input;
    std::cout << "Enter first name: ";
    std::cin >> input;
    //this->_firstName = input;
    std::cout << "First name is : " << input << std::endl;
}