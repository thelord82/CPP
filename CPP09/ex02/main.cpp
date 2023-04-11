/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:15 by malord            #+#    #+#             */
/*   Updated: 2023/04/11 10:03:59 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "PmergeMe.cpp"

int main(int argc, char **argv)
{
    try 
    {
        std::cout << "VECTOR SORTING" << std::endl;
        PmergeMe<std::vector<int> > vec;
        if (!vec.checkAndFill(argc, argv))
            std::cerr << "ERROR" << std::endl;
        std::cout << "DEQUE SORTING" << std::endl;
        PmergeMe<std::deque<int> > deq;
        if (!deq.checkAndFill(argc, argv))
            std::cerr << "ERROR BITCH" << std::endl;

        std::cout << "IS DEQ SORTED : " << (deq.isSorted() ? "TRUE" : "FALSE") << std::endl;
        std::cout << "IS VEC SORTED : " << (vec.isSorted() ? "TRUE" : "FALSE") << std::endl;
    }
    catch (std::invalid_argument &ia)
    {
        std::cerr << "Error : caught!" << std::endl;
    }
    return (0);
}