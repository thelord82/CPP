/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:59:55 by malord            #+#    #+#             */
/*   Updated: 2023/03/16 10:39:19 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
    Data *instanceTest = NULL;
    uintptr_t test;
    Data *instanceDeserialized = NULL;

    test = instanceDeserialized->serialize(instanceTest);
    instanceDeserialized = instanceDeserialized->deserialize(test);
    std::cout << "test = " << test << " vs " << "deserialized = " << instanceDeserialized << std::endl;
    if (instanceDeserialized == instanceTest)
        std::cout << "WORKS BITCH!" << std::endl;
    else
        std::cout << "THIS NOT IT DUMBFUCK" << std::endl;
    Data *copyInstance(instanceTest);
    if (copyInstance == instanceDeserialized)
        std::cout << "COPY WORKS" << std::endl;
    Data *equalInstance = instanceTest;
    if (equalInstance == instanceTest)
        std::cout << "EQUAL WORKS" << std::endl;
    if (++instanceDeserialized == instanceTest)
        std::cout << "OF COURSE NOT YOU DUMBFUCK!" << std::endl;
    else
    {
        std::cout << "test = " << test << " vs " << "deserialized = " << instanceDeserialized << std::endl;
        std::cout << "THERE YOU GO!" << std::endl;
    }
}