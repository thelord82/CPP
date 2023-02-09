/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:53:49 by malord            #+#    #+#             */
/*   Updated: 2023/02/09 16:17:03 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPts(10), _energyPts(10), _attackDmg(0), _name("default")
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    std::cout << "Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDmg()
              << " points of damage!" << std::endl;
    this->_energyPts--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_hitPts += amount;
    this->_energyPts--;
}

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

int ClapTrap::getHitPts(void) const
{
    return (this->_hitPts);
}

int ClapTrap::getEnergyPts(void) const
{
    return (this->_energyPts);
}

int ClapTrap::getAttackDmg(void) const
{
    return (this->_attackDmg);
}

// void ClapTrap::setHitPts(ClapTrap player, unsigned int amount) {
//     player._hitPts += amount;
// }
//
// void ClapTrap::setEnergyPts(ClapTrap player, unsigned int amount) {
//     player._energyPts += amount;
// }