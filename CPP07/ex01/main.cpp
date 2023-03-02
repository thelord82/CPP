/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:41:47 by malord            #+#    #+#             */
/*   Updated: 2023/03/02 11:09:16 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void prints(int x)
{
    std::cout << x << std::endl;
}

int main(void)
{
    int arrayInt[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int size = sizeof(arrayInt) / sizeof(arrayInt[0]);
    std::cout << std::endl << "Example with int array : " << std::endl;
    std::cout << "--------------" << std::endl;
    iter(arrayInt, size, print<int>);
    std::cout << "--------------" << std::endl;

    double arrayDbl[] = {2.02, 4.08, 69.69696969};
    size = sizeof(arrayDbl) / sizeof(arrayDbl[0]);
    std::cout << "Example with double array : " << std::endl;
    std::cout << "--------------" << std::endl;
    iter (arrayDbl, size, print<double>);
    std::cout << "--------------" << std::endl;

    char arrayChar[] = {'a', 'b', 'c', 'd'};
    size = sizeof(arrayChar) / sizeof(arrayChar[0]);
    std::cout << "Example with char array : " << std::endl;
    std::cout << "--------------" << std::endl;
    iter(arrayChar, size, print<char>);
    std::cout << "--------------" << std::endl;
    
    std::string arrayString[] = {"Patate", "Pouel", "Maudit", "Cave", "Gna-na-na-na-na-na"};
    size = sizeof(arrayString) / sizeof(arrayString[0]);
    std::cout << "Example with string array : " << std::endl;
    std::cout << "--------------" << std::endl;
    iter(arrayString, size, print<std::string>);
    std::cout << "--------------" << std::endl;

    std::cout << "With a regular function (non template)" << std::endl;
    std::cout << "______________" << std::endl;
    size = sizeof(arrayInt) / sizeof(arrayInt[0]);
    iter(arrayInt, size, prints);
    std::cout << "______________" << std::endl;
}