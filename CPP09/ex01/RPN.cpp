/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:07 by malord            #+#    #+#             */
/*   Updated: 2023/03/24 10:58:51 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
    //std::cout << "Default constructor called" << std::endl;
}

RPN::RPN(const RPN &copy) : _rpn(copy._rpn)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

RPN &RPN::operator=(const RPN &rhs)
{
    if (this != &rhs)
        this->_rpn = rhs._rpn;
    return (*this);
}

RPN::~RPN(void)
{
    //std::cout << "Default destructor called" << std::endl;
}

void RPN::fillStack(std::string expression)
{
    //THIS uses a temporary stack to get the class stack data in the good order
    
    std::stack<char> tmpStack;
    for (unsigned long i = 0; i < expression.length(); ++i)
    {
        if (expression.at(i) == ' ')
            ++i;
        tmpStack.push(expression.at(i));
    }
    for (int i = 0; (!tmpStack.empty()); ++i)
    {
        _rpn.push(tmpStack.top());
        tmpStack.pop();
    }

    //THIS prints the content of the stack in the good order
    //std::cout << "--------------" << std::endl;
    //std::cout << "printing the stack contents : " << std::endl;
    //while (!_rpn.empty())
    //{
    //    std::cout << "top = " << _rpn.top() << std::endl;
    //    _rpn.pop();
    //}
}