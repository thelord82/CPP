/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:28:34 by malord            #+#    #+#             */
/*   Updated: 2023/02/20 15:18:06 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm(void)
{
    std::cout << "Shruberry default constructor called." << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(std::string target)
{
    std::cout << "Shruberry Parameter constructor called" << std::endl;
}

ShruberryCreationForm::ShruberryCreationForm(ShruberryCreationForm const &copy)
{
    *this = copy;
}

ShruberryCreationForm &ShruberryCreationForm::operator=(ShruberryCreationForm const &rhs)
{
    *this = rhs;
    return (*this);
}

ShruberryCreationForm::~ShruberryCreationForm(void)
{
    std::cout << "Shruberry destructor called." << std::endl;
}