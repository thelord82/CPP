/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:17 by malord            #+#    #+#             */
/*   Updated: 2023/03/30 15:32:18 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
    //std::cout << "Default constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &copy) : _dataV(copy._dataV), _dataMS(copy._dataMS)
{
    *this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
    if (this != &rhs)
    {
        this->_dataV = rhs._dataV;
        this->_dataMS = rhs._dataMS;
    }
    return (*this);
}

PmergeMe::~PmergeMe(void)
{
    //std::cout << "Default destructor called" << std::endl;
}

void PmergeMe::fillVector(char **argv)
{
    for (int i = 1; argv[i]; ++i)
        _dataV.push_back(std::stod(argv[i]));

    for (std::vector<int>::iterator it = _dataV.begin(); it != _dataV.end(); ++ it)
        std::cout << "Vector contents : " << *it << std::endl; 
}

bool checkNumbers(int argc, char **argv)
{
    if (argc <= 1)
        return (false);
    for (int i = 1; argv[i]; ++i)
    {
        if (std::stod(argv[i]) < 0 || std::stod(argv[i]) > INT_MAX)
            return (false);
    }
    return (true);
}