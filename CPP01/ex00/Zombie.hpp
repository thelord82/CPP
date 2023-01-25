/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:59:23 by malord            #+#    #+#             */
/*   Updated: 2023/01/25 14:06:52 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string _name;/* data */
public:
    Zombie(/* args */);
    ~Zombie();
    void    announce(void);
};

#endif