/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:44:45 by malord            #+#    #+#             */
/*   Updated: 2023/04/17 22:27:36 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh(void)
{    
}

ASpell *Fwoosh::clone(void) const
{
    Fwoosh *ptr = new Fwoosh;
    return (ptr);
}