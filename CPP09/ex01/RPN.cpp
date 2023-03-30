/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:07 by malord            #+#    #+#             */
/*   Updated: 2023/03/30 11:55:59 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
    // std::cout << "Default constructor called" << std::endl;
}

RPN::RPN(const RPN &copy) : _rpn(copy._rpn), _digits(copy._digits)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

RPN &RPN::operator=(const RPN &rhs)
{
    if (this != &rhs)
    {
        this->_rpn    = rhs._rpn;
        this->_digits = rhs._digits;
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
    unsigned int     index, len = 0;
    std::stack<char> tmpStack;
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
        {
            if (!isOperator(expression.at(i)))
                tmpStack.push(expression.at(i) - 48);
            else
                tmpStack.push(expression.at(i));
        }
        else
            throw MyException::WrongInputException();
    }
    while (!tmpStack.empty())
    {
        _rpn.push(tmpStack.top());
        tmpStack.pop();
    }
}

long RPN::doOperation(void)
{
    long res = (_digits.top());
    _digits.pop();
    int num = (_digits.top());
    _digits.pop();
    switch (_rpn.top())
    {
    case '+':
        res += (num);
        _digits.push(res);
        return (res);

    case '-':
        res = num - res;
        _digits.push(res);
        return (res);

    case '*':
        res *= (num);
        _digits.push(res);
        return (res);

    case '/':
        res /= (num);
        _digits.push(res);
        return (res);
    }
    return (res);
}

void RPN::printRPN(void)
{
    long result = 0;

    while (!_rpn.empty())
    {
        while (!isOperator(_rpn.top()))
        {
            _digits.push(_rpn.top());
            _rpn.pop();
        }
        if (_digits.size() < 2)
            std::cerr << "Input error" << std::endl;
        else
            result = doOperation();
        _rpn.pop();
    }
    // THIS only uses a temp stack to print the result in the "right" order
    if (_digits.size() > 1)
    {
        std::stack<int> printStack;
        while (!_digits.empty())
        {
            printStack.push(_digits.top());
            _digits.pop();
        }
        while (!printStack.empty())
        {
            std::cout << printStack.top() << " ";
            printStack.pop();
        }
        std::cout << std::endl;
    }
    else
        std::cout << result << std::endl;
}