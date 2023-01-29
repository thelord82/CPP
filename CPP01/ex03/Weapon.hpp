/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:16:29 by malord            #+#    #+#             */
/*   Updated: 2023/01/29 11:21:07 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP_
# define WEAPON_HPP_

#include <iostream>
#include <string>

class Weapon {
    private:
        std::string _type;
    public:
        Weapon(std::string weapon);
        ~Weapon(void);
        std::string const & getType(void) const;
        void                setType(std::string type);  
};

#endif