/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:28:23 by malord            #+#    #+#             */
/*   Updated: 2023/02/21 11:53:55 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : _gradeToExecute(5), _gradeToSign(25), _target("null")
{
    std::cout << "Presidential constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm(target, 5, 25), _gradeToExecute(5), _gradeToSign(25),
      _target(target)
{
    std::cout << "President Parameter constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy)
    : _gradeToExecute(5), _gradeToSign(25)
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

int PresidentialPardonForm::getGradeToExecute(void) const
{
    return (this->_gradeToExecute);
}

int PresidentialPardonForm::getGradeToSign(void) const
{
    return (this->_gradeToSign);
}

bool PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try
    {
        if (executor.getGrade() > this->_gradeToExecute)
            throw MyException::GradeTooLowException();
        else if (this->getSignedStatus() == false)
            throw MyException::FormNotSignedException();
        else
        {
            std::cout << this->_target << " has got pardoned by Zaphod Beeblebrox" << std::endl;
            return (true);
        }
    }
    catch (MyException::GradeTooLowException &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return (false);
    }
    catch (MyException::FormNotSignedException &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return (false);
    }
}