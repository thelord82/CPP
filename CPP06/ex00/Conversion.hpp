/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 08:15:37 by malord            #+#    #+#             */
/*   Updated: 2023/02/24 08:30:51 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP_
#define CONVERSION_HPP_

#include <iostream>
#include <string>

class Conversion
{
  private:
    std::string _value;

  public:
    Conversion(void);
    Conversion(const Conversion &copy);
    Conversion &operator=(const Conversion &rhs);
    operator char();
    operator float();
    operator int();
    operator double();
    virtual ~Conversion(void);
};

#endif