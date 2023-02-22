/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:01:23 by malord            #+#    #+#             */
/*   Updated: 2023/02/22 09:27:57 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const &copy)
{
    std::cout << "Intern copy constructor called" << std::endl;
    *this = copy;
}

Intern &Intern::operator=(Intern const &rhs)
{
    if (this != &rhs)
        *this = rhs;
    return (*this);
}

Intern::~Intern(void)
{
    std::cout << "Intern destructor called." << std::endl;
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    std::string forms[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    for (int i = 0; i < 3; ++i)
    {
        if (forms[i] == formName)
        {
            switch (i)
            {
            case 0:
                std::cout << "Intern creates " << formName << std::endl;
                return (new RobotomyRequestForm(target));
                break;
            case 1:
                std::cout << "Intern creates " << formName << std::endl;
                return (new ShrubberyCreationForm(target));
                break;
            case 2:
                std::cout << "Intern creates " << formName << std::endl;
                return (new PresidentialPardonForm(target));
            }
        }
    }
    std::cout << "Error: form doesn't exist" << std::endl;
    return (NULL);
}