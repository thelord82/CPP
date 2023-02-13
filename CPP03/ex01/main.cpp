/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:53:52 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 09:17:28 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap robot1;
    ScavTrap robot2("Wall-E");
    ScavTrap robot3("T1000");

    robot3.attack(robot2.getName());
    robot2.takeDamage(robot3.getAttackDmg());
    robot3.attack(robot2.getName());
    robot2.takeDamage(robot3.getAttackDmg());
    robot3.attack(robot2.getName());
    robot2.takeDamage(robot3.getAttackDmg());
    robot3.attack(robot2.getName());
    robot2.takeDamage(robot3.getAttackDmg());
    robot3.attack(robot2.getName());
    robot2.takeDamage(robot3.getAttackDmg());
    robot3.attack(robot2.getName());
    robot2.takeDamage(robot3.getAttackDmg());
    robot3.attack(robot2.getName());
    robot2.takeDamage(robot3.getAttackDmg());
    robot2.guardGate();
    robot2.attack(robot3.getName());
}