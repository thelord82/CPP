/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:01:37 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 10:21:43 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
int main()
{
    FragTrap frag1;
    FragTrap frag2("Robocop");
    FragTrap frag3("Baymax");

    frag2.attack(frag3.getName());
    frag3.takeDamage(frag2.getAttackDmg());
    frag2.attack(frag3.getName());
    frag3.takeDamage(frag2.getAttackDmg());
    frag3.beRepaired(30);
    frag2.attack(frag3.getName());
    frag3.takeDamage(frag2.getAttackDmg());
    frag2.attack(frag3.getName());
    frag3.takeDamage(frag2.getAttackDmg());
    frag2.attack(frag3.getName());
    frag3.takeDamage(frag2.getAttackDmg());
    frag2.HighFivesGuys();
}