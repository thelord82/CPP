/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:53:49 by malord            #+#    #+#             */
/*   Updated: 2023/02/09 15:17:46 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPts(10), _energyPts(10), _attackDmg(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default destructor called" << std::endl;
}

