/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:20:12 by mal               #+#    #+#             */
/*   Updated: 2023/05/01 20:47:27 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall(void) : ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::BrickWall(const BrickWall &copy)
{
    *this = copy;
}

BrickWall &BrickWall::operator=(const BrickWall &rhs)
{
    if (this != &rhs) {}
    return (*this);
}

BrickWall::~BrickWall(void) {}

BrickWall *BrickWall::clone(void) const
{
    return (new BrickWall(*this));
}