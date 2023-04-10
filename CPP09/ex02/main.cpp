/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:15 by malord            #+#    #+#             */
/*   Updated: 2023/04/10 17:00:42 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "PmergeMe.cpp"

int main(int argc, char **argv)
{
    try 
    {
        //std::cout << "DEQUE SORTING" << std::endl;
        //PmergeMe<std::deque<int> > deq;
        //if (!deq.checkAndFill(argc, argv))
        //    std::cerr << "ERROR BITCH" << std::endl;
        std::cout << "VECTOR SORTING" << std::endl;
        PmergeMe<std::vector<int> > vec;
        if (!vec.checkAndFill(argc, argv))
            std::cerr << "ERROR" << std::endl;
    }
    catch (std::invalid_argument &ia)
    {
        std::cerr << "Error : caught!" << std::endl;
    }
    return (0);
}