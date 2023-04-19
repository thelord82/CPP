/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:35:24 by malord            #+#    #+#             */
/*   Updated: 2023/04/19 09:36:35 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh(void) {}

Fwoosh *Fwoosh::clone(void)
{
    return (new Fwoosh(*this));
}