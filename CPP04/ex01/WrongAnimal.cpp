/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:38:27 by malord            #+#    #+#             */
/*   Updated: 2023/02/14 11:03:15 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("An animal who fucks his brother - WRONG!")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    this->type = copy.getType();
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    this->type = rhs.getType();
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "I'm wrong, so here's a fart that comes out of my mouth" << std::endl;
}