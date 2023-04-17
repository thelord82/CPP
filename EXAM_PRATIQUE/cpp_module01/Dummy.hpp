/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:00:11 by malord            #+#    #+#             */
/*   Updated: 2023/04/17 12:06:42 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "ATarget.hpp"

class Dummy : public ATarget
{
    public:
        Dummy(void);
        Dummy(const Dummy &copy);
        Dummy &operator=(const Dummy &rhs);
        virtual ~Dummy(void);

        virtual Dummy *clone(void);
};
#endif