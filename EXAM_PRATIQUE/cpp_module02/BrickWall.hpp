/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:17:52 by mal               #+#    #+#             */
/*   Updated: 2023/04/17 21:55:57 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "ATarget.hpp"

class BrickWall : public ATarget
{
    public:
        BrickWall(void);
        BrickWall(const BrickWall &copy);
        BrickWall &operator=(const BrickWall &rhs);
        virtual ~BrickWall(void);
        
        virtual BrickWall *clone(void);  
};

#endif