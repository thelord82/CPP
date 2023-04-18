/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:39:01 by malord            #+#    #+#             */
/*   Updated: 2023/04/17 22:27:26 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{   
    private:
        Fwoosh(const Fwoosh &copy);
        Fwoosh &operator=(const Fwoosh &rhs);  
    
    public:
        Fwoosh();
        virtual ~Fwoosh(void);

        virtual ASpell *clone(void) const;
};

#endif