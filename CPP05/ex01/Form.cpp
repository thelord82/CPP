/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:18:35 by malord            #+#    #+#             */
/*   Updated: 2023/03/15 10:57:45 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("none"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "Form default constructor called." << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << "Form constructor called." << std::endl;
    if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
        throw MyException::GradeTooHighException();
    else if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
        throw MyException::GradeTooLowException();
}

Form::Form(Form const &copy)
    : _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign),
      _gradeToExecute(copy._gradeToExecute)
{
    *this = copy;
    std::cout << "Form copy constructor called." << std::endl;
}

Form &Form::operator=(Form const &rhs)
{
    std::cout << "Form = operator overload called." << std::endl;
    if (this != &rhs)
    {
        this->_isSigned = rhs._isSigned;
    }
    return (*this);
}

Form::~Form(void)
{
    std::cout << "Form destructor called." << std::endl;
}

std::string Form::getName(void) const
{
    return (this->_name);
}

bool Form::getSignedStatus(void) const
{
    return (this->_isSigned);
}

int Form::getGradeToSign(void) const
{
    return (this->_gradeToSign);
}

int Form::getGradeToExecute(void) const
{
    return (this->_gradeToExecute);
}

void Form::beSigned(Bureaucrat &powerfulDude)
{
    if (powerfulDude.getGrade() > this->getGradeToSign())
        throw MyException::GradeTooLowException();
    else
        this->_isSigned = true;
}

std::ostream &operator<<(std::ostream &o, const Form &rhs)
{
    o << "Form : " << rhs.getName() << std::endl
      << "Minimum grade to sign: " << rhs.getGradeToSign() << std::endl
      << "Minimum grade to execute: " << rhs.getGradeToExecute() << std::endl
      << "Signed status: " << rhs.getSignedStatus();
    return (o);
}