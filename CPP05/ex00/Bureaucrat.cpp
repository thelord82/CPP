/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:24:33 by malord            #+#    #+#             */
/*   Updated: 2023/02/16 12:04:51 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
    this->_grade = copy._grade;
    this->_name = copy._name;
    *this = copy;
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat&Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->_grade = rhs._grade;
    this->_name = rhs._name;
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
    this->_grade++;
}

void Bureaucrat::setGradeUp(void)
{
    this->_grade--;
}