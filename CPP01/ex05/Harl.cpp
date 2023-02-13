/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:35:52 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 10:55:44 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    return;
}

Harl::~Harl()
{
    return;
}

void Harl::debug(void)
{
    std::cout << "J'aime ca les petates." << std::endl;
}

void Harl::info(void)
{
    std::cout << "J'peux avoir plus de petates?" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "Si tu me donnes pas plus de petates..." << std::endl;
}

void Harl::error(void)
{
    std::cout << "J'te chie une petate sul comptoir!" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string category[4]         = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*chialage[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
    };
    for (int i = 0; i < 4; ++i)
    {
        if (!category[i].compare(level))
        {
            (this->*chialage[i])();
            return;
        }
    }
    std::cout << "Harl peut pas chialer, y'a la yeule pleine de petates" << std::endl;
}