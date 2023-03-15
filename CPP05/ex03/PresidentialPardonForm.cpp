/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:28:23 by malord            #+#    #+#             */
/*   Updated: 2023/03/15 10:43:08 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : _target("null")
{
    std::cout << "Presidential constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5), _target(target)
{
    std::cout << "President Parameter constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy)
{
    *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    this->_target = rhs._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "Presidential destructor called." << std::endl;
}

bool PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
    {
        throw MyException::GradeTooLowException();
        return (false);
    }
    else if (this->getSignedStatus() == false)
    {
        throw MyException::FormNotSignedException();
        return (false);
    }
    else
    {
        std::cout << this->_target << " has got pardoned by Zaphod Beeblebrox" << std::endl;
        return (true);
    }
}