/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:00:53 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 10:42:25 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include "Weapon.hpp"

class HumanB
{
  private:
    std::string _name;
    Weapon     *_weapon;

  public:
    HumanB(std::string name);
    ~HumanB(void);
    void attack(void) const;
    void setWeapon(Weapon &weapon);
};

#endif