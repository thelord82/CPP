/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:44:44 by malord            #+#    #+#             */
/*   Updated: 2023/02/14 12:17:27 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Undiscovered species")
{
    std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(Animal const &copy)
{
    *this = copy;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called." << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
    this->type = rhs.getType();
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->type);
}

void Animal::makeSound(void) const
{
    std::cout << "Squick squick I'm not discovered I do the noise I want" << std::endl;
}