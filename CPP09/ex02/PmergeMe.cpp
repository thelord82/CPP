/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:17 by malord            #+#    #+#             */
/*   Updated: 2023/04/10 22:24:04 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>PmergeMe<Container>::PmergeMe(void)
{
    // std::cout << "Default constructor called" << std::endl;
}

template <typename Container>PmergeMe<Container>::PmergeMe(const PmergeMe<Container> &copy) : _container(copy._container)
{
    *this = copy;
}

template <typename Container>PmergeMe<Container> &PmergeMe<Container>::operator=(const PmergeMe &rhs)
{
    if (this != &rhs)
    {
        this->_container = rhs._container;
    }
    return (*this);
}

template <typename Container>PmergeMe<Container>::~PmergeMe(void)
{
    // std::cout << "Default destructor called" << std::endl;
}


template <typename Container>bool PmergeMe<Container>::checkAndFill(int argc, char **argv)
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
    mergeInsert();
    return (true);
}

template <typename Container>void PmergeMe<Container>::mergeInsert(void)
{
    swapData(_container.begin(), _container.end());
    sortContainer();
}

template <typename Container>void PmergeMe<Container>::sortContainer(void)
{
    int last;
    bool odd = false;
    typename Container::iterator it = _container.begin();
    
    int value;
    size_t size = _container.end() - _container.begin();
    if (size % 2)
    {
        --size;
        last = *(_container.end() - 1);
        odd = true;
    }
    for (unsigned long i = 1; i <= size / 2; ++i)
    {
        ++it;
        value = _container[i];
        _container.erase(_container.begin() + i);
        _container.push_back(value);
    }
    if (odd == true)
    {
        _container.erase(_container.begin() + (_container.size() / 2));
        _container.push_back(last);
    }

    sortHalf(_container.begin(), _container.begin() + (_container.size() / 2));
    sortRest(_container.begin() + (_container.size() / 2), _container.end());

    printContainer(_container.begin(), _container.end());
}

template<typename Container>template <typename Iterator>void PmergeMe<Container>::printContainer(Iterator begin, Iterator end)
{
    std::cout << "Sorted container = ";
    for (Iterator it = begin; it != end; ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

template <typename Container>template <typename Iterator>void PmergeMe<Container>::swapData(Iterator begin, Iterator end)
{
    //Iterator it = begin;
    typename Container::iterator it = begin;
    size_t size = end - begin;
    if (size % 2)
        --size;
    for (size_t i = 0; i <= size; i += 2) // ? Is it necessary or I can use iterator ? (With < _container.size())
    {
        if ((it + 1) != end && *it > *(it + 1))
            std::swap(*it, *(it + 1));
        it += 2;
    }
}

template <typename Container>template <typename Iterator>void PmergeMe<Container>::sortHalf(Iterator begin, Iterator end)
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

template <typename Container>
template <typename Iterator>
void PmergeMe<Container>::sortRest(Iterator begin, Iterator end)
{
    typename Container::iterator itCon = _container.begin();
    int value;
    //for (Iterator it = begin; it != end; ++it)
    //{
    //    value = *it;
    //    while (*it > *itCon)
    //        ++itCon;
    //    if (*it != *itCon )//&& *it != *std::max_element(_container.begin(), _container.end()))
    //    {
    //        _container.erase(it);
    //        _container.insert(itCon, value);
    //        it = begin;
    //    }
    //    itCon = _container.begin();
    //}
    (void)begin;
    (void)end;

    for (unsigned long i = _container.size() / 2; i < _container.size(); ++i)
    {
        value = _container[i];
        while (*itCon < value)
            itCon++;
        _container.erase(_container.begin() + i);
        _container.insert(itCon, value);
        //i = _container.size() / 2;
        itCon = _container.begin();
        if (isSorted())
            break;
    }
    
    //(void)itCon;
//
    //for (unsigned long i = 0; i < _container.size(); ++i)
    //{
    //    value = _container[i];
    //    int j = 0;
    //    while (value > _container[j])
    //        ++j;
    //    if (value != _container[j])
    //    {
    //        _container.erase(_container.begin() + i);
    //        _container.insert(_container.begin() + j, value);
    //        i = 0;  // Reset index to start from the beginning
    //    }
    //}
}



template <typename Container>
bool PmergeMe<Container>::isSorted(void)
{
    typename Container::iterator it;
    for (it = _container.begin(); it != _container.end(); ++it)
    {
        if (*it > *(it + 1) && (it + 1) != _container.end())
            return (false);
    }
    return (true);
}

//TODO Cleanup ! And timestamp !