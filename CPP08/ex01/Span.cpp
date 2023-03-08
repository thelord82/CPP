/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:21:56 by malord            #+#    #+#             */
/*   Updated: 2023/03/08 12:02:48 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) // default constructor
{
}

Span::Span(unsigned int N) : _numbers(N)
{
    std::cout << "Parameter constructor called" << std::endl;
}

Span::Span(const Span &copy) // Shallow copy, implement deep copy for logic
{
    this->_numbers = copy._numbers;
    *this = copy;
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
    this->_numbers.at(4) = num;
    return;
}

int Span::getValue(unsigned int index)
{
    return (this->_numbers.at(index));
}

unsigned int Span::shortestSpan(void)
{
    return (1);
}

unsigned int Span::longestSpan(void)
{
    return (2);
}