/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:20:23 by malord            #+#    #+#             */
/*   Updated: 2023/02/28 10:37:23 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP_
#define DATA_HPP_

#include <iostream>
#include <string>

class Data
{
  private:
    int _value;

  public:
    Data(void);
    Data(const Data &copy);
    Data &operator=(const Data &rhs);
    ~Data(void);

    uintptr_t serialize(Data *ptr);
    Data     *deserialize(uintptr_t raw);
};

#endif