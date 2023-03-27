/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 08:49:08 by malord            #+#    #+#             */
/*   Updated: 2023/03/27 10:36:07 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exception.hpp"

const char *MyException::NoQuotesException::what() const throw()
{
    return ("You must input one reverse polish notation between double quotes");
}

const char *MyException::WrongInputException::what() const throw()
{
    return ("There is a problem with the input of your RPN");
}

const char *MyException::HigherNumberException::what() const throw()
{
    return ("Numbers must be positive digits only (0-9)");
}