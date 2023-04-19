/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 08:38:55 by malord            #+#    #+#             */
/*   Updated: 2023/04/19 10:18:07 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>

class ATarget;

class ASpell
{
    protected:
        std::string _name;
        std::string _effects;

    public:
        ASpell(void);
        ASpell(const std::string &name, const std::string &effects); // const?
        ASpell(const ASpell &copy);
        ASpell &operator=(const ASpell &rhs);
        virtual ~ASpell(void);

        const std::string &getName(void) const;
        const std::string &getEffects(void) const;
        void launch(const ATarget &target) const;
        virtual ASpell *clone(void) = 0;
};

#include "ATarget.hpp"

#endif