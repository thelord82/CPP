/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:06:03 by malord            #+#    #+#             */
/*   Updated: 2023/01/26 22:25:05 by mal              ###   ########.fr       */
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

std::string const & Weapon::getType(void) const
{
    return this->_type;
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}