/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:07 by malord            #+#    #+#             */
/*   Updated: 2023/03/30 09:44:12 by malord           ###   ########.fr       */
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
            tmpStack.push(expression.at(i));
        else
            throw MyException::WrongInputException();
    }
    while (!tmpStack.empty())
    {
        _rpn.push(tmpStack.top());
        tmpStack.pop();
    }
    // THIS prints stack _rpn
    //std::cout << "--------------" << std::endl;
    //std::cout << "Printing the stack contents : " << std::endl;
    //while (!_rpn.empty())
    //{
    //    std::cout << "rpn top = " << _rpn.top() << std::endl;
    //    _rpn.pop();
    //}   
}

long RPN::doOperation(void)
{
    long res = (_digits.top() - 48);
    _digits.pop();

    while (!_digits.empty())
    {
        int num = (_digits.top() - 48);
        _digits.pop();
        
        switch (_rpn.top())
        {
            case '+' :
                res += num;
                break;
                
            case '-' :
                res -= num;
                break;
                
            case '*' :
                res *= num;
                break;
                
            case '/' :
                res /= num;
                break;
        }
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
            result += doOperation();
        _rpn.pop();
    }
    std::cout << "Result = " << result << std::endl;
}

//TODO Ajuster doOperation pour ne prendre que 2 chiffres quand il reste des operateurs
//TODO Faire une fonction final operation pour vider la stack de chiffres avec dernier operateur