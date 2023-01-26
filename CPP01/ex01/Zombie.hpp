/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:59:23 by malord            #+#    #+#             */
/*   Updated: 2023/01/26 13:40:54 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(void);
	~Zombie();
	void    announce(void) const;
	void	setZombieName(std::string name);
};
Zombie	*zombieHorde(int N, std::string name);

#endif