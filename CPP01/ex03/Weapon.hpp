/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:16:29 by malord            #+#    #+#             */
/*   Updated: 2023/01/26 15:13:53 by malord           ###   ########.fr       */
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
        Weapon(void);
        ~Weapon(void);
        std::string const & getType(void) const;
        void        setType(std::string type);  
};

#endif