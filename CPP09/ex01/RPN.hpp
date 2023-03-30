/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:09 by malord            #+#    #+#             */
/*   Updated: 2023/03/30 09:43:16 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP_
#define RPN_HPP_

#include <string>
#include <stack>
#include <iostream>
#include <iomanip>
#include "Exception.hpp"
class RPN
{
private:
    std::stack<char> _rpn;
    std::stack<int> _digits;
    //std::stack<char> _operators;
public:
    RPN(void);
    RPN(const RPN &copy);
    RPN &operator=(const RPN &rhs);
    virtual ~RPN(void);
    bool isOperator(char c) const;
    void fillStack(std::string expression);
    long doOperation(void);
    void printRPN(void);
};

#endif