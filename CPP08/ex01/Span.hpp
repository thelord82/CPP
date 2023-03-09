/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:21:53 by malord            #+#    #+#             */
/*   Updated: 2023/03/09 13:28:10 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include "Exception.hpp"

class Span
{
  private:
    std::vector<int> _numbers;
    unsigned int     _size;
    Span(void);
    std::vector<int>::iterator initializeVector(void);

  public:
    Span(unsigned int N);
    Span(const Span &copy);
    Span &operator=(const Span &rhs);
    virtual ~Span(void);

    void                       addNumber(int num);
    int                        getValue(unsigned int index) const;
    int                        getSize(void) const;
    unsigned int               shortestSpan(void);
    unsigned int               longestSpan(void);
    void                       fillVector(void);
};

#endif