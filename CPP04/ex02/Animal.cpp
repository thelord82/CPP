/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:44:44 by malord            #+#    #+#             */
/*   Updated: 2023/02/16 09:41:59 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void) : type("Undiscovered species")
{
    std::cout << "AAnimal constructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy) : type(copy.type)
{
    *this = copy;
    std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal destructor called." << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
    this->type = rhs.getType();
    return (*this);
}

std::string AAnimal::getType(void) const
{
    return (this->type);
}

void AAnimal::makeSound(void) const
{
    std::cout << "Squick squick I'm not discovered I do the noise I want" << std::endl;
}
