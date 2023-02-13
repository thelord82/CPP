/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:07:02 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 10:33:45 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    return;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->_name << " has been destroyed." << std::endl;
    return;
}

void Zombie::announce(void) const
{
    std::cout << this->_name << ": "
              << "BraiiiiiiinnnzzzZ..." << std::endl;
}