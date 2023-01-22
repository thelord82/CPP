/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:54:41 by mal               #+#    #+#             */
/*   Updated: 2023/01/22 16:14:30 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
int main(void)
{
	std::string option;
	Contact	instance;

	while (1)
	{
		std::cout << "Choose an option (ADD, SEARCH, EXIT) : ";
		std::cin >> option;
		if (!option.compare("ADD"))
			instance.setFirstName(instance);
		else if (!option.compare("SEARCH"))
			std::cout << "Call to SEARCH function" << std::endl;
		else if (!option.compare("EXIT") || std::cin.eof())
			exit(0);
		option.clear();
	}
	return (0);
}

/*TODO setFirstName fonctionne, on veut faire la meme chose avec les autres fonctions
et les appeler dans une seule grande fonction setContact ou createContact. */