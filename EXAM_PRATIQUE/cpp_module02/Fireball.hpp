/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:10:20 by mal               #+#    #+#             */
/*   Updated: 2023/04/17 22:25:59 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ASpell.hpp"

//class ASpell;

class Fireball : public ASpell
{   
    private:
        //Fireball(const Fireball &copy);
        //Fireball &operator=(const Fireball &rhs);  
    
    public:
        Fireball();
        virtual ~Fireball(void);

        virtual ASpell *clone(void) const;
};

#endif