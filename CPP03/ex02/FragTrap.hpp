/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:02:00 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 10:06:39 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
public:
     FragTrap(void);
     FragTrap(std::string name);
     FragTrap(FragTrap const &copy);
     FragTrap &operator=(FragTrap const &rhs);
     ~FragTrap(void);

     void HighFivesGuys(void);
};

#endif