/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 08:58:21 by malord            #+#    #+#             */
/*   Updated: 2023/04/19 12:05:38 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(void) {}

ATarget::ATarget(const std::string &type) : _type(type) {}

ATarget::ATarget(const ATarget &copy) : _type(copy._type)
{
    *this = copy;
}

ATarget &ATarget::operator=(const ATarget &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

ATarget::~ATarget(void) {}

const std::string &ATarget::getType(void) const
{
    return this->_type;
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}