/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:24:33 by malord            #+#    #+#             */
/*   Updated: 2023/02/20 12:01:23 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Exception.hpp"

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Bureaucrat default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    try
    {
        if (grade < 1)
            throw MyException::GradeTooHighException();
        else if (grade > 150)
            throw MyException::GradeTooLowException();
    }
    catch (MyException::GradeTooHighException &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    catch (MyException::GradeTooLowException &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
    this->_grade = copy._grade;
    this->_name  = copy._name;
    *this        = copy;
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    this->_grade = rhs._grade;
    this->_name  = rhs._name;
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

void Bureaucrat::setGradeUp(void)
{
    try
    {
        if (this->_grade - 1 < 1)
            throw MyException::GradeTooHighException();
        else
            this->_grade--;
    }
    catch (MyException::GradeTooHighException &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

void Bureaucrat::setGradeDown(void)
{
    try
    {
        if (this->_grade + 1 > 150)
            throw MyException::GradeTooLowException();
        else
            this->_grade++;
    }
    catch (MyException::GradeTooLowException &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        //form.beSigned(*this);
        if (this->_grade > form.getGradeToSign())
            throw MyException::GradeTooLowException();
    }
    catch (MyException::GradeTooLowException &e)
    {
        std::cerr << "Error: " << this->getName() << " couldn't sign " << form.getName() << " because " << e.what()
                  << std::endl;
        return;
    }
    std::cout << this->getName() << " signed " << form.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs)
{
    o << rhs.getName() << " bureaucrat grade " << rhs.getGrade();
    return (o);
}