/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:03:14 by malord            #+#    #+#             */
/*   Updated: 2023/01/24 10:17:14 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    return;
}

PhoneBook::~PhoneBook(void) {
    return;
}

Contact *PhoneBook::getContact(int index) {
    return &this->_contacts[index];
}