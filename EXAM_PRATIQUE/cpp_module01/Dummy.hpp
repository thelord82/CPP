/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 09:36:49 by malord            #+#    #+#             */
/*   Updated: 2023/04/19 09:48:23 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
    private:

    public:
        Dummy(void);
        virtual ~Dummy(void);

        virtual Dummy *clone(void);
};
#endif