/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:07:31 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 10:13:39 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    _name      = "Frag default";
    _hitPts    = 100;
    _energyPts = 100;
    _attackDmg = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _name      = name;
    _hitPts    = 100;
    _energyPts = 100;
    _attackDmg = 30;
    std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::HighFivesGuys(void)
{
    std::cout << this->getName() << " asks for a big High Five !" << std::endl;
}