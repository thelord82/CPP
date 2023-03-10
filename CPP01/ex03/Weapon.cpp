/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:06:03 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 10:41:35 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _type(weapon)
{
    return;
}

Weapon::~Weapon(void)
{
    return;
}

std::string const &Weapon::getType(void) const
{
    return this->_type;
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}