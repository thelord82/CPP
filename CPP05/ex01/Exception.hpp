/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:33:01 by malord            #+#    #+#             */
/*   Updated: 2023/02/16 14:20:27 by malord           ###   ########.fr       */
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
    class GradeTooLowException : public std::exception
    {
      public:
        virtual const char *what() const throw()
        {
            return ("Grade can't be lower than 150");
        }
    };
    class GradeTooHighException : public std::exception
    {
      public:
        virtual const char *what() const throw()
        {
            return ("Grade can't be higher than 1.");
        }
    };
};
#endif