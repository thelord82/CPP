/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:00:29 by malord            #+#    #+#             */
/*   Updated: 2023/03/03 11:30:21 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <iostream>
#include <string>

template <typename T> class Array
{
  private:
    T           *_elements;
    unsigned int _size;

  public:
    Array(void);
    Array(unsigned int n);
    Array(const Array &copy);
    Array       &operator=(const Array &rhs);
    T           &operator[](unsigned int index);
    unsigned int size(void) const;
    ~Array(void);
};

#include "Array.tpp"
#endif