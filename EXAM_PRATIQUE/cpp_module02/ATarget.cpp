/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:16:10 by malord            #+#    #+#             */
/*   Updated: 2023/04/17 23:28:15 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(void) : _type("Inconspicuous Red-brick Wall"){}

ATarget::ATarget(const ATarget &copy) : _type(copy._type)
{
    *this = copy;
}

ATarget::ATarget(const std::string &type) : _type(type)
{}

ATarget& ATarget::operator=(const ATarget &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

ATarget::~ATarget(void){}

const std::string &ATarget::getType(void) const
{
    return this->_type;
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
}