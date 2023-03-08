/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:35:51 by malord            #+#    #+#             */
/*   Updated: 2023/03/08 10:08:44 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
int main(void)
{

    // Test with a list container
    std::list<int>                   lst1;
    lst1.push_back(10);
    lst1.push_back(12);
    lst1.push_back(14);
    std::list<int>::const_iterator resultL;
    std::cout << "------------------" << std::endl;
    std::cout << "LIST CONTAINER" << std::endl;
    std::cout << "------------------" << std::endl;
    try
    {
        resultL = easyfind(lst1, 12);
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: value wasn't found." << std::endl;
        return (0);
    }
    std::cout << "result = " << *resultL << std::endl;

    // Test with a vector container
    std::vector<int> v1;
    v1.push_back(120);
    v1.push_back(18);
    v1.push_back(22);
    std::vector<int>::const_iterator resultV;
    std::cout << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << "VECTOR CONTAINER" << std::endl;
    std::cout << "------------------" << std::endl;
    try
    {
        resultV = easyfind(v1, 120);
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: value wasn't found." << std::endl;
        return (0);
    }
    std::cout << "result = " << *resultV << std::endl;
    
    // Test with a deque container
    std::deque<int> d1;
    d1.push_back(120);
    d1.push_back(18);
    d1.push_back(22);
    std::deque<int>::const_iterator resultD;
    std::cout << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << "DEQUE CONTAINER" << std::endl;
    std::cout << "------------------" << std::endl;
    try
    {
        resultD = easyfind(d1, 120);
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: value wasn't found." << std::endl;
        return (0);
    }
    std::cout << "result = " << *resultD << std::endl;
    
    std::cout << std::endl;
    return (0);
}