/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:26:03 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 10:42:21 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP_
#define HUMANA_HPP_
#include "Weapon.hpp"

class HumanA
{
  public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);

    void attack(void) const;

  private:
    std::string _name;
    Weapon     &_weapon;
};

#endif
