/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:20:02 by malord            #+#    #+#             */
/*   Updated: 2023/04/17 19:22:03 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <vector>

class ASpell;
class ATarget;

class Warlock
{
    private:
        std::string _name;
        std::string _title;
        std::vector<ASpell *> _spells;
        Warlock(void);
        Warlock(const Warlock &copy);
        Warlock &operator=(const Warlock &rhs);
    public:
        Warlock(const std::string &name, const std::string &title);
        virtual ~Warlock(void);

        const std::string &getName(void) const;
        const std::string &getTitle(void) const; 
        void setTitle(const std::string &title);
        void introduce(void) const;
        void learnSpell(ASpell *newSpell);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string const spellName, const ATarget &target);
};
#endif