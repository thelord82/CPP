/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 10:55:23 by malord            #+#    #+#             */
/*   Updated: 2023/04/18 08:56:01 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "ATarget.hpp"

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
        void launch(const ATarget &target);
        virtual ASpell *clone(void) const = 0;
};

#endif