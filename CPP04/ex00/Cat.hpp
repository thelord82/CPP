/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:26:44 by malord            #+#    #+#             */
/*   Updated: 2023/02/14 11:03:04 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"

class Cat : public Animal
{
  public:
    Cat(void);
    Cat(Cat const &copy);
    Cat &operator=(Cat const &rhs);
    ~Cat(void);

    std::string  getType(void) const;
    virtual void makeSound(void) const;
};

#endif