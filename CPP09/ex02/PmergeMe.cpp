/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:17 by malord            #+#    #+#             */
/*   Updated: 2023/04/05 10:51:11 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
    // std::cout << "Default constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &copy) : _vec(copy._vec), _deq(copy._deq)
{
    *this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs)
{
    if (this != &rhs)
    {
        this->_vec = rhs._vec;
        this->_deq  = rhs._deq;
    }
    return (*this);
}

PmergeMe::~PmergeMe(void)
{
    // std::cout << "Default destructor called" << std::endl;
}

bool PmergeMe::checkAndFill(int argc, char **argv)
{
    if (argc <= 1)
        return (false);
    if (argc == 2)
    {
        std::string sequence(argv[1]);
        std::string buffer;
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
                    _vec.push_back(std::stoi(buffer));
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
            if (std::stoi(argv[i]) < 0 || std::stoi(argv[i]) > INT_MAX)
                return (false);
            else
                _vec.push_back(std::stoi(argv[i]));
        }
    }
    _deq.assign(_vec.begin(), _vec.end());
    
    //THIS will go in the algo function
    swapData(_vec.begin(), _vec.end());
    swapData(_deq.begin(), _deq.end());

    // THIS will be removed (print test)
    printContainer(_vec.begin(), _vec.end());
    std::cout << "------------" << std::endl;
    printContainer(_deq.begin(), _deq.end());
    return (true);
}

template <typename Iterator>void printContainer(Iterator begin, Iterator end)
{
    std::cout << "Content = ";
    for (Iterator it = begin; it != end; ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
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
 