/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 08:46:38 by malord            #+#    #+#             */
/*   Updated: 2023/03/30 12:05:14 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP_
#define EXCEPTION_HPP_

#include <stdexcept>
#include <string>
#include <iomanip>
class MyException : public std::exception
{
    public:
        class NoQuotesException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
    public:
        class WrongInputException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
    public:
        class HigherNumberException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
    public:
        class InputErrorException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif