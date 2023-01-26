/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:26:03 by malord            #+#    #+#             */
/*   Updated: 2023/01/26 15:59:23 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP_
# define HUMANA_HPP_
#include "Weapon.hpp"

class HumanA {
private:
	std::string _weapon;
	std::string _name;
public:
	HumanA(void);
	~HumanA(void);
	void    attack(void) const;
	//std::string getName(void) const;
	//std::string getWeapon(void) const;
};

#endif
