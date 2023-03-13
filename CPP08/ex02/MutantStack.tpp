/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:24:15 by malord            #+#    #+#             */
/*   Updated: 2023/03/13 16:05:49 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP_
#define MUTANTSTACK_TPP_
#include "MutantStack.hpp"

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin(void)
{   
    return (this->c.begin());
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end(void)
{
    return (this->c.end());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::begin(void) const
{
    return (this->c.begin());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::end(void) const
{
    return (this->c.end());
}

#endif