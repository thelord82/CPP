/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 10:35:30 by malord            #+#    #+#             */
/*   Updated: 2023/02/14 11:03:18 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_
#include <iostream>
#include <string>

class WrongAnimal
{
  protected:
    std::string type;

  public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &copy);
    WrongAnimal &operator=(WrongAnimal const &rhs);
    virtual ~WrongAnimal();

    std::string  getType(void) const;
    virtual void makeSound(void) const;
};

#endif