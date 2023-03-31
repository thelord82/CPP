/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:17 by malord            #+#    #+#             */
/*   Updated: 2023/03/31 11:48:50 by malord           ###   ########.fr       */
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

bool PmergeMe::checkNumbers(int argc, char **argv)
{
    std::string sequence(argv[1]);
    std::string buffer;
    if (argc <= 1)
        return (false);
    if (argc == 2)
    {
        for (std::string::iterator it = sequence.begin(); it != sequence.end() || !buffer.empty(); ++it)
        {
            if (it != sequence.end() && *it != ' ')
                buffer.push_back(*it);
            else if (!buffer.empty())
            {
                if (std::stoi(buffer) < 0 || std::stoi(buffer) > INT_MAX)
                    return (false);
                else
                {
                    _dataV.push_back(std::stod(buffer));
                    _dataMS.insert(std::stod(buffer));
                    std::cout << "vector = " << std::stod(buffer) << std::endl;
                    //std::cout << "multiset = " << std::stod(buffer) << std::endl;
                    buffer.clear();
                }
            }
            // THIS is a cheap patch necessary to not go over sequence.end()
            if (it == sequence.end())
                it--;
        }    
    }
    else
    {   
        for (int i = 1; argv[i]; ++i)
        {
            if (std::stoi(argv[i]) < 0 || std::stod(argv[i]) > INT_MAX)
                return (false);
            else
                std::cout << "test = " << std::stod(argv[i]) << std::endl;
        }
    }
    return (true);
}