/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:05:51 by malord            #+#    #+#             */
/*   Updated: 2023/01/26 22:24:47 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    return;
}

HumanB::~HumanB(void)
{
    return;
}

void    HumanB::attack(void) const
{
    std::cout << this->_name << " attacks with their ";
    if (this->_weapon)
        std::cout << this->_weapon->getType() << std::endl;
    else
        std::cout << "ding-a-ling";
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
