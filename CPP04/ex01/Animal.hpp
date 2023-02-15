/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:18:44 by malord            #+#    #+#             */
/*   Updated: 2023/02/15 15:14:00 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_
#include <iostream>
#include <string>

class Animal
{
  protected:
    std::string type;

  public:
    Animal(void);
    Animal(Animal const &copy);
    Animal &operator=(Animal const &rhs);
    virtual ~Animal(void);

    std::string  getType(void) const;
    virtual void makeSound(void) const;
};

#endif