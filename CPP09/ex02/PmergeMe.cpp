/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:17 by malord            #+#    #+#             */
/*   Updated: 2023/04/06 11:17:26 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>PmergeMe<Container>::PmergeMe(void)
{
    // std::cout << "Default constructor called" << std::endl;
}

template <typename Container>PmergeMe<Container>::PmergeMe(const PmergeMe<Container> &copy)
{
    *this = copy;
}

template <typename Container>PmergeMe<Container> &PmergeMe<Container>::operator=(const PmergeMe &rhs)
{
    if (this != &rhs)
    {
        this->_vec = rhs._vec;
        //this->_deq  = rhs._deq;
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
                    //_vec.push_back(std::stoi(buffer));
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
                //_vec.push_back(std::stoi(argv[i]));
        }
    }
    //_deq.assign(_vec.begin(), _vec.end());
    
    mergeInsert();

    // THIS will be removed (print test)
    //printContainer(_vec.begin(), _vec.end());
    //printContainer(_deq.begin(), _deq.end());
    return (true);
}

template <typename Container>void PmergeMe<Container>::mergeInsert(void)
{
    //swapData(_vec.begin(), _vec.end());

    swapData(_container.begin(), _container.end());
    //printContainer(_vec.begin(), _vec.end());
    sortVector();
    //std::cout << "------------" << std::endl;
    //swapData(_deq.begin(), _deq.end());
    //std::cout << "DEQUE" << std::endl;
    //printContainer(_deq.begin(), _deq.end());
    //sortDeque();
}

template <typename Container>void PmergeMe<Container>::sortVector(void)
{
    int last;
    bool odd = false;
    //std::vector<int>::iterator it = _vec.begin();
    //typename Container<int>::iterator it = _container.begin();
    typename Container::iterator it = _container.begin();
    
    int value;
    //size_t size = _vec.end() - _vec.begin();
    size_t size = _container.end() - _container.begin();
    if (size % 2)
    {
        --size;
        //last = *(_vec.end() - 1);
        last = *(_container.end() - 1);
        odd = true;
    }
    for (unsigned long i = 1; i <= size / 2; ++i)
    {
        ++it;
        value = _container[i];
        _container.erase(_container.begin() + i);
        _container.push_back(value);
        //value = _vec[i];
        //_vec.erase(_vec.begin() + i);
        //_vec.push_back(value);
    }
    if (odd == true)
    {
        _container.erase(_container.begin() + (_container.size() / 2));
        _container.push_back(last);
        //_vec.erase(_vec.begin() + (_vec.size() / 2));
        //_vec.push_back(last);
    }

    sortHalf(_container.begin(), _container.begin() + (_container.size() / 2));
    sortRest(_container.begin() + _container.size() / 2, _container.end());

    printContainer(_container.begin(), _container.end());
}

//void PmergeMe::sortDeque(void)
//{
//    int last;
//    bool odd = false;
//    std::deque<int>::iterator it = _deq.begin();
//    int value;
//    size_t size = _deq.end() - _deq.begin();
//    if (size % 2)
//    {
//        --size;
//        last = *(_deq.end() - 1);
//        odd = true;
//    }
//    for (unsigned long i = 1; i <= size / 2; ++i)
//    {
//        ++it;
//        value = _deq[i];
//        _deq.erase(_deq.begin() + i);
//        _deq.push_back(value);
//    }
//    if (odd == true)
//    {
//        _deq.erase(_deq.begin() + (_deq.size() / 2));
//        _deq.push_back(last);
//    }
//    
//    sortHalf(_deq.begin(), _deq.begin() + (_deq.size() / 2));
//    sortRest(_deq.begin() + _deq.size() / 2, _deq.end());
//    printContainer(_deq.begin(), _deq.end());
//}

template<typename Container>template <typename Iterator>void PmergeMe<Container>::printContainer(Iterator begin, Iterator end)
{
    std::cout << "Sorted container = ";
    for (Iterator it = begin; it != end; ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

template <typename Container>template <typename Iterator>void PmergeMe<Container>::swapData(Iterator begin, Iterator end)
{
    Iterator it = begin;
    size_t size = end - begin;
    if (size % 2)
        --size;
    for (size_t i = 0; i <= size; ++i)
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
    typename Container::iterator itVec = _container.begin(); // Use _container instead of _vec
    int value;
    for (Iterator it = begin; it != end; ++it)
    {
        value = *it;
        while (*it > *itVec)
            ++itVec;
        _container.erase(it); // Use _container instead of _vec
        _container.insert(itVec, value); // Use _container instead of _vec
        itVec = _container.begin(); // Use _container instead of _vec
    }
}

//template <typename Container>
//class PmergeMe
//{
//    private:
//        std::vector<int> _rawData;
//        Container _pairs;
//    public:
//        PmergeMe(void);
//        PmergeMe(const PmergeMe &copy);
//        PmergeMe &operator=(const PmergeMe &rhs);
//        virtual ~PmergeMe(void);
//
//        bool checkNumbers(int argc, char **argv);
//        void pairData(void);
//};
//bool compSecond(std::pair<int, int>& p1, std::pair<int, int> &p2);

//TODO Templating in progress...
 