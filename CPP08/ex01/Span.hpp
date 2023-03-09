/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal <mal@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:21:53 by malord            #+#    #+#             */
/*   Updated: 2023/03/08 19:05:24 by mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Span
{
  private:
    std::vector<int> _numbers;
    unsigned int     _size;
    Span(void);

  public:
    Span(unsigned int N);
    Span(const Span &copy);
    Span &operator=(const Span &rhs);
    virtual ~Span(void);

    void         addNumber(int num);
    int          getValue(unsigned int index) const;
    int          getSize(void) const;
    unsigned int shortestSpan(void);
    unsigned int longestSpan(void);
    void         fillVector(void);
};

#endif