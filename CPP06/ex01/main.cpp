/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:59:55 by malord            #+#    #+#             */
/*   Updated: 2023/02/28 13:51:16 by malord           ###   ########.fr       */
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
    std::cout << test << " vs " << instanceDeserialized << std::endl;
    if (instanceDeserialized == instanceTest)
        std::cout << "WORKS BITCH!" << std::endl;
    else
        std::cout << "THIS NOT IT DUMBFUCK" << std::endl;
    if (++instanceDeserialized == instanceTest)
        std::cout << "OF COURSE NOT YOU DUMBFUCK!" << std::endl;
    else
    {
        std::cout << test << " vs " << instanceDeserialized << std::endl;
        std::cout << "THERE YOU GO!" << std::endl;
    }
}