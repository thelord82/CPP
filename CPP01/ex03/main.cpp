/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:04:01 by mal               #+#    #+#             */
/*   Updated: 2023/01/27 08:56:23 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"
#include "HumanB.hpp"

//TODO Pas supposé en avoir, mais check leaks ! 
int main()
{
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("tarte au sucre");
        jim.attack();
    }
    return (0);
}