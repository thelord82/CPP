/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:55:23 by malord            #+#    #+#             */
/*   Updated: 2023/04/17 11:24:29 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
#define ASPELL_HPP

#include "Warlock.hpp"
#include "ATarget.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class ASpell
{
    private:
        std::string _name;
        std::string _effects;
    public:
        ASpell(void);
        ASpell(const ASpell &copy);
        ASpell &operator=(const ASpell &rhs);
        ASpell (std::string name, std::string effects);
        virtual ~ASpell(void);

        std::string getName(void) const;
        std::string getEffects(void) const;
        virtual ASpell *clone(void) = 0;
        void launch(const ATarget &target);
};
#endif