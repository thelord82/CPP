/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:18:35 by malord            #+#    #+#             */
/*   Updated: 2023/02/20 09:38:32 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << "Form constructor called." << std::endl;
}

Form::Form(Form const &copy)
    : _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign),
      _gradeToExecute(copy._gradeToExecute)
{
    *this = copy;
    std::cout << "Form copy constructor called." << std::endl;
}

Form &Form::operator=(Form const &rhs)
    : _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign),
     _gradeToExecute(copy._gradeToExecute)
{
    std::cout << "Form = operator overload called." << std::endl;
    return (*this);
}

Form::~Form(void)
{
    std::cout << "Form destructor called." << std::endl;
}

const std::string Form::getName(void) const
{
    return (this->_name);
}

bool Form::getSignedStatus(void) const
{
    return (this->_isSigned);
}

const int Form::getGradeToSign(void) const
{
    return (this->_gradeToSign);
}

const int Form::getGradeToExecute(void) const
{
    return (this->_gradeToExecute);
}

std::ostream &Form::operator<<(std::ostream &o, const Form &rhs)
{
    o << "Form : " << rhs.getName() << std::endl
      << "Minimum grade to sign: " << rhs.getGradeToSign() << std::endl
      << "Minimum grade to execute: " << rhs.getGradeToExecute() << std::endl
      << "Signed status: " << rhs.getSignedStatus() << std::endl:
}