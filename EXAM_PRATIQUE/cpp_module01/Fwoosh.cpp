/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 11:44:45 by malord            #+#    #+#             */
/*   Updated: 2023/04/17 15:15:45 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh(void)
{    
}

Fwoosh *Fwoosh::clone(void)
{
    Fwoosh *ptr = new Fwoosh;
    return (ptr);
}