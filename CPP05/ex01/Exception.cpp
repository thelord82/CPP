/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:32:59 by malord            #+#    #+#             */
/*   Updated: 2023/03/15 10:13:15 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exception.hpp"

const char *MyException::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const char *MyException::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}