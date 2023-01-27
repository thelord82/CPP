/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:35:52 by malord            #+#    #+#             */
/*   Updated: 2023/01/27 13:13:55 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Constructor Harl called" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Destructor Harl called" << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now!" << std::endl;
}

void    Harl::complain(std::string level)
{
    /*Implementer un pointeur de fonction sur array de 4 (pour les 4 modes)
    Le choix sera fait en fonction de la string level qui devra etre soit debug, info, warning ou error.
    En fonction du contenu de la string level, on appelle la fonction privee correspondante. 
    Dans le main, ca donnera quelque chose comme instance.complain(level) ou instance->complain(level)*/
}