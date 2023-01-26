/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:04:59 by malord            #+#    #+#             */
/*   Updated: 2023/01/26 15:58:11 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

HumanA::HumanA(void)
{
    return;
}

HumanA::~HumanA(void)
{
    return;
}

//void    HumanA::getName(void)
//{
//    return (this->_name);
//}
//
//void    HumanA::getWeapon(void)
//{
//    return (this->_weapon);
//}

//void    HumanA::attack(void)
//{
//    std::cout << getName() << "attacks with their " << getWeapon() << std::endl;
//}

void    HumanA::attack(void) const
{
    std::cout << this->_name << "attacks with their " << this->_weapon << std::endl;
}