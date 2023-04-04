/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:17 by malord            #+#    #+#             */
/*   Updated: 2023/04/04 12:11:46 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
    // std::cout << "Default constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &copy) : _rawData(copy._rawData), _pairDeq(copy._pairDeq)
{
    *this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
    if (this != &rhs)
    {
        this->_rawData = rhs._rawData;
        this->_pairDeq  = rhs._pairDeq;
    }
    return (*this);
}

PmergeMe::~PmergeMe(void)
{
    // std::cout << "Default destructor called" << std::endl;
}

bool PmergeMe::checkNumbers(int argc, char **argv)
{
    if (argc <= 1)
        return (false);
    std::string sequence(argv[1]);
    std::string buffer;
    int         i = 69;
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
                    _rawData.push_back(std::stod(buffer));
                    buffer.clear();
                    ++i;
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
                _rawData.push_back(std::stod(argv[i]));
        }
    }
    pairData();
    return (true);
}

// THIS pairs the data and controls if the number of elements is odd
void PmergeMe::pairData(void)
{
    std::unordered_multimap<int, int> tmpMap;
    for (std::vector<int>::iterator it = _rawData.begin(); it != _rawData.end(); ++it)
    {
        if (std::next(it) != _rawData.end())
        {
            _pairVec.push_back(std::make_pair(*it, *(it + 1)));
            _pairDeq.push_back(std::make_pair(*it, *(it + 1)));
            //_pairMM.insert(std::make_pair(*it, *(it + 1)));
            ++it;
        }
        else
        {
            _pairVec.push_back(std::make_pair(*it, -1));
            _pairDeq.push_back(std::make_pair(*it, -1));
            //_pairMM.insert(std::make_pair(*it, -1));
        }
    }
    for (std::vector<std::pair<int, int> >::iterator it = _pairVec.begin(); it != _pairVec.end(); ++it)
    {
        if (it->first > it->second && it->second >= 0)
            std::swap(it->first, it->second);
    }

    for (std::deque<std::pair<int, int> >::iterator it = _pairDeq.begin(); it != _pairDeq.end(); ++it)
    {
        if (it->first > it->second && it->second >= 0)
            std::swap(it->first, it->second);
    }

    // THIS is a print test
    for (std::vector<std::pair<int, int> >::iterator it = _pairVec.begin(); it != _pairVec.end(); ++it)
        std::cout << "VEC BEFORE SWAP = " << it->first << " et " << it->second << std::endl;

    for (std::deque<std::pair<int, int> >::iterator it = _pairDeq.begin(); it != _pairDeq.end(); ++it)
        std::cout << "DEQ BEFORE SWAP = " << it->first << " et " << it->second << std::endl;

    // THIS sorts the vector according to the second value
    std::sort(_pairVec.begin(), _pairVec.end(), compSecond);
    std::sort(_pairDeq.begin(), _pairDeq.end(), compSecond);
    
    // THIS prints the result after the swap
    for (std::vector<std::pair<int, int> >::iterator it = _pairVec.begin(); it != _pairVec.end(); ++it)
        std::cout << "VEC AFTER SWAP = " << it->first << " et " << it->second << std::endl;

    for (std::deque<std::pair<int, int> >::iterator it = _pairDeq.begin(); it != _pairDeq.end(); ++it)
        std::cout << "DEQ AFTER SWAP = " << it->first << " et " << it->second << std::endl;
}

bool compSecond(std::pair<int, int> &p1, std::pair<int, int> &p2)
{
    if (p1.second == -1)
        return (false);
    return p1.second < p2.second;
}

//TODO To template or not to template, that is the question.
//REFACTOR functions

//TODO use std::transform to separate the pairs of _pairVec vector. 
//TODO insert the first values at the right place in the second vector, respecting the algorithm
//TODO check if I don't do too much manipulations for nothing
//!GETTING THERE BUD!