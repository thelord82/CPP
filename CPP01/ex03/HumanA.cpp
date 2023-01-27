/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:04:59 by malord            #+#    #+#             */
/*   Updated: 2023/01/26 19:18:19 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

HumanA::HumanA(void)
{
	std::cout << "Constructor HumanA called" << std::endl;
	return;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor HumanA called" << std::endl;
	return;
}

void    HumanA::attack(void) const
{
	std::cout << this->_name << "attacks with their " << this->_weapon << std::endl;
}


//GETTERS IF THE SOLUTION OF ATTACK WITH INCLUDED this->something CALLS DON'T WORK
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