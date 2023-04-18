/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:14:08 by mal               #+#    #+#             */
/*   Updated: 2023/04/17 22:24:43 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ASpell.hpp"

//class ASpell;

class Polymorph : public ASpell
{   
    private:
        //Polymorph(const Polymorph &copy);
        //Polymorph &operator=(const Polymorph &rhs);  
    
    public:
        Polymorph();
        virtual ~Polymorph(void);

        virtual ASpell *clone(void) const;
};

#endif