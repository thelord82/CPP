/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:33:01 by malord            #+#    #+#             */
/*   Updated: 2023/03/09 13:23:34 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP_
#define EXCEPTION_HPP_
#include <iostream>
#include <stdexcept>
#include <string>

class MyException : public std::exception
{
  public:
    class GreaterThanSize : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };
    class NotEnoughElements : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };
};
#endif