/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:44:44 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 13:48:38 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called." << std::endl;
}

Animal & Animal::operator=(Animal const &rhs)
{
    this->type = rhs.getType();
}