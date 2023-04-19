/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:55:23 by malord            #+#    #+#             */
/*   Updated: 2023/04/17 23:35:55 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
#define ASPELL_HPP

//#include "ATarget.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class ATarget;

class ASpell
{
    private:
        std::string _name;
        std::string _effects;
    public:
        ASpell(void);
        ASpell(const ASpell &copy);
        ASpell &operator=(const ASpell &rhs);
        ASpell (const std::string name, const std::string effects);
        virtual ~ASpell(void);

        std::string const &getName(void) const;
        std::string const &getEffects(void) const;
        void launch(const ATarget &target) const;
        virtual ASpell *clone(void) const = 0;
};

#include "ATarget.hpp"
#endif