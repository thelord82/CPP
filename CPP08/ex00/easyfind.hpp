/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:04:47 by malord            #+#    #+#             */
/*   Updated: 2023/03/06 11:28:20 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>

// TODO verifier la specialisation partielle du template pour que T soit toujours un container d'int?
template <typename T>
int easyfind(T first, int second)
{
    std::list<int>::const_iterator it;
    std::list<int>::const_iterator ite = first.end();

    try 
    {
        for (it = first.begin(); it != second; ++it);
        if (it == first.end())
            throw std::exception("Value wasn't found");
    }
    return (*it);
}

#endif