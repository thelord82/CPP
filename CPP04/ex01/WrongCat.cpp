/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:33:53 by malord            #+#    #+#             */
/*   Updated: 2023/02/14 11:03:22 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WRONG CAT";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
    this->type = copy.type;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    this->type = rhs.getType();
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

std::string WrongCat::getType(void) const
{
    return (this->type);
}

void WrongCat::makeSound(void) const
{
    std::cout << "I'm wrong, woof woof" << std::endl;
}