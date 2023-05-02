/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:23:45 by mal               #+#    #+#             */
/*   Updated: 2023/05/01 20:36:48 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "ASpell.hpp"
#include <vector>

class SpellBook
{
    private:
        SpellBook(const SpellBook &copy);
        SpellBook &operator=(const SpellBook &copy);

        std::vector<ASpell *> _spellBook;
    public:  
        SpellBook(void);
        virtual ~SpellBook(void);

        void learnSpell(ASpell *spell);
        void forgetSpell(const std::string &spellName);
        ASpell *createSpell(const std::string &spellName);
};