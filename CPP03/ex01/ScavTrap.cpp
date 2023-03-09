/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:05:40 by malord            #+#    #+#             */
/*   Updated: 2023/03/09 09:13:42 by malord           ###   ########.fr       */
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

ScavTrap::ScavTrap(ScavTrap const &other)
{
    _attackDmg = other._attackDmg;
    _hitPts    = other._hitPts;
    _energyPts = other._energyPts;
    _name      = other._name;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
    if (this != &rhs)
    {
        this->_attackDmg = rhs.getAttackDmg();
        this->_energyPts = rhs.getEnergyPts();
        this->_hitPts    = rhs.getHitPts();
        this->_name      = rhs.getName();
    }
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->getEnergyPts() >= 1 && this->getHitPts() > 0)
    {
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDmg()
                  << " points of damage!" << std::endl;
        this->_energyPts--;
    }
    else if (this->getEnergyPts() < 1)
        std::cout << "ScavTrap " << this->getName() << " is out of energy. Please charge." << std::endl;
    else
        std::cout << "ScavTrap " << this->getName() << " can't attack because it's dead and not a zombie." << std::endl;
}

void ScavTrap::guardGate(void) const
{
    if (this->getHitPts() > 0)
        std::cout << "ScavTrap " << this->getName() << " has entered Gate keeper mode." << std::endl;
    else
        std::cout << "ScavTrap " << this->getName() << " can't enter Gate keeper mode, it has no more Hit points."
                  << std::endl;
}