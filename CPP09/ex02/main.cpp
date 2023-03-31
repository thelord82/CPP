/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:15 by malord            #+#    #+#             */
/*   Updated: 2023/03/31 11:37:43 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    try 
    {
        PmergeMe instance;
        if (!instance.checkNumbers(argc, argv))
            std::cout << "ERROR BITCH" << std::endl;
        else
        {
            PmergeMe instance;
            //instance.fillVector(argv);
        }
    }
    catch (std::invalid_argument &ia)
    {
        std::cerr << "Error : caught!" << std::endl;
    }
    return (0);
}