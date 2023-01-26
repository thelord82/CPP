/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:17:29 by malord            #+#    #+#             */
/*   Updated: 2023/01/26 13:49:03 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int	nbZombie = 69;
	Zombie	*horde = zombieHorde(nbZombie, "Paul");
	for (int i = 0; i < nbZombie; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}