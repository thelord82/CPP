/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:03:00 by malord            #+#    #+#             */
/*   Updated: 2023/04/17 14:54:37 by malord           ###   ########.fr       */
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

Dummy *Dummy::clone(void)
{
    Dummy *ptr = new Dummy;
    return (ptr);
}
