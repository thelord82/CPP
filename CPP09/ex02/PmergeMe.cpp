/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:17 by malord            #+#    #+#             */
/*   Updated: 2023/04/05 16:11:21 by malord           ###   ########.fr       */
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
    
    mergeInsert();

    // THIS will be removed (print test)
    //printContainer(_vec.begin(), _vec.end());
    //printContainer(_deq.begin(), _deq.end());
    return (true);
}

void PmergeMe::mergeInsert(void)
{
    swapData(_vec.begin(), _vec.end());
    printContainer(_vec.begin(), _vec.end());
    sortVector();
    std::cout << "------------" << std::endl;
    swapData(_deq.begin(), _deq.end());
    std::cout << "DEQUE" << std::endl;
    printContainer(_deq.begin(), _deq.end());
    //sortDeque();
}

void PmergeMe::sortVector(void)
{
    int last;
    bool odd = false;
    std::vector<int>::iterator it = _vec.begin();
    int value;
    size_t size = _vec.end() - _vec.begin();
    if (size % 2)
    {
        --size;
        last = *(_vec.end() - 1);
        odd = true;
    }
    for (unsigned long i = 1; i <= size / 2; ++i)
    {
        ++it;
        value = _vec[i];
        _vec.erase(_vec.begin() + i);
        _vec.push_back(value);
    }
    if (odd == true)
    {
        _vec.erase(_vec.begin() + (_vec.size() / 2));
        _vec.push_back(last);
    }
    
    sortHalf(_vec.begin(), _vec.begin() + (_vec.size() / 2));
    printContainer(_vec.begin(), _vec.end());
}

void PmergeMe::sortDeque(void)
{

}

template <typename Iterator>void sortHalf(Iterator begin, Iterator end)
{
    for (Iterator it = begin; it != end; ++it)
    {
        for (Iterator it2 = (it + 1); it2 != end; ++it2)
        {
            if (*it > *it2)
                std::swap(*it, *it2);
        }
    }
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
    Iterator it = begin;
    size_t size = end - begin;
    if (size % 2)
        --size;
    for (size_t i = 0; i <= size; ++i)
    {
        if (*it > *(it + 1) && (it + 1) != end)
        {
            std::swap(*it, *(it + 1));
        }
        it += 2;
    }
}

//TODO Templating in progress...
 