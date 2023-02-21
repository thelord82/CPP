/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:33:01 by malord            #+#    #+#             */
/*   Updated: 2023/02/21 15:05:55 by malord           ###   ########.fr       */
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
        virtual const char *what() const throw();
    };
    class GradeTooHighException : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };
    class FormNotSignedException : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };
    class ExecutionFailedException : public std::exception
    {
      public:
        virtual const char *what() const throw();
    };
};
#endif