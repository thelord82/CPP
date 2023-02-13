/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:18:44 by malord            #+#    #+#             */
/*   Updated: 2023/02/13 13:21:56 by malord           ###   ########.fr       */
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
    ~Animal();
};

#endif