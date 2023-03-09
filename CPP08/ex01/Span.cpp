/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:21:56 by malord            #+#    #+#             */
/*   Updated: 2023/03/08 19:43:03 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) // default constructor
{
    return;
}

Span::Span(unsigned int N) : _size(N)
{
    std::cout << "Parameter constructor called" << std::endl;
}

Span::Span(const Span &copy) // Shallow copy, implement deep copy for logic
{
    this->_numbers = copy._numbers;
    *this          = copy;
}

Span &Span::operator=(const Span &rhs)
{
    if (this != &rhs)
        this->_numbers = rhs._numbers;
    return (*this);
}

Span::~Span(void)
{
    std::cout << "Default destructor called" << std::endl;
}

void Span::addNumber(int num)
{
    if (this->_numbers.size() < this->_size)
        _numbers.push_back(num);
    else
        throw std::exception();
    return;
}

int Span::getValue(unsigned int index) const
{
    return (this->_numbers.at(index));
}

int Span::getSize(void) const
{
    return (this->_size);
}

unsigned int Span::shortestSpan(void)
{
    //std::sort(_numbers.begin(), _numbers.end()); // Sorting the vector or using abs will both work
    unsigned int span = abs(_numbers.at(1) - _numbers.at(0));
    for (unsigned int i = 0; i < _numbers.size(); ++i)
    {
        for (unsigned int j = i + 1; j < _numbers.size(); ++j)
        {
            if (abs(_numbers.at(j) - _numbers.at(i)) > static_cast<int>(span));
            else
                span = abs(_numbers.at(j) - _numbers.at(i));
        }
    }
    return (span);
}

unsigned int Span::longestSpan(void)
{
    if (_numbers.size() > 1)
    {
        int max = *max_element(_numbers.begin(), _numbers.end());
        int min = *min_element(_numbers.begin(), _numbers.end());
        return (max - min);
    }
    else
        throw std::exception();
}

void Span::fillVector(void)
{
    srand(time(NULL));

    //DOESN'T WORK
    //std::vector<int>::const_iterator it;
    //for (it = _numbers.begin(); it != _numbers.end(); ++it)
    //    this->addNumber(rand() % 100);

    //WORKS
    for (unsigned int i = 0; i < this->_size; ++i)
    {
        this->addNumber(rand() % 100);
        //std::cout << "value = " << this->_numbers.at(i) << std::endl;
    }
    
    //DOESN'T WORK
    //srand(time(NULL));
    //std::for_each(this->_numbers.begin(), this->_numbers.end(), printTest);
}