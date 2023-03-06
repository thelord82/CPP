/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:04:47 by malord            #+#    #+#             */
/*   Updated: 2023/03/06 12:08:54 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>

template <typename T>
int easyfind(T first, int second)
{
    std::list<int>::const_iterator it;

    for (it = first.begin(); it != first.end(); ++it)
    {
        if (*it == second)
            return (*it);
    }
    if (it == first.end())
        throw std::exception();
    return (*it);
}

#endif