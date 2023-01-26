/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:59:23 by malord            #+#    #+#             */
/*   Updated: 2023/01/26 15:00:42 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

#include <iostream>
#include <string>

class Zombie {
private:
    std::string _name;
public:
    Zombie(std::string name);
    ~Zombie();
    void    announce(void) const;
};
void    randomChump(std::string name);
Zombie  *newZombie(std::string name);

#endif