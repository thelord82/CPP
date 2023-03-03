/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:00:33 by malord            #+#    #+#             */
/*   Updated: 2023/03/03 13:39:15 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    // int creation
    std::cout << "---------------" << std::endl;
    std::cout << "SIMPLE INT ARRAY" << std::endl;
    std::cout << "---------------" << std::endl;
    Array<int> intTab(5);
    for (unsigned int i = 0; i < intTab.size(); ++i)
    {
        intTab[i] = i;
        std::cout << "intTab[" << i << "] = " << intTab[i] << std::endl;
    }

    // same for floats (and doubles)
    std::cout << "----------------" << std::endl;
    std::cout << "SIMPLE FLOAT ARRAY" << std::endl;
    std::cout << "---------------" << std::endl;
    Array<float> floatTab(6);
    std::cout << std::setprecision(3) << std::fixed;
    for (unsigned int i = 0; i < floatTab.size(); ++i)
    {
        floatTab[i] = static_cast<float>(i);
        std::cout << "floatTab[" << i << "] = " << floatTab[i] << std::endl;
    }

    // here comes strings
    std::cout << "---------------" << std::endl;
    std::cout << "STRING ARRAY" << std::endl;
    std::cout << "---------------" << std::endl;
    Array<std::string> stringTab(7);
    for (unsigned int i = 0; i < stringTab.size(); ++i)
    {
        stringTab[i] = "BEERS!";
        std::cout << "stringTab[" << i << "] = " << stringTab[i] << std::endl;
    }

    // Let's try some copies...

    std::cout << "---------------" << std::endl;
    std::cout << "COPYING NEWTAB AND PUTTING STUFF IN COPYTAB" << std::endl;
    std::cout << "---------------" << std::endl;
    Array<int> newTab(10);
    Array<int> copyTab = newTab; // At that point, both arrays are empty.

    // Let's put something in copyTab
    for (unsigned int i = 0; i < copyTab.size(); ++i)
        copyTab[i] = i;

    // This loop will print the contents of both arrays, newTab's still empty and copyTab is filled from 0 to 9.
    for (unsigned int i = 0; i < copyTab.size(); ++i)
    {
        std::cout << "copyTab[" << i << "] = " << copyTab[i] << std::endl;
        std::cout << "newTab[" << i << "] = " << newTab[i] << std::endl;
    }

    // Now the other way around, I fill newTab and the contents of copyTab won't be affected
    std::cout << "---------------" << std::endl;
    std::cout << "FILLING NEWTAB WITHOUT AFFECTING CONTENTS OF COPYTAB" << std::endl;
    std::cout << "---------------" << std::endl;
    for (unsigned int i = 0; i < newTab.size(); ++i)
    {
        newTab[i] = i + 10;
        std::cout << "copyTab[" << i << "] = " << copyTab[i] << std::endl;
        std::cout << "newTab[" << i << "] = " << newTab[i] << std::endl;
    }

    // Let's check if the size function works properly
    std::cout << "---------------" << std::endl;
    std::cout << "SIZES OF SOME ARRAYS" << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "Size of intTab is " << intTab.size() << std::endl;
    std::cout << "Size of floatTab is " << floatTab.size() << std::endl;
    std::cout << "Size of stringTab is " << stringTab.size() << std::endl;

    // Exception throwing test
    std::cout << "---------------" << std::endl;
    std::cout << "THROWING EXCEPTIONS" << std::endl;
    std::cout << "---------------" << std::endl;
    
    // First exception caught will kick out of the try scope
    try 
    {
        //std::cout << intTab[12] << std::endl;
        //floatTab[-1] = 10.0f;
        Array<std::string> newStringTab(2);
        for (unsigned int i = 0; i < 5; ++i)
        {
            newStringTab[i] = "This will throw exception at index 2";
            std::cout << "newStringTab[" << i << "] = " << newStringTab[i] << std::endl;
        }
    }
    catch (std::exception &oor)
    {
        std::cerr << oor.what() << std::endl;
    }
    return 0;
}