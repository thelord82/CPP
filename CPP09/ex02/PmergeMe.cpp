/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:17 by malord            #+#    #+#             */
/*   Updated: 2023/04/11 15:38:38 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container> PmergeMe<Container>::PmergeMe(void)
{
    // std::cout << "Default constructor called" << std::endl;
}

template <typename Container>
PmergeMe<Container>::PmergeMe(const PmergeMe<Container> &copy) : _container(copy._container)
{
    *this = copy;
}

template <typename Container> PmergeMe<Container> &PmergeMe<Container>::operator=(const PmergeMe &rhs)
{
    if (this != &rhs)
    {
        this->_container = rhs._container;
    }
    return (*this);
}

template <typename Container> PmergeMe<Container>::~PmergeMe(void)
{
    // std::cout << "Default destructor called" << std::endl;
}

template <typename Container> bool PmergeMe<Container>::checkAndFill(int argc, char **argv)
{
    _startClock = clock();
    _startTime  = time(0);
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
                    _container.push_back(std::stoi(buffer));
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
                _container.push_back(std::stoi(argv[i]));
        }
    }
    printUnsorted(_container.begin(), _container.end());
    if (!isSorted())
        mergeInsert();
    else
        printContainer(_container.begin(), _container.end());
    return (true);
}

template <typename Container> void PmergeMe<Container>::mergeInsert(void)
{
    swapData(_container.begin(), _container.end());
    sortContainer();
}

template <typename Container> void PmergeMe<Container>::sortContainer(void)
{
    typename Container::iterator it = _container.begin();

    int    value;
    size_t size = _container.end() - _container.begin();
    if (size % 2)
        --size;
    for (unsigned long i = 1; i <= size / 2; ++i)
    {
        ++it;
        value = _container[i];
        _container.erase(_container.begin() + i);
        _container.push_back(value);
    }

    sortHalf(_container.begin(), _container.begin() + (_container.size() / 2));
    sortRest();
    printContainer(_container.begin(), _container.end());
}

template <typename Container>
template <typename Iterator>
void PmergeMe<Container>::printUnsorted(Iterator begin, Iterator end)
{
    std::cout << "Before: ";
    for (Iterator it = begin; it != end; ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

template <typename Container>
template <typename Iterator>
void PmergeMe<Container>::printContainer(Iterator begin, Iterator end)
{
    std::cout << "After = ";
    for (Iterator it = begin; it != end; ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

template <typename Container>
template <typename Iterator>
void PmergeMe<Container>::swapData(Iterator begin, Iterator end)
{
    typename Container::iterator it   = begin;
    size_t                       size = end - begin;
    if (size % 2)
        --size;
    for (size_t i = 0; i <= size; i += 2)
    {
        if ((it + 1) != end && *it > *(it + 1))
            std::swap(*it, *(it + 1));
        it += 2;
    }
}

template <typename Container>
template <typename Iterator>
void PmergeMe<Container>::sortHalf(Iterator begin, Iterator end)
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

template <typename Container> void PmergeMe<Container>::sortRest(void)
{
    typename Container::iterator itCon = _container.begin();
    int                          value;

    for (unsigned long i = _container.size() / 2; i < _container.size(); ++i)
    {
        value = _container[i];
        while (*itCon < value)
            itCon++;
        _container.insert(itCon, value);
        _container.erase(_container.begin() + (i + 1));
        itCon = _container.begin();
        if (isSorted())
            break;
    }
    _processTime = processTime();
}

template <typename Container> bool PmergeMe<Container>::isSorted(void)
{
    typename Container::iterator it;
    for (it = _container.begin(); it != _container.end(); ++it)
    {
        if (*it > *(it + 1) && (it + 1) != _container.end())
            return (false);
    }
    return (true);
}

template <typename Container> double PmergeMe<Container>::processTime(void)
{
    _endClock      = clock();
    _endTime       = time(0);
    double cpuTime = static_cast<double>(_endClock - _startClock) / 1000;
    return (cpuTime);
}

template <typename Container> double PmergeMe<Container>::getProcessTime(void)
{
    return this->_processTime;
}

template <typename Container> unsigned int PmergeMe<Container>::getContainerSize(void)
{
    return this->_container.size();
}