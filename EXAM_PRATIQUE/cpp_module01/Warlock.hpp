/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:20:02 by malord            #+#    #+#             */
/*   Updated: 2023/04/19 10:57:53 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

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
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string spellName);
        void launchSpell(std::string spellName, ATarget &target);
};
#endif