/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:55:21 by malord            #+#    #+#             */
/*   Updated: 2023/04/17 19:46:50 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(void)
{}

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

ASpell::ASpell(const std::string name, const std::string effects) : _name(name), _effects(effects)
{}

ASpell::~ASpell(void)
{}

std::string const &ASpell::getName(void) const
{
    return this->_name;
}

std::string const &ASpell::getEffects(void) const
{
    return this->_effects;
}
void ASpell::launch(const ATarget &target) const
{
    target.getHitBySpell(*this);
}
