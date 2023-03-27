/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:07 by malord            #+#    #+#             */
/*   Updated: 2023/03/27 15:11:54 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
    // std::cout << "Default constructor called" << std::endl;
}

RPN::RPN(const RPN &copy) : _rpn(copy._rpn)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

RPN &RPN::operator=(const RPN &rhs)
{
    if (this != &rhs)
    {
        this->_rpn = rhs._rpn;
    }
    return (*this);
}

RPN::~RPN(void)
{
    // std::cout << "Default destructor called" << std::endl;
}

bool RPN::isOperator(char c) const
{
    std::string operators = "+-*/";
    return (operators.find(c) != std::string::npos ? true : false);
}

void RPN::fillStack(std::string expression)
{
    unsigned int index, len = 0;
    for (unsigned long i = 0; i < expression.length(); ++i)
    {
        if (expression.at(i) == ' ')
            ++i;
        index = i;
        while (isdigit(expression.at(index))) // THIS checks if number is > 9
        {
            if (index > 0 && !isdigit(expression.at(index - 1)) && expression.at(index - 1) != ' ')
                throw MyException::HigherNumberException();
            len++;
            index++;
            if (len > 1)
                throw MyException::HigherNumberException();
        }
        len = 0;
        if (isdigit(expression.at(i)) || isOperator(expression.at(i)))
            _rpn.push(expression.at(i));
        else
            throw MyException::WrongInputException();
    }

    //// THIS prints stack _rpn
    //std::cout << "--------------" << std::endl;
    //std::cout << "Printing the stack contents : " << std::endl;
    //while (!_rpn.empty())
    //{
    //    std::cout << "rpn top = " << _rpn.top() << std::endl;
    //    _rpn.pop();
    //}   
}

long RPN::doOperation(char op, char one, char two)
{
    switch (op)
    {
        case '+' :
            return ((one - 48) + (two - 48));
        case '-' :
            return ((one - 48) - (two - 48));
        case '*' :
            return ((one - 48) * (two - 48));
        case '/' :
            return ((one - 48) / (two - 48));
    }
    return (-1);
}

void RPN::printRPN(void)
{
    long result = 0;
    
    while (!_rpn.empty())
    {
        while (isOperator(_rpn.top()))
        {
            _operators.push(_rpn.top());
            _rpn.pop();
            if (_rpn.empty())
                break;
        }

        while (isdigit(_rpn.top()))
        {
            _digits.push(_rpn.top());
            _rpn.pop();
            if (_rpn.empty())
                break;
        }

        if (_digits.size() < 2 && !_rpn.empty())
            throw MyException::WrongInputException();

        // THIS is probably garbage
        //int one = _rpn.top();
        //_rpn.pop();
        //int two = _rpn.top();
        //result += doOperation(_operators.top(), one, two);
        //_operators.pop();
    }
    std::cout << "Result = " << result << std::endl;
}
