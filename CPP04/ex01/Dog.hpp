/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 08:06:26 by malord            #+#    #+#             */
/*   Updated: 2023/02/14 09:32:25 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal
{
  public:
    Dog(void);
    Dog(Dog const &copy);
    Dog &operator=(Dog const &rhs);
    ~Dog(void);

    std::string  getType(void) const;
    virtual void makeSound(void) const;
};

#endif