/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:04:01 by mal               #+#    #+#             */
/*   Updated: 2023/02/13 10:50:36 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        Weapon arme("gros gun");

        HumanA bob("Bob", club);
        HumanA charlie("Charlie", arme);
        bob.attack();
        charlie.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("some other type of club");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("Tarte aux bleuets");
        jim.attack();
        club.setType("");
        jim.attack();
    }
    return (0);
}