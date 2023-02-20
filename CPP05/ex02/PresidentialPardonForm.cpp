/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:28:23 by malord            #+#    #+#             */
/*   Updated: 2023/02/20 15:17:58 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
    std::cout << "Presidential constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
    std::cout << "President Parameter constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy)
{
    *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    *this = rhs;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "Presidential destructor called." << std::endl;
}