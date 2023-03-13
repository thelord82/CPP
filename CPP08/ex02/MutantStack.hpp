/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:24:18 by malord            #+#    #+#             */
/*   Updated: 2023/03/13 11:44:10 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_
#include <iostream>
#include <string>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
    public:
        typedef typename std::deque<T>::iterator iterator;
        //typedef typename std::deque<const T>::const_iterator const_iterator;

        iterator begin(void);
        iterator end(void);
        //const_iterator begin(void);
        //const_iterator end(void);
};

#include "MutantStack.tpp"

#endif