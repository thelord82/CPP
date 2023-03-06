/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:04:47 by malord            #+#    #+#             */
/*   Updated: 2023/03/06 15:18:31 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T first, int second)
{
    typename T::iterator it = std::find(first.begin(), first.end(), second);

    if (it != first.end())
        return (it);
    throw std::exception();
    return (it);
}

#endif