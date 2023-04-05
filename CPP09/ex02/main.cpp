/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:15 by malord            #+#    #+#             */
/*   Updated: 2023/04/05 16:42:56 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    try 
    {
        PmergeMe instance;
        if (!instance.checkAndFill(argc, argv))
            std::cerr << "ERROR BITCH" << std::endl;
    }
    catch (std::invalid_argument &ia)
    {
        std::cerr << "Error : caught!" << std::endl;
    }
    return (0);
}