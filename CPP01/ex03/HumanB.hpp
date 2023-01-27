/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:00:53 by malord            #+#    #+#             */
/*   Updated: 2023/01/26 22:21:27 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
# define HUMANB_HPP_

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon  *_weapon;
public:
    HumanB(std::string name);
    ~HumanB(void);
    void    attack(void) const;
    void    setWeapon(Weapon &weapon);
};

#endif