/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 08:06:26 by malord            #+#    #+#             */
/*   Updated: 2023/02/14 16:46:02 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
  private:
    Brain *dogBrain;

  public:
    Dog(void);
    Dog(Dog const &copy);
    Dog &operator=(Dog const &rhs);
    ~Dog(void);

    std::string  getType(void) const;
    virtual void makeSound(void) const;
};

#endif