/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:27:27 by malord            #+#    #+#             */
/*   Updated: 2023/02/14 12:17:23 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    type = "CAT";
    this->catBrain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &copy)
{
    *this = copy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
    this->type = rhs.getType();
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