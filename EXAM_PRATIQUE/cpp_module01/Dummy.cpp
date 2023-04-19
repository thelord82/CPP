/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:38:10 by malord            #+#    #+#             */
/*   Updated: 2023/04/19 09:38:55 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy") {}

Dummy::~Dummy(void) {}

Dummy *Dummy::clone(void)
{
    return (new Dummy(*this));
}