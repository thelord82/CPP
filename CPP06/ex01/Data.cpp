/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:22:34 by malord            #+#    #+#             */
/*   Updated: 2023/02/28 11:49:03 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) : _value(0)
{
    std::cout << "Default Data constructor called" << std::endl;
}

Data::Data(const Data &copy)
{
    this->_value = copy._value;
    *this        = copy;
}

Data &Data::operator=(const Data &rhs)
{
    if (this != &rhs)
        this->_value = rhs._value;
    return (*this);
}
Data::~Data(void)
{
    std::cout << "Default Data destructor called" << std::endl;
}

uintptr_t Data::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Data::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int Data::getValue(void) const
{
    return (this->_value);
}

std::ostream &operator<<(std::ostream &o, Data const &rhs)
{
    o << rhs.getValue();
    return (o);
}