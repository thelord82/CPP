/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:04:47 by malord            #+#    #+#             */
/*   Updated: 2023/04/11 14:01:52 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <algorithm>
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <deque>

template <typename T> typename T::const_iterator easyfind(const T &first, int second)
{
    typename T::const_iterator it = std::find(first.begin(), first.end(), second);

    if (it != first.end())
        return (it);
    throw std::exception();
}

#endif