/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 08:18:25 by malord            #+#    #+#             */
/*   Updated: 2023/02/15 15:14:16 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    type           = "DOG";
    this->dogBrain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal()
{
    this->dogBrain = new Brain();
    *this          = copy;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
    std::cout << "DOG = operator overload called" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; ++i)
            this->dogBrain->setIdea(rhs.dogBrain->getIdea(i), i);
        this->type = rhs.getType();
    }
    return (*this);
}

Dog::~Dog(void)
{
    delete this->dogBrain;
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

Brain *Dog::getBrain(void) const
{
    return (this->dogBrain);
}