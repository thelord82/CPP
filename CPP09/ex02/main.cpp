/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:15 by malord            #+#    #+#             */
/*   Updated: 2023/04/13 13:40:36 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include "PmergeMe.cpp"

int main(int argc, char **argv)
{
    try 
    {
        PmergeMe<std::vector<int> > vec;
        if (!vec.checkAndFill(argc, argv))
        {
            std::cerr << "ERROR" << std::endl;
            return (1);
        }
        std::cout << "Time to process a range of " << vec.getContainerSize() << " elements with std::vector : " << vec.getProcessTime() << " ms" << std::endl;
        PmergeMe<std::deque<int> > deq;
        if (!deq.checkAndFill(argc, argv))
        {
            std::cerr << "ERROR" << std::endl;
            return (1);
        }
        std::cout << "Time to process a range of " << deq.getContainerSize() << " elements with std::deque : " << deq.getProcessTime() << " ms" << std::endl;
        //std::cout << "IS DEQ SORTED : " << (deq.isSorted() ? "TRUE" : "FALSE") << std::endl;
        //std::cout << "IS VEC SORTED : " << (vec.isSorted() ? "TRUE" : "FALSE") << std::endl;
    }
    catch (std::invalid_argument &ia)
    {
        std::cerr << "ERROR" << std::endl;
    }
    catch (std::out_of_range &oor)
    {
        std::cerr << "ERROR" << std::endl;
    }
    return (0);
}