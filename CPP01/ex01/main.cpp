/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:17:29 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 10:38:20 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int     nbZombie = 69;
    Zombie *horde    = zombieHorde(nbZombie, "Wesker");
    for (int i = 0; i < nbZombie; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}