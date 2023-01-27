/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:05:51 by malord            #+#    #+#             */
/*   Updated: 2023/01/26 19:17:12 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

HumanB::HumanB(void)
{
    std::cout << "Constructor HumanB called" << std::endl;
    return;
}

HumanB::~HumanB(void)
{
    std::cout << "Destructor HumanB called" << std::endl;
    return;
}

void    HumanB::attack(void) const
{
    std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
}