/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:54:41 by mal               #+#    #+#             */
/*   Updated: 2023/01/24 11:04:55 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string option;
	Contact	instance;
	PhoneBook directory;
	int i = 0;

	while (1)
	{
		std::cout << "Choose an option (ADD, SEARCH, EXIT) : ";
		getline(std::cin, option);
		if (!option.compare("ADD"))
		{
			directory.getContact(i)->setNewContact();
			std::cout << directory.getContact(0)->getFirstName() << std::endl;
			//std::cout << directory.getContact(0)->getFirstName() << std::endl;
			//std::cout << instance[0].getFirstName() << std::endl;
			//std::cout << instance[0].getLastName() << std::endl;
			//std::cout << instance[0].getNickname() << std::endl;
			//std::cout << instance[0].getPhoneNumber() << std::endl;
			//std::cout << instance[0].getSecret() << std::endl;
			i++;
		}
		else if (!option.compare("SEARCH"))
			std::cout << "Call to SEARCH function" << std::endl;
		else if (!option.compare("EXIT") || std::cin.eof())
			exit(0);
		if (i == 8)
			i = 0;
		option.clear();
	}
	return (0);
}