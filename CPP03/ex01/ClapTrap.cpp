/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:53:49 by malord            #+#    #+#             */
/*   Updated: 2023/02/10 12:56:53 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hitPts(10), _energyPts(10), _attackDmg(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPts(10), _energyPts(10), _attackDmg(0)
{
    std::cout << "ClapTrap Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Default destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->getEnergyPts() >= 1)
    {
        std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << getAttackDmg()
                  << " points of damage!" << std::endl;
        this->_energyPts--;
    }
    else
        std::cout << "ClapTrap " << this->getName() << " doesn't have energy. It is so vulnerable !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->getName() << " has taken " << amount << " points of damage" << std::endl;
    this->_hitPts -= amount;
    if (this->_hitPts <= 0)
    {
        std::cout << "ClapTrap " << this->getName() << " has no more Hit Points. RIP." << std::endl;
        exit(0);
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->_hitPts += amount;
    std::cout << "ClapTrap " << this->getName() << " has regained " << amount << " points. "
              << "It now has " << this->getHitPts() << std::endl;
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

void ClapTrap::setDamage(unsigned int amount)
{
    this->_attackDmg = amount;
}

// void ClapTrap::setHitPts(ClapTrap player, unsigned int amount) {
//     player._hitPts += amount;
// }
//
// void ClapTrap::setEnergyPts(ClapTrap player, unsigned int amount) {
//     player._energyPts += amount;
// }