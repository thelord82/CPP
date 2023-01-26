/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:00:53 by malord            #+#    #+#             */
/*   Updated: 2023/01/26 16:02:50 by malord           ###   ########.fr       */
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
};

#endif