/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:00:53 by malord            #+#    #+#             */
/*   Updated: 2023/01/26 19:16:02 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
# define HUMANB_HPP_

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    std::string _weapon;
public:
    HumanB(void);
    ~HumanB(void);
    void    attack(void) const;
};

#endif