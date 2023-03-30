/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:09 by malord            #+#    #+#             */
/*   Updated: 2023/03/30 11:56:06 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP_
#define RPN_HPP_

#include "Exception.hpp"
#include <iomanip>
#include <iostream>
#include <stack>
#include <string>
class RPN
{
  private:
    std::stack<char> _rpn;
    std::stack<int>  _digits;

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