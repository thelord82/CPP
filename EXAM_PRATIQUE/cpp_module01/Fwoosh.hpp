/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:33:13 by malord            #+#    #+#             */
/*   Updated: 2023/04/19 09:36:40 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
    private:

    public:
        Fwoosh(void); // set to Fwoosh and fwooshed
        virtual ~Fwoosh(void);

        virtual Fwoosh *clone(void);
};
#endif