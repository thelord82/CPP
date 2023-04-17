/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:39:01 by malord            #+#    #+#             */
/*   Updated: 2023/04/17 15:14:17 by malord           ###   ########.fr       */
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

        virtual Fwoosh *clone(void);
};

#endif