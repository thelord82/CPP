/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:26:49 by mal               #+#    #+#             */
/*   Updated: 2023/05/01 20:46:33 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"

class BrickWall : public ATarget
{
    public:
        BrickWall(void);
        BrickWall(const BrickWall &copy);
        BrickWall &operator=(const BrickWall &rhs);
        virtual ~BrickWall(void);

        virtual BrickWall *clone(void) const;
};