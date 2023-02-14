/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:27:27 by malord            #+#    #+#             */
/*   Updated: 2023/02/14 09:32:46 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    type = "CAT";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &copy)
{
    *this = copy;
}

Cat &Cat::operator=(Cat const &rhs)
{
    this->type = rhs.getType();
    return (*this);
}

Cat::~Cat(void)
{
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