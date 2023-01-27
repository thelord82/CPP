/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:05:51 by malord            #+#    #+#             */
/*   Updated: 2023/01/27 09:39:37 by malord           ###   ########.fr       */
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
	if (this->_weapon->getType().empty())
		std::cout << "ding-a-ling" << std::endl;
	else
		std::cout << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
