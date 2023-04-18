/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:23:45 by mal               #+#    #+#             */
/*   Updated: 2023/04/17 22:09:36 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ASpell.hpp"

//class ASpell;

class SpellBook
{
    private:
        SpellBook(const SpellBook &copy);
        SpellBook &operator=(const SpellBook &rhs);
        std::vector<ASpell *> _spellBook;
    public:
        SpellBook(void);
        virtual ~SpellBook(void);

        void learnSpell(ASpell *spell); // needs to COPY a spell in the book 
        void forgetSpell(std::string const &spell); // deletes a spell from the book IF IT'S THERE
        ASpell *createSpell(std::string const &spellName); // creates the spell and returns it
};

#endif