/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 08:18:25 by malord            #+#    #+#             */
/*   Updated: 2023/02/14 11:03:06 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    type = "DOG";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &copy)
{
    this->type = copy.type;
}

Dog &Dog::operator=(Dog const &rhs)
{
    this->type = rhs.getType();
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}

std::string Dog::getType(void) const
{
    return (this->type);
}

void Dog::makeSound(void) const
{
    std::cout << "Wouffe Wouffe pitou" << std::endl;
}