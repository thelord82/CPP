/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:32:59 by malord            #+#    #+#             */
/*   Updated: 2023/03/15 11:33:39 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exception.hpp"

const char *MyException::GradeTooLowException::what() const throw()
{
    return ("Grade is too low.");
}

const char *MyException::GradeTooHighException::what() const throw()
{
    return ("Grade is too high.");
}

const char *MyException::FormNotSignedException::what() const throw()
{
    return ("Form is not signed.");
}

const char *MyException::ExecutionFailedException::what() const throw()
{
    return ("Execution of the form failed.");
}

const char *MyException::FormNotFoundException::what() const throw()
{
    return ("Error: Form doesn't exist.");
}