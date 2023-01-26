/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:17:29 by malord            #+#    #+#             */
/*   Updated: 2023/01/26 12:56:11 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie1("Tess");
	Zombie *zombie2 = newZombie("Joel");
	zombie1.announce();
	zombie2->announce();
	randomChump("Ellie");
	delete zombie2;
}