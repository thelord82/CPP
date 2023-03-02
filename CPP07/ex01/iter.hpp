/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:41:42 by malord            #+#    #+#             */
/*   Updated: 2023/03/02 10:43:50 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP_
#define ITER_HPP_

#include <iostream>
#include <string>
#include <iomanip>

template<typename T>
void print(T x)
{
    std::cout << x << std::endl;
}

template <typename T, typename U>
void iter(T *arr, int size, U fnct)
{
    for (int i = 0; i < size; ++i)
        fnct(arr[i]);
}

#endif