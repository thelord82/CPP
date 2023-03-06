/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:35:51 by malord            #+#    #+#             */
/*   Updated: 2023/03/06 10:41:17 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <list>

void printNumber(int i)
{
    std::cout << "valeur en utilisant for_each = " << i << std::endl;
}

int main()
{
    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(12);
    lst.push_back(14);
    lst.push_back(16);
    lst.push_back(18);
    lst.push_back(69);
    std::list<int>::const_iterator it;

    for_each(lst.begin(), lst.end(), printNumber);
    for (it = lst.begin(); it != lst.end(); ++it)
        std::cout << "Valeur en utilisant iterator : " << *it << std::endl;
}