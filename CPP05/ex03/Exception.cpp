/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:32:59 by malord            #+#    #+#             */
/*   Updated: 2023/02/21 15:04:38 by malord           ###   ########.fr       */
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