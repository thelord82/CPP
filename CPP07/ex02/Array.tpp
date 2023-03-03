/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:46:07 by malord            #+#    #+#             */
/*   Updated: 2023/03/03 13:30:17 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP_
#define ARRAY_TPP_

template <typename T> Array<T>::Array(void) : _elements(NULL), _size(0)
{
    std::cout << "Default constructor called" << std::endl;
}

template <typename T> Array<T>::Array(unsigned int n) : _elements(new T[n]()), _size(n)
{
    std::cout << "Parameter constructor called" << std::endl;
}

template <typename T> Array<T>::Array(const Array<T> &copy) : _elements(new T[copy._size]()), _size(copy._size)
{
    std::cout << "Copy constructor called" << std::endl;
    for (unsigned int i = 0; i < _size; ++i)
        _elements[i] = copy._elements[i];
}

template <typename T> Array<T> &Array<T>::operator=(const Array<T> &rhs)
{
    std::cout << "Assignment operator overload called" << std::endl;
    if (this != &rhs)
    {
        delete[] _elements;
        _elements = new T[rhs._size];
        _size     = rhs._size;
        for (unsigned int i = 0; i < rhs._size; ++i)
            _elements[i] = rhs._elements[i];
    }
    return (*this);
}

template <typename T> T &Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::out_of_range("Index of the array is out of range (bigger than size or negative)");
    return (_elements[index]);
}

template <typename T> unsigned int Array<T>::size(void) const
{
    return (this->_size);
}

template <typename T> Array<T>::~Array(void)
{
    std::cout << "Default destructor called" << std::endl;
    delete[] _elements;
}
#endif