/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:28:34 by malord            #+#    #+#             */
/*   Updated: 2023/03/15 10:45:20 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
    std::cout << "Shrubbery default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137), _target(target)
{
    std::cout << "Shrubbery Parameter constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy)
{
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    this->_target = rhs._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "Shrubbery destructor called." << std::endl;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
    return (this->_target);
}

bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const
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
        std::ofstream ofs(this->getTarget().append("_shrubbery"), std::ios_base::app);
        ofs << "     *     " << std::endl;
        ofs << "    ***    " << std::endl;
        ofs << "   *****   " << std::endl;
        ofs << "  *******  " << std::endl;
        ofs << "   *****   " << std::endl;
        ofs << "  *******  " << std::endl;
        ofs << " ********* " << std::endl;
        ofs << "  *******  " << std::endl;
        ofs << " ********* " << std::endl;
        ofs << "***********" << std::endl;
        ofs << "    |||    " << std::endl;
        ofs << "    |||    " << std::endl;
        ofs << "    |||    " << std::endl;
        ofs.close();
        return (true);
    }
}