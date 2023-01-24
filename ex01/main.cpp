/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:54:41 by mal               #+#    #+#             */
/*   Updated: 2023/01/24 12:13:54 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string option;
	std::string index;
	PhoneBook directory;
	int i = 0;

	while (1)
	{
		std::cout << "Choose an option (ADD, SEARCH, EXIT) : ";
		getline(std::cin, option);
		if (!option.compare("ADD"))
		{
			directory.getContact(i)->setNewContact();
			std::cout << directory.getContact(i)->getFirstName() << std::endl;
			i++;
		}
		else if (!option.compare("SEARCH"))
		{
			std::cout << "Enter the index of contact (0-7) : ";
			getline(std::cin, index);
			int num_index = stoi(index);
			directory.getContact(num_index)->dispContact(num_index);
		}
			//std::cout << "Call to SEARCH function" << std::endl;
		else if (!option.compare("EXIT") || std::cin.eof())
			exit(0);
		if (i == 8)
			i = 0;
		option.clear();
	}
	return (0);
}