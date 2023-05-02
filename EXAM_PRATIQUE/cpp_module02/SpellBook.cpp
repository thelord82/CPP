/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:29:15 by mal               #+#    #+#             */
/*   Updated: 2023/05/01 20:54:29 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(void) {}

SpellBook::~SpellBook(void) {}

void SpellBook::learnSpell(ASpell *spell)
{
    for (std::vector<ASpell *>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it)
    {
        if ((*it) == spell)
            return;
    }
    _spellBook.push_back(spell);
}

void SpellBook::forgetSpell(const std::string &spellName)
{
    for (std::vector<ASpell *>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it)
    {
        if ((*it)->getName() == spellName)
        {
            _spellBook.erase(it);
            return;
        }
    }
}

ASpell *SpellBook::createSpell(const std::string &spellName)
{
    for (std::vector<ASpell *>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it)
    {
        if ((*it)->getName() == spellName)
            return (*it);
    }
    return (NULL);
}