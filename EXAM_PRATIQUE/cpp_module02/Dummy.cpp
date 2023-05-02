/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:03:00 by malord            #+#    #+#             */
/*   Updated: 2023/05/01 20:52:04 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy")
{}

Dummy::Dummy(const Dummy &copy)
{
    *this = copy;
}

Dummy &Dummy::operator=(const Dummy &rhs)
{
    if (this != &rhs)
    {
        
    }
    return (*this);
}

Dummy::~Dummy(void)
{}

Dummy *Dummy::clone(void) const
{
    return (new Dummy(*this));
}
