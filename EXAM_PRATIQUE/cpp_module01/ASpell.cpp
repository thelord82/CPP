/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 08:54:46 by malord            #+#    #+#             */
/*   Updated: 2023/04/19 10:14:11 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(void) {}

ASpell::ASpell(const std::string &name, const std::string &effects) : _name(name), _effects(effects) {}

ASpell::ASpell(const ASpell &copy) : _name(copy._name), _effects(copy._effects)
{
    *this = copy;
}

ASpell &ASpell::operator=(const ASpell &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_effects = rhs._effects;
    }
    return (*this);
}

ASpell::~ASpell(void) {}

const std::string &ASpell::getName(void) const
{
    return (this->_name);
}

const std::string &ASpell::getEffects(void) const
{
    return (this->_effects);
}

void ASpell::launch(const ATarget &target) const
{
    target.getHitBySpell(*this);
}