/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:27:27 by malord            #+#    #+#             */
/*   Updated: 2023/02/15 15:14:11 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    type           = "CAT";
    this->catBrain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &copy)
{
    this->catBrain = new Brain();
    *this          = copy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout << "CAT = operator overload called" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; ++i)
            this->catBrain->setIdea(rhs.catBrain->getIdea(i), i);
        this->type = rhs.getType();
    }
    return (*this);
}

Cat::~Cat(void)
{
    delete this->catBrain;
    std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType(void) const
{
    return (this->type);
}

void Cat::makeSound(void) const
{
    std::cout << "Miaou miaou minou" << std::endl;
}

Brain *Cat::getBrain(void) const
{
    return (this->catBrain);
}