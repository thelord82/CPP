/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:53:52 by malord            #+#    #+#             */
/*   Updated: 2023/02/10 10:21:12 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap player1("Donald");
    ClapTrap player2;
    ClapTrap player3("Gontran");
    //ClapTrap player3;
    player1.setDamage(2);
    player1.attack(player2.getName());
    player2.takeDamage(player1.getAttackDmg());
    //std::cout << "player1 has " << player1.getEnergyPts() << " points." << std::endl;
    player1.attack(player2.getName());
    player2.takeDamage(player1.getAttackDmg());
    player1.attack(player2.getName());
    player2.takeDamage(player1.getAttackDmg());
    player1.attack(player2.getName());
    player2.takeDamage(player1.getAttackDmg());
    player2.beRepaired(4);
    player1.attack(player2.getName());
    player2.takeDamage(player1.getAttackDmg());
    player1.attack(player2.getName());
    player1.attack(player2.getName());
    player1.attack(player2.getName());
    player1.attack(player2.getName());
    player1.attack(player2.getName());
    player1.attack(player2.getName());
    player1.attack(player2.getName());
    player1.attack(player2.getName());
    return (0);
}