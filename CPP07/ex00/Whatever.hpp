/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:15:53 by malord            #+#    #+#             */
/*   Updated: 2023/03/02 08:51:47 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP_
#define WHATEVER_HPP_

#include <iostream>
#include <string>
#include <iomanip>

template <typename T>
void swap(T *x, T *y)
{
    T tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

template <typename T>
T max(T x, T y)
{
    return (y >= x ? y : x);
}

template <typename T>
T min(T x, T y)
{
    return (x < y ? x : y);
}

#endif