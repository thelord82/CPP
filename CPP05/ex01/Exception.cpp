/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:32:59 by malord            #+#    #+#             */
/*   Updated: 2023/02/16 14:52:50 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exception.hpp"

const char *MyException::GradeTooLowException::what() const throw()
{
    return ("Grade can't be lower than 150.");
}

const char *MyException::GradeTooHighException::what() const throw()
{
    return ("Grade can't be higher than 1.");
}