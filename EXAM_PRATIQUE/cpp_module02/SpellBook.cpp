/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:29:15 by mal               #+#    #+#             */
/*   Updated: 2023/04/17 21:58:48 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(void) {}

SpellBook::~SpellBook(void) {}

void SpellBook::learnSpell(ASpell *spell)
{
    if (spell)
    {
        for (std::vector<ASpell *>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it)
        {
            if ((*it)->getName() == spell->getName())
                return ;
        }
        _spellBook.push_back(spell->clone());
    }
}

void SpellBook::forgetSpell(std::string const &spell)
{
    for (std::vector<ASpell *>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it)
    {
        if (spell == (*it)->getName())
        {
            _spellBook.erase(it);
            break;
        }
    }
}

ASpell *SpellBook::createSpell(std::string const &spellName)
{
    for (std::vector<ASpell *>::iterator it = _spellBook.begin(); it != _spellBook.end(); ++it)
    {
        if (spellName == (*it)->getName())
            return (*it);
    }
    return (nullptr);
}