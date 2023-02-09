/* **************************************************************************
 */
/*                                                                            */
/*                                                        :::      :::::::: */
/*   ClapTrap.hpp                                       :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+ */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+ */
/*                                                +#+#+#+#+#+   +#+ */
/*   Created: 2023/02/09 10:53:46 by malord            #+#    #+# */
/*   Updated: 2023/02/09 14:53:37 by malord           ###   ########.fr */
/*                                                                            */
/* **************************************************************************
 */

#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_
#include <iostream>
#include <string>

class ClapTrap
{
  private:
    std::string _name;
    int         _hitPts;
    int         _energyPts;
    int         _attackDmg;

  public:
    ClapTrap();
    ClapTrap(ClapTrap const &other);
    ClapTrap &operator=(ClapTrap const &rhs);
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif