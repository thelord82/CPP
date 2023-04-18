/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:15:41 by mal               #+#    #+#             */
/*   Updated: 2023/04/17 22:24:32 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {}

Polymorph::~Polymorph (void) {}

ASpell *Polymorph::clone(void) const
{
    return (new Polymorph(*this));
}