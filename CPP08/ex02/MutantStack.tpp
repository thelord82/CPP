/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:24:15 by malord            #+#    #+#             */
/*   Updated: 2023/03/14 13:23:22 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP_
#define MUTANTSTACK_TPP_
#include "MutantStack.hpp"

template <typename T> MutantStack<T>::MutantStack(void)
{
    // std::cout << "Default constructor called" << std::endl;
    return;
}

template <typename T> MutantStack<T>::MutantStack(const MutantStack<T> &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

template <typename T> MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &rhs)
{
    std::cout << "= operator assignment overload called" << std::endl;
    if (this != &rhs){}
        std::stack<T>::operator=(rhs);
    return (*this);
}

template <typename T> MutantStack<T>::~MutantStack(void)
{
    // std::cout << "Default destructor called" << std::endl;
    return;
}
template <typename T> typename std::stack<T>::container_type::iterator MutantStack<T>::begin(void)
{
    return (this->c.begin());
}

template <typename T> typename std::stack<T>::container_type::iterator MutantStack<T>::end(void)
{
    return (this->c.end());
}

template <typename T> typename std::stack<T>::container_type::const_iterator MutantStack<T>::begin(void) const
{
    return (this->c.begin());
}

template <typename T> typename std::stack<T>::container_type::const_iterator MutantStack<T>::end(void) const
{
    return (this->c.end());
}

#endif