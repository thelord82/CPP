/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:06:32 by malord            #+#    #+#             */
/*   Updated: 2023/04/19 10:57:20 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>

class ASpell;
class ATarget
{
    private:
        std::string _type;
    public:
        ATarget(void);
        ATarget(const std::string &type); // const?
        ATarget(const ATarget &copy);
        ATarget(std::string type);
        ATarget &operator=(const ATarget &rhs);
        virtual ~ATarget(void);
        
        const std::string &getType(void) const;
        void getHitBySpell(const ASpell &spell) const;
        virtual ATarget *clone(void) = 0; 
};
#include "ASpell.hpp"
#endif