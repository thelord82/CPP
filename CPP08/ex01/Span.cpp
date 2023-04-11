/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:21:56 by malord            #+#    #+#             */
/*   Updated: 2023/04/11 14:14:32 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) // default constructor
{
    return;
}

Span::Span(unsigned int N) : _size(N)
{
    //std::cout << "Parameter constructor called" << std::endl;
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
    //std::cout << "Default destructor called" << std::endl;
}

void Span::addNumber(int num)
{
    if (this->_numbers.size() < this->_size)
        _numbers.push_back(num);
    else
        throw MyException::GreaterThanSize();
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
    if (_numbers.size() > 1)
    {
        std::vector<int> copy = _numbers;
        std::sort(copy.begin(), copy.end());
        unsigned int span = abs(copy.at(1) - copy.at(0));
        if (span == 0)
            return (span);
        for (unsigned int i = 1; i < _numbers.size(); ++i)
        {
            if (copy.at(i) - copy.at(i - 1) < static_cast<int>(span))
                span = copy.at(i) - copy.at(i - 1);
            if (span == 0)
                break;
        }
        return (span);
    }
    else
        throw MyException::NotEnoughElements();
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
        throw MyException::NotEnoughElements();
}

std::vector<int>::iterator Span::initializeVector(void)
{
    for (unsigned int i = this->_numbers.size(); i < this->_size; ++i)
        this->addNumber(0);
    return (_numbers.begin());
}

void Span::fillVector(void)
{
    srand(time(NULL));
    std::vector<int>::iterator it;
    for (it = initializeVector(); it != _numbers.end(); ++it)
        (*it) = rand() % 1000;
}