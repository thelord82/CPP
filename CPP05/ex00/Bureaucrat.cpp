/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:24:33 by malord            #+#    #+#             */
/*   Updated: 2023/03/15 09:47:41 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Exception.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < 1)
        throw MyException::GradeTooHighException();
    else if (grade > 150)
        throw MyException::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name), _grade(copy._grade)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this        = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    std::cout << "= operator overload called" << std::endl;
    if (this != &rhs)
        this->_grade = rhs._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void Bureaucrat::setGradeDown(void)
{
    if (this->_grade + 1 > 150)
        throw MyException::GradeTooLowException();
    else
        this->_grade++;
}

void Bureaucrat::setGradeUp(void)
{
    if (this->_grade - 1 < 1)
        throw MyException::GradeTooHighException();
    else
        this->_grade--;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs)
{
    o << rhs.getName() << " bureaucrat grade " << rhs.getGrade();
    return (o);
}