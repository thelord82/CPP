/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:06:32 by malord            #+#    #+#             */
/*   Updated: 2023/04/17 15:08:55 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    private:
        std::string _type;
    
    public:
        ATarget(void);
        ATarget(const ATarget &copy);
        ATarget(std::string type);
        ATarget &operator=(const ATarget &rhs);
        virtual ~ATarget(void);

        const std::string &getType(void) const;
        void getHitBySpell(const ASpell &spell) const;
        virtual ATarget *clone(void) = 0;
};
#endif