/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:17 by malord            #+#    #+#             */
/*   Updated: 2023/04/04 15:09:47 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
    // std::cout << "Default constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &copy) : _rawData(copy._rawData), _deq(copy._deq)
{
    *this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
    if (this != &rhs)
    {
        this->_rawData = rhs._rawData;
        this->_deq  = rhs._deq;
    }
    return (*this);
}

PmergeMe::~PmergeMe(void)
{
    // std::cout << "Default destructor called" << std::endl;
}

// THIS may need a refactor to be less clunky
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
    for (std::vector<int>::iterator it = _rawData.begin(); it != _rawData.end(); ++it)
    {
            _vec.push_back(*it);
            _deq.push_back(*it);
    }
    swapData(_vec.begin(), _vec.end());
    swapData(_deq.begin(), _deq.end());
    printContainer(_vec.begin(), _vec.end()); // Will be removed
    std::cout << "------------" << std::endl; // Will be removed
    printContainer(_deq.begin(), _deq.end()); // Will be removed
}

template <typename Iterator>void printContainer(Iterator begin, Iterator end)
{
    for (Iterator it = begin; it != end; ++it)
        std::cout << "content = " << *it << std::endl;
}

template <typename Iterator>void swapData(Iterator begin, Iterator end)
{
    for (Iterator it = begin; it != end; ++it)
    {
        if (*it > *(it + 1) && (it + 1) != end)
        {
            std::swap(*it, *(it + 1));
            ++it;
        }
    }
}

//TODO Templating in progress...
 