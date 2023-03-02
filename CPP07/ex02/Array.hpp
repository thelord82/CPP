/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:00:29 by malord            #+#    #+#             */
/*   Updated: 2023/03/02 13:31:38 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

#include <iostream>
#include <string>

template <typename T> class Array
{
  private:
    T *_elements;

  public:
    Array(void);
    Array(unsigned int n);
    Array(Array const &rhs copy);
    Array &operator=(Array const &rhs);
    ~Array(void);
};

template<typename T>
Array<T>::Array(void)
{
    std::cout << "Default constructor called" << std::endl;
    _elements = NULL;
}

template<typename T>
Array<T>::~Array(void)
{
    delete _elements[];
}

#endif