/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:05:44 by malord            #+#    #+#             */
/*   Updated: 2023/02/10 12:57:06 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &other);
    ScavTrap &operator=(ScavTrap const &rhs);
    ~ScavTrap(void);

    void attack(const std::string &target);
    void guardGate() const;
};
#endif