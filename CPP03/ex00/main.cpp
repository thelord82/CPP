/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:53:52 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 19:45:50 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    // TEST FOR THE FUNCTIONALITY OF PROGRAM AND CLASSES
    
    ClapTrap   player1("Donald");
    ClapTrap   player2;
    ClapTrap   player3("Gontran");
    // ClapTrap player3;
    player1.setDamage(2);
    player1.attack(player2.getName());
    player2.takeDamage(player1.getAttackDmg());
    // std::cout << "player1 has " << player1.getEnergyPts() << " points." << std::endl;
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
    player2.takeDamage(player1.getAttackDmg());
    player1.attack(player2.getName());
    player2.takeDamage(player1.getAttackDmg());
    player1.attack(player2.getName());
    player2.takeDamage(player1.getAttackDmg());
    player1.attack(player2.getName());
    player1.attack(player2.getName());
    player1.attack(player2.getName());
    player1.attack(player2.getName());
    player1.attack(player2.getName());
    return (0);

    // TEST FOR THE = OPERATOR OVERLOAD
    
    // ClapTrap playerToCopy("asshole");
    // ClapTrap newPlayer("butthole");
    //
    // playerToCopy.setDamage(12);
    // std::cout << newPlayer.getName() << std::endl;
    // std::cout << newPlayer.getHitPts() << std::endl;
    // std::cout << newPlayer.getEnergyPts() << std::endl;
    // std::cout << newPlayer.getAttackDmg() << std::endl;
    // newPlayer = playerToCopy;
    // std::cout << newPlayer.getName() << std::endl;
    // std::cout << newPlayer.getHitPts() << std::endl;
    // std::cout << newPlayer.getEnergyPts() << std::endl;
    // std::cout << newPlayer.getAttackDmg() << std::endl;
    //
    // return (0);
}