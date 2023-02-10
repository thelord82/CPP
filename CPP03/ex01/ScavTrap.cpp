/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:05:40 by malord            #+#    #+#             */
/*   Updated: 2023/02/10 12:57:03 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    _name      = "Scav default";
    _hitPts    = 100;
    _energyPts = 50;
    _attackDmg = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _name      = name;
    _hitPts    = 100;
    _energyPts = 50;
    _attackDmg = 20;
    std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->getEnergyPts() >= 1)
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDmg()
                  << " points of damage!" << std::endl;
        this->_energyPts--;
    }
    else
        std::cout << "ScavTrap " << this->getName() << " is out of energy. Please charge." << std::endl;
}

void ScavTrap::guardGate(void) const
{
    std::cout << "ScavTrap " << this->getName() << " has entered Gate keeper mode." << std::endl;
}