/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:15:35 by malord            #+#    #+#             */
/*   Updated: 2023/02/24 08:46:37 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(void)
{
    std::cout << "Default conversion constructor called" << std::endl;
}

Conversion::Conversion(const Conversion &copy)
{
    this->_value = copy._value;
}

Conversion &Conversion::operator=(const Conversion &rhs)
{
    this->_value = rhs._value;
    return (*this);
}

Conversion::operator char()
{
    return (dynamic_cast<char>(this->_value));
}

Conversion::operator float()
{
    return (dynamic_cast<float>(this->_value));
}

Conversion::~Conversion(void)
{
    std::cout << "Conversion destructor called" << std::endl;
}