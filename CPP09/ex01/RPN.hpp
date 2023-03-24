/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:20:09 by malord            #+#    #+#             */
/*   Updated: 2023/03/24 10:35:55 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP_
#define RPN_HPP_

#include <string>
#include <stack>
#include <iostream>
#include <iomanip>
class RPN
{
private:
    std::stack<char> _rpn;
public:
    RPN(void);
    RPN(const RPN &copy);
    RPN &operator=(const RPN &rhs);
    virtual ~RPN(void);
    void fillStack(std::string expression);
};


#endif