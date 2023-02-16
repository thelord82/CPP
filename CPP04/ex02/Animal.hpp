/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:18:44 by malord            #+#    #+#             */
/*   Updated: 2023/02/16 09:47:08 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_
#include <iostream>
#include <string>

class AAnimal
{
  protected:
    std::string type;

  public:
    AAnimal(void);
    AAnimal(AAnimal const &copy);
    AAnimal &operator=(AAnimal const &rhs);
    virtual ~AAnimal(void);

    std::string  getType(void) const;
    virtual void makeSound(void) const = 0;
};

#endif