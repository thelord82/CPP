/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:08:36 by malord            #+#    #+#             */
/*   Updated: 2023/02/10 11:44:47 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &other);
    ClapTrap &operator=(ClapTrap const &rhs);
    ~ClapTrap();
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    // Getters
    std::string getName(void) const;
    int         getHitPts(void) const;
    int         getEnergyPts(void) const;
    int         getAttackDmg(void) const;
    void        setDamage(unsigned int amount);
};

#endif