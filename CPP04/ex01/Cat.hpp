/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:26:44 by malord            #+#    #+#             */
/*   Updated: 2023/02/14 16:45:57 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
  private:
    Brain *catBrain;

  public:
    Cat(void);
    Cat(Cat const &copy);
    Cat &operator=(Cat const &rhs);
    ~Cat(void);

    std::string  getType(void) const;
    virtual void makeSound(void) const;
};

#endif