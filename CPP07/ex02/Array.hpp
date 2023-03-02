/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:00:29 by malord            #+#    #+#             */
/*   Updated: 2023/03/02 13:46:39 by malord           ###   ########.fr       */
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
    Array &operator=(const Array &rhs);
    ~Array(void);
};

template <typename T> Array<T>::Array(void)
{
    std::cout << "Default constructor called" << std::endl;
    _elements = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n) : new T[n], _size(n)
{
    std::cout << "Parameter constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &copy)
{
    this->_elements = copy._elements;
    this->_size = copy._size;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &rhs)
{
    if(this != &rhs)
    {
        this->_size = rhs._size;
        this->_elements = rhs._elements;   
    }
    return (*this);
}

template <typename T> Array<T>::~Array(void)
{
    delete _elements[];
}

#endif